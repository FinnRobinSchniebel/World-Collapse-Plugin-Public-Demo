// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers/Map.h"
#include "Templates/Tuple.h"
#include "WC_Model.h"
#include "WC_Generation_Grid.generated.h"


UENUM(BlueprintType)
enum class isAvailable : uint8  // Use int32 to map enum to int
{
	invalid = 0,  // cannot place
	valid = 1, // can place
	closed = 2, // tile is already occupide but valid
	inaccessible = 3, //in the case a tile is completely and fully blocked in on all sides.
};

/// <summary>
/// Used in an min-queue array and hold the vaule of the entropy (used in array) and  the location in the grid that it belongs to (1d location).
/// </summary>
USTRUCT(BlueprintType)
struct WORLDCOLLAPSE_API FEntropyLocation
{

	GENERATED_BODY()

	//stores the entropy value that corresponds to a tiles current entropy
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	double entropy;

	//The 1D location of the tile in the grid that the entropy belongs to
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	int32 location;

	//used for heat map 
	//Keeps track of how many times a location has been sent back into the min-queue for later calculation
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	int32 ReturnedbackCount;

	FEntropyLocation(double _entropy = 0.0, int32 _location = 0) {

		entropy = _entropy;
		location = _location;
		ReturnedbackCount = 0;

	}

	bool operator==(const FEntropyLocation& Other) const
    {
        
		return location == Other.location;

    }

};


USTRUCT(BlueprintType)
struct WORLDCOLLAPSE_API FGridTile {
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	float entropy;
	//current geomety info
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	FSoftObjectPath tile;

	// an integer of how many times a tiles needs to be rotated by 90 degrees before being placed.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	int32 PlacedRotation; //0 for 0, 1 for 90, 2 for 180, 3 for 270
	
	//the rules the time currently has from its neighbors
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	FRuleSet CurrentRules;

	//the rules that it could have if a tile around it is being placed to see if it could fit in that location.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	FRuleSet TestRules;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	TArray<float> heatMapVals;
	
	//the heat value from the heat map that is gotten from the pixel that corresponds to the location of the tile.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	float ownHeat;


	//options being tested (not applied)
	//the hypothetical tiles that could fill this spot given the testRules
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	FTileBucket testOptions;
	//options currently available
	//the current tiles that a can be placed given its currentRules.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	FTileBucket Options;
	
	/**
	* Create a basic Grid tile.
	* Pass boolean true if you want to mark it as invalid (useful for error returns)
	*/
	FGridTile(bool invalid = false) {
		if (invalid) {
			entropy = -1;
			//tile is not set
			PlacedRotation = -1;
			CurrentRules = FRuleSet();

			heatMapVals.Init(1.0, 6);
			return;
		}
		heatMapVals.Init(1.0, 6);
		ownHeat = 1.0;
		entropy = 0;
		//tile is not set
		PlacedRotation = 0;
		CurrentRules = FRuleSet();
	}
	/**
	* Invalidate a grid tile 
	* Used for returning to show no tile exists.
	*/
	void invalidate() {
		entropy = -1;
		PlacedRotation = -1;
	}

	/**
	* Only use to find out if a returned tile is valid.
	*/
	bool isInvalid() {
		if (entropy == -1 && PlacedRotation == -1) {
			return true;
		}
		return false;
	}
	/// <summary>
	/// called to test if an update is possible without eliminating all tile options of this grid_tile
	/// </summary>
	/// <param name="TurnedRule">The rule that is to be updated (rotated as in the correct rule for that direction)</param>
	/// <param name="wall"> the wall option for this new rule to be added</param>
	/// <param name="edge">The edge number to update (0-3)</param>
	/// <param name="map">Map reference</param>
	/// <param name="Recalc">Un-implemented, would allow for recalcuation of tiles if true</param>
	/// <returns>error - value or possitive value for complete</returns>
	isAvailable testUpdate(FString TurnedRule, WallOptions wall, int32 edge, FWCMap& map, bool Recalc) {

		//if it is already placed dont recalculate. At this point it should be valid
		if (tile.IsValid()) {
			return isAvailable::closed;
		}


		//UE_LOG(LogTemp, Warning, TEXT("Ruleset A: %s"), *(CurrentRules.rules.rules_strings[0] + ", " + CurrentRules.rules.rules_strings[1] + ", " + CurrentRules.rules.rules_strings[2] + ", " + CurrentRules.rules.rules_strings[3]));
		
		//UE_LOG(LogTemp, Warning, TEXT("Walls A: %s"), *CurrentRules.walltoText());
		TestRules = CurrentRules.NewRuleSetWithNewRule(TurnedRule, edge, wall);
		//UE_LOG(LogTemp, Warning, TEXT("Ruleset B: %s"), *(TestRules.rules.rules_strings[0] + ", " + TestRules.rules.rules_strings[1] + ", " + TestRules.rules.rules_strings[2] + ", " + TestRules.rules.rules_strings[3]));
		//UE_LOG(LogTemp, Warning, TEXT("Walls B: %s"), *TestRules.walltoText());
				
		
		//update test options
		testOptions = map.filterTileBucketByRuleset(map.combineTileBucketArray(map.findAllPartialMatches(TestRules.rules)), TestRules, Recalc);

		if (TestRules.isFullyBlocked()) {
			return isAvailable::inaccessible;
		}
		
		if (testOptions.tiles.Num() == 0) {
			return isAvailable::invalid;
		}
		return isAvailable::valid;
	}
	bool hasEntropy() {
		if (tile.IsValid()) {
			return false;
		}
		return TestRules.hasEntropy();
	}

	bool isPlaced() {

		return entropy == -2;
	}

	/**
	* called to commit the tests from testUpdate()
	* ONLY USE AFTER CALLING TESTUPDATE.
	*/
	bool commmitUpdate() {
		CurrentRules = TestRules;
		Options = testOptions;
		return 0;
	}

	/**
	* adds the geometry and finishes the ruleset
	*/
	bool closeTile(FSoftObjectPath model, FRuleSet turnedRules, int32 rotation) {
		tile = model;
		PlacedRotation = rotation;
		CurrentRules = turnedRules;
		entropy = -2;
		return true;
	}

};


UCLASS()
class WORLDCOLLAPSE_API AWC_Generation_Grid : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "True"))
	class UStaticMeshComponent* MyStaticMesh;

public:	
	// Sets default values for this actor's properties
	AWC_Generation_Grid();

	

	

protected:
	UPROPERTY(EditDefaultsOnly, Category = "WC")
	TSubclassOf<UBlueprint> my_BP_Class;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	FSoftObjectPath ErrorMarker;

	//minimum number of openings that need to be available while the minimum number of tiles has not been placed.
	UPROPERTY()
	int32 MinOpenings = 2;

	UPROPERTY()
	int32 width;
	UPROPERTY()
	int32 depth;
	UPROPERTY()
	TArray<FGridTile> grid; //1d array of the 2d grid accessed by x*width+y
	UPROPERTY()
	int32 MinTilesToPlace; //min number of tiles that need to be placed to succeed.
	UPROPERTY()
	int32 TilesThatArePlaced; //num tiles already placed
	UPROPERTY()
	int32 availableTiles; //Number of locations where paths are open for generation
	UPROPERTY()
	float tileHorizontalSize; //tile size in engine units
	UPROPERTY()
	float tileScale; //scale the size of the tiles (quick adjustment for testing)
	UPROPERTY()
	TSoftObjectPtr<UTexture2D> heatMap; //Type may change
	UPROPERTY()
	TArray<bool> heatmapGrid; //1d array of the 2d grid accessed by x*width+y
	UPROPERTY()
	bool heatmapSupplied; //Used to determine if recalculation of weight is necessary

	UPROPERTY()
	TArray<FEntropyLocation> entropyList; //The minqueue of grid tile locations by their entropy that is used to find what tile location to place next.
	
	UPROPERTY()
	UWC_Model* model; //WC model to use for the generation

	UPROPERTY()
	FWCMap mappedModel; //Hashmap version of the model to be used

	UPROPERTY()
	TArray<AActor*> PlacedTiles; //Array of actors in the world that have been spawned by this grid.

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	int32 allowedTries = 1; //Number of attempts the algorithm is allowed to make at generating the level.


	//statistics for runtime
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	double lastrunTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	double lastPlaceTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC")
	TArray<FString> placementStatName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WC") 
	TArray<int32> placementStatCount;

	//dev variable
	UPROPERTY()
	bool enableBorders = true;
	UPROPERTY()
	bool enableRecalc = false;

	//map needed

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	/**
	* Get a tile using its two dimensional location
	* Used primarily for user input.
	*/
	UFUNCTION(BlueprintCallable, Category = "WC")
	virtual FGridTile& GetTile(int32 x, int32 y);

	/**
	* Get a tile index location using its two dimensional location
	* Used in primarily for algorithm use.
	*  returns -1 if choice is invalid.
	*/
	UFUNCTION(BlueprintCallable, Category = "WC")
	virtual int32 Get1DFrom2DLocation(int32 x, int32 y);

	/**
	* Get a tile using its one dimensional location
	* Used primarily for algorithm use
	*/
	UFUNCTION(BlueprintCallable, Category = "WC")
	virtual FGridTile& GetTile1D(int32 loc);

	UFUNCTION(BlueprintCallable, Category = "WC")
	TArray<int32> getSurrounding(int loc);


	/// <summary>
	///  Initilize will initilize the class variables using the information that it is passed in
	/// </summary>
	/// <param name="ModelL">the WC_model to use for the generation</param>
	/// <param name="WidthL">The width (y value) the genration can occupy (in number of tiles)</param>
	/// <param name="DepthL">The Depth (x-value) the genration can occupy (in number of tiles)</param>
	/// <param name="NumTilesL"> Minumum number of tiles the generation should place</param>
	/// <param name="TileHorizontalSizeL"> the size the tiles takes up in the XY directions</param>
	/// <param name="TileScaleL">The scale at which the tile should be placed at (un-supported at this moment)</param>
	/// <param name="HeatMapL">Heatmap to use for the generation. will wrap if smaller then generation. Will only be used to the size of generation if map is bigger</param>
	/// <returns>Error codes if init fails</returns>
	UFUNCTION(BlueprintCallable, Category = "WC")
	int Initilize(UWC_Model* ModelL, int32 WidthL, int32 DepthL, int32 NumTilesL, float TileHorizontalSizeL, float TileScaleL, UTexture2D* HeatMapL);

	/// <summary>
	/// Initilizes the heat map in initilize. Should not be used before init.
	/// Internal function
	/// </summary>
	/// <param name="HeatMapL"></param>
	/// <returns></returns>
	UFUNCTION(BlueprintCallable, Category = "WC")
	int InitHeatMap(UTexture2D* HeatMapL);



	/**
	* This function generates the gemometry in the playspace after all tiles have been collapsed.
	* Returns the number of failed tile generations.
	*/
	UFUNCTION(BlueprintCallable, Category = "WC")
	virtual int GenerateGridGeometry();

	/**
	* Checks if a tile ruleset can be placed in a specific location on the grid.
	* errors:
	*  0: no error
	* -1: grid location out of range
	* -2: cannot be placed due to restrictions
	*/
	UFUNCTION(BlueprintCallable, Category = "WC")
	int32 IsTileInValidLocation(FRuleSet& RuleToTest, int32 DepthStart, int32 WidthStart);

	/**
	* Places the first tile in generation with error checking.
	* Error codes -300 are errors.
	*/
	UFUNCTION(BlueprintCallable, Category = "WC")
	int32 PlaceFirstTile(FSoftObjectPath StartTile, int32 rulesetOption, int32 rotation, int32 DepthStart, int32 WidthStart);
	/// <summary>
	/// Runs the algorithm after initilization. (Should not be called before init is called)
	/// </summary>
	/// <param name="DepthStart"> the depth the starting tile should be set to (x-coordinate)</param>
	/// <param name="WidthStart">the width the starting tile should be set to (y-coordinate)</param>
	/// <param name="StartTile">The actor that you want to lace as the first tile in this location</param>
	/// <param name="StartRuleset">The rulset you want this first tile to use (if it has multiple)</param>
	/// <param name="startRotation">the rotation you want the tile to be placed in (if it has more then one rotation)</param>
	/// <returns>The error code if a issue should occur</returns>
	UFUNCTION(BlueprintCallable, Category = "WC")
	int WorldCollapse(int32 DepthStart, int32 WidthStart, FSoftObjectPath StartTile, int32 StartRuleset, int32 startRotation);

	/// <summary>
	/// Internal function (should not be used outside without knowing how it works)
	/// checks if a tile is valid and places it if it is.
	/// </summary>
	/// <param name="loc">Location in 1-dimension of where the tile is to be placed in the grid</param>
	/// <param name="ruleNum">What rule the tile is meant to follow at this location</param>
	/// <param name="rotation">The rotation the tile is to be placed in (values 0-3 turns 90 degrees per incerment)</param>
	/// <param name="tileToPlace">The tile to place retrieved from the WC_model</param>
	/// <returns>will return an error code (-) if it cant be placed</returns>
	UFUNCTION(BlueprintCallable, Category = "WC")
	int32 PlaceTile(int32 loc, int32 ruleNum, int32 rotation, FTile tileToPlace);

	/// <summary>
	///	Used as part of placeTile. Checks the surrounding tiles in the grid and checks if they can still generate with this tile placement.
	/// Only checks this for tiles that have entropy.
	/// Will also check if the entropy list has enough tiles in it to continue generation if the min number of tiles have not been placed yet.
	/// Will update the rules of surrounding if the placement is valid.
	/// </summary>
	/// <param name="loc">location of the tile being placed (not the surrounding tile)</param>
	/// <param name="turnedRules">The ruleset to test with that has already been turned to fit the exact placement it is meant to go in</param>
	/// <returns>can return error codes (-) if invalid or 0 if it works</returns>
	UFUNCTION(BlueprintCallable, Category = "WC")
	int32 UpdateSurrounding(int32 loc, FRuleSet turnedRules);

	/// <summary>
	/// Calculates the shanon entropy of a grid tile given its rulset. 
	/// Uses the total weight of the bucket options to do so.
	/// </summary>
	/// <param name="fRule">Rule to use for producing the entropy of the tile.</param>
	/// <returns>the entropy result</returns>
	UFUNCTION(BluePrintCallable, Category = "WC")
	float shannonEntropy(FRule fRule);

	/// <summary>
	/// used in "shannonEntropy", internal function.
	/// Calculates the shanon entropy of a grid tile given its rulset. 
	/// Uses the total weight of the bucket options to do so.
	/// </summary>
	/// <param name="tiles"></param>
	/// <returns></returns>
	UFUNCTION(BluePrintCallable, Category = "WC")
	float shannonEntropyFromPossibleTiles(TArray<FTile> tiles);


	/// <summary>
	/// inserts the entropy in the entropy list in a sorted fashion placing the lowest first.
	/// Internal function
	/// </summary>
	/// <param name="fel">The entropy location object created from a entropy value and a 1d location in the grid</param>
	UFUNCTION(BlueprintCallable, Category = "WC")
	void insertEntropyLocation(FEntropyLocation fel);
	

	/// <summary>
	/// Removes entropy at a location.
	/// </summary>
	/// <param name="loc">Location in the entropy array</param>
	UFUNCTION(BlueprintCallable, Category = "WC")
	void removeEntropyLocation(int32 loc);

	/// <summary>
	/// Retrieves a tile from the bucket at random using the tiles weight (and heat map if one is provided)
	/// Internal function
	/// </summary>
	/// <param name="tileBucket">Tile bucket to retrieve from</param> 
	/// <param name="location">Location in the grid to which the bucket belongs</param>
	/// <returns>returns the index of the tile picked at random in the bucket</returns>
	UFUNCTION(BlueprintCallable, Category = "WC")
	int32 weightedRandomTileIndex(FTileBucket tileBucket, int32 location);
	
	/// <summary>
	/// Returns the grid to its starting state and removes any spawned geometry.
	/// </summary>
	UFUNCTION(BlueprintCallable, Category = "WC")
	void resetGrid();

	/// <summary>
	/// Depricated
	/// </summary>
	/// <param name="location"></param>
	/// <returns></returns>
	UFUNCTION(BlueprintCallable, Category = "WC")
	bool shouldGenerate(int32 location);

	/// <summary>
	/// Can be called after a generation to have a print out of the statistics collected during the run.
	/// This includes run times and the amount of each tile placed.
	/// </summary>
	/// <returns></returns>
	UFUNCTION(BlueprintCallable, Category = "WC")
	FString AfterRunStatisticsReadout();



	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

private:
	//This is a cheat may need to change that 
	UPROPERTY()
	FGridTile error;
};
