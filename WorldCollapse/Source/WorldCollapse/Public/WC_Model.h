// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WC_Model.generated.h"


UENUM(BlueprintType)
enum class WallOptions : uint8  // Use int32 to map enum to int
{
	None = 0,  // no wall
	SoftWall = 1, // wall but can be recalculated
	HardWall = 2, // solid wall that cannot be changes (map edge)
};


/**
 * Rules is an array of strings marking each edge rule.
 * Required as a seperate function for efficent map access.
 */
USTRUCT(BlueprintType)
struct WORLDCOLLAPSE_API FRule
{

	GENERATED_BODY()

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	TArray<FString> rules_strings;

	FRule(){} //should never be used. no init of TArray.
	FRule(TArray<FString>& RuleList) : rules_strings(RuleList) {}

	bool operator==(const FRule& Other) const
    {
        
		if(rules_strings.Num() != Other.rules_strings.Num()) {

			return false;

		}

		for(int i = 0; i < rules_strings.Num(); i ++) {

			if (rules_strings[i] != Other.rules_strings[i]) {

				return false;

			}

		}

		return true;

    }

	/*Other is the map rule and the object this is called in is the rule on the grid
	*/
	bool partialMatch(FRule& other) {
		
		for(int i = 0; i < rules_strings.Num(); i ++) {

			if(rules_strings[i] != "" && rules_strings[i] != other.rules_strings[i]) {
				return false;

			}

		}

		return true;

	}

	/// <summary>
	/// Rotate a given rule R number of times by 90 degrees
	/// </summary>
	/// <param name="rule">Rule to turn</param>
	/// <param name="r">number of 90 degree turns</param>
	/// <returns></returns>
	static FRule rotateRuleset(FRule rule, int r) {

    
    	for(int i = 0; i < r % 4; i ++) {

        	FString s = rule.rules_strings[3];
        	rule.rules_strings[3] = rule.rules_strings[2];
        	rule.rules_strings[2] = rule.rules_strings[1];
        	rule.rules_strings[1] = rule.rules_strings[0];
        	rule.rules_strings[0] = s;

    	}

    	return rule;

	}

	/// <summary>
	/// Makes a copy of the rules as a string and then adds a rule to it in the location specified.
	/// </summary>
	/// <param name="rule"> rule to add</param>
	/// <param name="loc">location of the rule to add</param>
	/// <returns></returns>
	TArray<FString> RuleCopyWithNewRule(FString rule, int32 loc) {

		TArray<FString> newReturn = rules_strings;
		newReturn[loc] = rule;
		return newReturn;
	}

	/// <summary>
	/// Turns a rule "numOfTurns" number of times.
	/// </summary>
	/// <param name="numOfTurns"></param>
	void TurnRule(int32 numOfTurns) {
		for (int32 r = 0; r < numOfTurns; r++) {
			FString lastval = rules_strings[3];

			rules_strings[3] = rules_strings[2];
			rules_strings[2] = rules_strings[1];
			rules_strings[1] = rules_strings[0];
			rules_strings[0] = lastval;
		}
	}

};
FORCEINLINE uint32 GetTypeHash(const FRule& Rule)
{
    /*uint32 Hash = FCrc::MemCrc32(&Rule, sizeof(FRule));
    return Hash;*/
	return HashCombine(HashCombine(HashCombine(HashCombine(HashCombine(GetTypeHash(Rule.rules_strings[0]), GetTypeHash(Rule.rules_strings[1])), GetTypeHash(Rule.rules_strings[2])), GetTypeHash(Rule.rules_strings[3])), GetTypeHash(Rule.rules_strings[4])), GetTypeHash(Rule.rules_strings[5]));
}

USTRUCT(BlueprintType)
struct WORLDCOLLAPSE_API FRuleSet
{

	GENERATED_BODY()

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	FRule rules;

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	int32 weight;

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	TArray<WallOptions> isWall;

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	bool canRotate;

	FRuleSet() {
		rules.rules_strings.Init(FString(), 6);
		weight = 0;
		isWall.Init(WallOptions::None, 6);
		canRotate = false;
	}
	FRuleSet(TArray<FString> RuleList, int RuleWeight, TArray<WallOptions> BlockedWall, bool Rotatable) {
		rules = FRule(RuleList);
		weight = RuleWeight;
		isWall = BlockedWall;
		canRotate = Rotatable;
	}

	/**
	* Enter the index of the rule that is meant to be an Generation Edge of the grid
	*/
	int MakeGridBorder(int32 RulesIndex) {
		if (rules.rules_strings.Num() < 6 && isWall.Num() < 6) {
			return -1;
		}
		isWall[RulesIndex] = WallOptions::SoftWall;
		return 0;
	}

	/// <summary>
	/// tests if a ruleset is a partial match with another
	/// ... This function is not used but may be in future work
	/// </summary>
	/// <param name="other"></param>
	/// <param name="canRecalulate"></param>
	/// <returns></returns>
	bool partialMatch(FRuleSet other, bool canRecalulate = false) {
		for (int i = 0; i < rules.rules_strings.Num(); i++) {
			//do walls align with grid 
			if (!canRecalulate && (isWall[i] == WallOptions::SoftWall && other.isWall[i] != WallOptions::SoftWall)) {
				return false;
			}
			//hard wall rule in place check. If that is the case it must also have a wall
			if (isWall[i] == WallOptions::HardWall && (other.isWall[i] != WallOptions::SoftWall || other.isWall[i] != WallOptions::HardWall)) {
				return false;
			}
			//does rule tile rule align with grid rule.
			if (rules.rules_strings[i] != "" && rules.rules_strings[i] != other.rules.rules_strings[i]) {

				return false;

			}

		}

		return true;

	}
	/**
	* This function returns a copy of this Ruleset with the edge changed. 
	* Used when testing if a new ruleset would fit a tile.
	*/
	FRuleSet NewRuleSetWithNewRule(FString rule, int32 loc, WallOptions walls) {
		return FRuleSet(rules.RuleCopyWithNewRule(rule, loc), weight, CopyUpdateWalls(walls, loc), canRotate);
	}

	FRule& GetRules() {
		return rules;
	}
	/// <summary>
	/// Turns both the walls and the rules to match the given number of rotations
	/// </summary>
	/// <param name="Number of turns"></param>
	void turn(int32 numOfTurns) {
		rules.TurnRule(numOfTurns);
		for (int r = 0; r < numOfTurns; r++) {
			WallOptions startval = isWall[3];

			isWall[3] = isWall[2];
			isWall[2] = isWall[1];
			isWall[1] = isWall[0];
			isWall[0] = startval;
		}
	}

	/// <summary>
	/// outputs a text for all the rules and the state of the wall.
	/// returns a strings of 6 wall or open strings in the order the rules are in
	///		front, right, back, left, up, down
	/// </summary>
	/// <returns></returns>
	FString walltoText() {
		FString a = "";
		for (int i = 0; i < isWall.Num(); i++) {
			a += isWall[i] == WallOptions::None ? "Open" : "Wall";
			a += ",";
		}
		return a;
	}

	/// <summary>
	/// Checks if a certain ruleset should hav entropy based on the rules.
	/// Any ruleset that has a non-wall edge that is filled has entropy 
	/// </summary>
	/// <returns></returns>
	bool hasEntropy() {
		for (int i = 0; i < isWall.Num(); ++i) {
			//if the rule is not empty and it is not a wall it have entropy
			if (rules.rules_strings[i] != "" && isWall[i] == WallOptions::None) {
				return true;
			}
		}
		return false;
	}

	/**
	* tests if all wall rules are a wall.
	* Returns ture if that is the case
	*/
	bool isFullyBlocked() {
		//if any are not marked as wall return false

		//NOTE: UPDATE FOR 3D
		for (int o = 0; o < 4;o++) { // 6 away
			if (isWall[o] == WallOptions::None) {
				return false;
			}
		}
		return true;
	}

private:
	/**
	* will return a copy of a ruleset with adding a single new wall rule to a location
	* (Does not change the current ruleset)
	* Will not replace hard walls.
	*/
	TArray<WallOptions> CopyUpdateWalls(WallOptions newWall, int32 loc) {
		TArray<WallOptions> ret = isWall;
		ret[loc] = newWall;
		return ret;
	}
};

USTRUCT(BlueprintType)
struct WORLDCOLLAPSE_API FTile
{

	GENERATED_BODY()
	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	int32 ID;

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	FSoftObjectPath model;

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	TArray<FRuleSet> rulesets;

	FTile() {

	}
	FTile(FSoftObjectPath Geometry, TArray<FRuleSet> rules) {
		model = Geometry;
		rulesets = rules;
	}

	bool operator==(const FTile& Other) const
    {
		
		return (model.ResolveObject() == Other.model.ResolveObject());

    }
	/// <summary>
	/// Creates a copy of the ruleset and turns it clockwise nomOfTurns number of times by 90 degrees
	/// </summary>
	/// <param name="ruleNum"></param>
	/// <param name="numOfTurns"></param>
	/// <returns></returns>
	FRuleSet copyTurnRuleSet(int32 ruleNum, int32 numOfTurns) {
		if (ruleNum >= rulesets.Num() || ruleNum < 0) {
			return FRuleSet();
		}
		FRuleSet copy = rulesets[ruleNum];
		copy.turn(numOfTurns);
		return copy;
	}

};

USTRUCT(BlueprintType)
struct WORLDCOLLAPSE_API FTileBucket
{

	GENERATED_BODY()

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	TArray<FTile> tiles;

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	TArray<int32> rotations;

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	TArray<int32> ruleset;

	FTileBucket() {

	}

	/// <summary>
	/// Returns the tile that matches a given geometry. 
	/// </summary>
	/// <param name="TileGeometry"></param>
	/// <returns></returns>
	FTile ItterateGeometry(FSoftObjectPath TileGeometry) {
		for (int i = 0; i < tiles.Num(); i++) {
			if (tiles[i].model == TileGeometry) {
				return tiles[i];
			}
		}
		return FTile();
	}
	/// <summary>
	/// will check for duplicates in the list and even out the weight so the weights are more in line with the acctual weights
	/// 
	///**************** only works for pass by copy**************
	/// </summary>
	void EvenDestributeWeight() {
		TMap < int32, TTuple<int32, TArray<int32> > > ID_TCount_Loc;
		for (int i = 0; i < tiles.Num(); i++) {
			if (ID_TCount_Loc.Contains(tiles[i].ID)) {
				ID_TCount_Loc[tiles[i].ID].Key++;
				ID_TCount_Loc[tiles[i].ID].Value.Emplace(i);
			}
			else {
				TArray<int32> index;
				index.Add(i);
				auto tup = TTuple<int32, TArray<int32> >(1, index);
				ID_TCount_Loc.Emplace(tiles[i].ID, tup);
			}
		}
		//go in and use the data to divide weights for each tile that has multiple instances of itself 
		for (auto pair : ID_TCount_Loc) {
			if (pair.Value.Key > 1) {
				/*UE_LOG(LogClass, Error, TEXT("tileID %i"), pair.Value.Key);
				UE_LOG(LogClass, Error, TEXT("Tile init weight %i"), tiles[pair.Value.Value[0]].rulesets[ruleset[pair.Value.Value[0]]].weight);*/
				for (int i = 0; i < pair.Value.Value.Num(); i++) {
					//each index in the map location
					auto RuleToUse = ruleset[pair.Value.Value[i]];
					float newweight = (tiles[pair.Value.Value[i]].rulesets[RuleToUse].weight / pair.Value.Key);
					tiles[pair.Value.Value[i]].rulesets[RuleToUse].weight = FMath::CeilToInt(newweight); 
					/*UE_LOG(LogClass, Error, TEXT("Tile reweight %i"), tiles[pair.Value.Value[i]].rulesets[RuleToUse].weight);
					UE_LOG(LogClass, Error, TEXT("Tile reweight %s"), *tiles[pair.Value.Value[i]].model.GetAssetName());*/

				}
			}
			
		}
	}

	/// <summary>
	/// adjusts the weights in the bucket to be scaled high enough for each weight to have value to be unique when multiplied
	/// </summary>
	void reweigh() {
		float total = 0;
		for (int i = 0; i < tiles.Num(); i++) {
			total += tiles[i].rulesets[ruleset[i]].weight;
		}
		int reweigh = 100 * tiles.Num();
		for (int i = 0; i < tiles.Num(); i++) {
			tiles[i].rulesets[ruleset[i]].weight = FMath::CeilToInt((tiles[i].rulesets[ruleset[i]].weight * 1.0) / total * reweigh);
		}
	}
};

USTRUCT(BlueprintType)
struct WORLDCOLLAPSE_API FWCMap
{

	GENERATED_BODY()

public:
	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
	TMap<FRule, FTileBucket> map;

	/// <summary>
	/// add a tile bucket to a hashmap. Replaces existing bucket if the bucket already exists. 
	/// </summary>
	/// <param name="fRule"></param>
	/// <param name="fTileBucket"></param>
	void Emplace(FRule fRule, FTileBucket fTileBucket) {

		if(!map.Contains(fRule)) {

			map.Add(fRule, fTileBucket);

		} else {

			FString output = "emplace already found";

			map[fRule] = fTileBucket;

		}

	}
	/// <summary>
	/// checks if a full rule is contained in the hashmap.
	/// </summary>
	/// <param name="fRule"></param>
	/// <returns></returns>
	bool Contains(FRule fRule) {

		return map.Contains(fRule);

	}

	/// <summary>
	/// Check if a map contains a partial match to the ulres and returns true if one is found
	/// </summary>
	/// <param name="fRule">rule to find in map</param>
	/// <returns></returns>
	bool ContainsPartial(FRule fRule) {
		
		for(auto& pair : map) {

			if(fRule.partialMatch(pair.Key)) {

				return true;

			}
 
		}

		return false;

	}
	/// <summary>
	/// Find all the patial matches for a given rule in the hashmap
	/// Takes in a full or unfilled rule and compares it to the hashmap bucket rules. 
	/// </summary>
	/// <param name="fRule">Rule to match with</param>
	/// <returns>array of all buckets that match the rules</returns>
	TArray<FTileBucket> findAllPartialMatches(FRule fRule) {

		TArray<FTileBucket> matches;
		//UE_LOG(LogTemp, Warning, TEXT("partial match: %s"), *(fRule.rules_strings[0] + ", " + fRule.rules_strings[1] + ", " + fRule.rules_strings[2] + ", " + fRule.rules_strings[3]));
		for(auto& pair : map) {

			if(fRule.partialMatch(pair.Key)) {
				//UE_LOG(LogTemp, Warning, TEXT("found a match"));
				matches.Add(pair.Value);

			}
 
		}

		return matches;

	}

	/// <summary>
	/// combines all the different buckets from the map into one.
	/// </summary>
	/// <param name="tileBuckets">sets of buckets retrieved from the hashmap</param>
	/// <returns>One bucket of all the tiles</returns>
	FTileBucket combineTileBucketArray(TArray<FTileBucket> tileBuckets) {

		FTileBucket combinedTileBucket;

		for(auto& tileBucket : tileBuckets) {

			for(auto& tile : tileBucket.tiles) {

				combinedTileBucket.tiles.Add(tile);

			}

			for(auto& rotation : tileBucket.rotations) {

				combinedTileBucket.rotations.Add(rotation);

			}

			for(auto& ruleset : tileBucket.ruleset) {

				combinedTileBucket.ruleset.Add(ruleset);

			}

		}

		return combinedTileBucket;

	}
	/// <summary>
	/// Removes all tiles from the bucket that dont match the wall rules needed.
	/// </summary>
	/// <param name="tileBucket">the bucket of all possible tiles that a location can contain</param>
	/// <param name="ruleset">The ruleset to match tiles to</param>
	/// <param name="canRecalculate">unimplemented</param>
	/// <returns></returns>
	FTileBucket filterTileBucketByRuleset(FTileBucket tileBucket, FRuleSet ruleset, bool canRecalculate = false) {

		FTileBucket updatedTileBucket;
		
		for(int i = 0; i < tileBucket.tiles.Num(); i ++) {

			FRuleSet currentRuleSet = tileBucket.tiles[i].rulesets[tileBucket.ruleset[i]];
			currentRuleSet.turn(tileBucket.rotations[i]);

			bool add = true;

			for(int j = 0; j < currentRuleSet.isWall.Num(); j ++) {
				//if I cannot recalc and there is a soft rule miss-match don't add it
				if(!canRecalculate && ruleset.isWall[j] == WallOptions::SoftWall && (currentRuleSet.isWall[j] != WallOptions::SoftWall && currentRuleSet.isWall[j] != WallOptions::HardWall) ) {
					add = false;
					break;

				}
				//if I a hard wall is present in the grid rule filter it out if I cannot match it with a softwall.
				if(ruleset.isWall[j] == WallOptions::HardWall && (currentRuleSet.isWall[j] != WallOptions::SoftWall && currentRuleSet.isWall[j] != WallOptions::HardWall)) {
					break;

				}

			}

			if(add) {
				//UE_LOG(LogTemp, Log, TEXT("added: %s"), *tileBucket.tiles[i].model.ToString());
				updatedTileBucket.tiles.Add(tileBucket.tiles[i]);
				updatedTileBucket.rotations.Add(tileBucket.rotations[i]);
				updatedTileBucket.ruleset.Add(tileBucket.ruleset[i]);

			}

		}

		return updatedTileBucket;

	}

	TArray<FTile> tilesFromBuckets(TArray<FTileBucket> tileBuckets) {

    	TArray<FTile> tiles;

    	for(auto& tileBucket : tileBuckets) {

        	for(auto& tile : tileBucket.tiles) {

            	if(!tiles.Contains(tile)) {

                	tiles.Add(tile);

            	}

        	}

    	}
    
    	return tiles;

	}

	FTileBucket operator[](FRule fRule) {

		return map[fRule];

	}

};

UCLASS(Blueprintable, BlueprintType)
class WORLDCOLLAPSE_API UWC_Model : public UDataAsset
{
	GENERATED_BODY()
	public:
		/**
		* Main interface for adding tiles from the UI and from other sources
		*/
		UFUNCTION(BluePrintCallable, Category = "WC")
		int AddTile(FSoftObjectPath Geometry, TArray<FString> rulesets, bool rotate, TArray<int> weights, TArray<bool> Walls);

		/// <summary>
		/// Will replace the tile with a matching id to the given tile.
		/// </summary>
		/// <param name="ReturnTileToList"> tile to edit</param>
		/// <returns>0: done, -1: error</returns>
		UFUNCTION(BluePrintCallable, Category = "WC")
		int EditTile(FTile ReturnTileToList);

		UFUNCTION(BluePrintCallable, Category = "WC")
		int RemoveTile(int32 IDtoRemove);
		 

		/**
		* This function tests if the selected tile for the start of WFC has been added into the data set.
		* If it is not it will return -1
		* If it does exist it will return the number of rule sets that the tile has available
		*/
		UFUNCTION(BluePrintCallable, Category = "WC")
		int IsInModel(FSoftObjectPath TileGeometry);

		/**
		* This function looks for the selected tile for the start of WFC.
		* Returns the Ftile if found and an empty Ftile if not found.
		*/
		UFUNCTION(BluePrintCallable, Category = "WC")
		void GetTileFromGeometry(FSoftObjectPath TileGeometry, FTile& returnTile);

		/**
		* Using the model array, generates a map that is used in the collapse step to imporve access speed.
		* This function will automaticly be run when initilizing the WC_Generation_Gird.
		* The key to the resulting map is a tiles FRule.
		*/
		UFUNCTION(BluePrintCallable, Category = "WC")
		FWCMap CreateMap();

		/// <summary>
		/// Number of tiles in the model
		/// </summary>
		/// <returns></returns>
		UFUNCTION(BluePrintCallable, Category = "WC")
		int32 Num();

		/// <summary>
		/// total weight of all tiles in the model
		/// </summary>
		/// <returns></returns>
		UFUNCTION(BluePrintCallable, Category = "WC")
		float totalWeight();

		//gets the names of all tiles in the model and returns them as a list.
		UFUNCTION(BluePrintCallable, Category = "WC")
		TArray<FString> GetTileNameList();

		//Get the tile by the asset name. Used in ocmbination with GetTileNameList in UI
		UFUNCTION(BluePrintCallable, Category = "WC")
		FTile GetTileByName(FString name);

		/**Remove all tiles*/
		UFUNCTION(BluePrintCallable, Category = "WC")
		void clear();


	protected:

		UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "WC")
		TArray<FTile> model;

		/*
		UFUNCTION(BluePrintCallable, Category = "WC")
		FRule rotateRuleset(FRule rule, int r);
		*/
		
		UPROPERTY()
		//cheat may need replacement
		FTile error = FTile();

};
