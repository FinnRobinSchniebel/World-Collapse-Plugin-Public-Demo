// Fill out your copyright notice in the Description page of Project Settings.


#include "WC_Generation_Grid.h"

// Sets default values
AWC_Generation_Grid::AWC_Generation_Grid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("static mesh"));
	MyStaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SetRootComponent(MyStaticMesh);

}

// Called when the game starts or when spawned
void AWC_Generation_Grid::BeginPlay()
{
	Super::BeginPlay();
	SetActorLocation(FVector(0, 0, 0));
	SetActorRotation(FRotator(0, 0, 0));
}

FGridTile& AWC_Generation_Grid::GetTile(int32 x, int32 y)
{

	if (depth <= x || width <= y || x < 0 || y < 0) {
		UE_LOG(LogClass, Log, TEXT("error: GetTile: size does not match dimensions"));
		return error;
	}

	return grid[x * width + y];
}

int32 AWC_Generation_Grid::Get1DFrom2DLocation(int32 x, int32 y)
{
	if (depth <= x || width <= y || x < 0 || y < 0) {
		return -1;
	}
	return x * width + y;
}

FGridTile& AWC_Generation_Grid::GetTile1D(int32 loc)
{
	if(grid.Num() <= loc || loc < 0) {
		UE_LOG(LogClass, Log, TEXT("error: GetTile: size does not match dimensions"));
		return error;
	}
	return grid[loc];
}

TArray<int32> AWC_Generation_Grid::getSurrounding(int loc)
{
	TArray<int32> Loc;

	int x = (loc) / width;
	int y = loc % width;

	
	if (x + 1 < depth) {
		//tiles.Emplace(MakeShared<FGridTile>(GetTile(x + 1, y)));
		Loc.Emplace(Get1DFrom2DLocation(x + 1, y));
		
	}
	else {
		Loc.Emplace(-1);
	}


	if (y + 1 < width) {
		//tiles.Emplace(MakeShared<FGridTile>(GetTile(x, y + 1)));
		Loc.Emplace(Get1DFrom2DLocation(x, y + 1));
	
	}
	else {
		Loc.Emplace(-1);
	}


	if (x - 1 >= 0) {
		//tiles.Emplace(MakeShared<FGridTile>(GetTile(x - 1, y)));
		Loc.Emplace(Get1DFrom2DLocation(x - 1, y));
	}
	else {
		Loc.Emplace(-1);
	}


	if (y - 1 >= 0) {
		//tiles.Emplace(MakeShared<FGridTile>(GetTile(x, y - 1)));
		Loc.Emplace(Get1DFrom2DLocation(x, y - 1));
	}
	else {
		Loc.Emplace(-1);
	}

	return Loc;
}

int AWC_Generation_Grid::Initilize(UWC_Model* ModelL, int32 WidthL, int32 DepthL, int32 NumTilesL, float TileHorizontalSizeL, float TileScaleL, UTexture2D* HeatMapL)
{

	if (!ModelL) {
		return -2;
	}
	if (WidthL <= 0 || DepthL <= 0) {
		return -3;
	}

	width = WidthL;
	depth = DepthL;
	TilesThatArePlaced = 0;
	MinTilesToPlace = NumTilesL;
	tileHorizontalSize = TileHorizontalSizeL;
	tileScale = TileScaleL;
	model = ModelL;
	//if no model is given
	if (!model) {
		return -5;
	}
	mappedModel = model->CreateMap();
	
	availableTiles = 0;
	//create grid
	for (int t = 0; t < width * depth; t++) {
		grid.Add(FGridTile());
	}

	if (HeatMapL) {

		InitHeatMap(HeatMapL);

	}
	else {
		heatmapSupplied = false;
	}

	if (enableBorders) {
		//mark grid Edges
		for (int y = 0; y < width; y++) {
			GetTile(0, y).CurrentRules.MakeGridBorder(2);
			GetTile(depth - 1, y).CurrentRules.MakeGridBorder(0);
		}
		for (int x = 0; x < depth; x++) {
			GetTile(x, 0).CurrentRules.MakeGridBorder(3);
			GetTile(x, width - 1).CurrentRules.MakeGridBorder(1);
		}
	}


	error = FGridTile(true);

	return 0;
}

int AWC_Generation_Grid::InitHeatMap(UTexture2D* HeatMapL)
{
	heatmapSupplied = true;
	UE_LOG(LogClass, Log, TEXT("Valid map"));
	FTexture2DMipMap* MyMipMap = &HeatMapL->GetPlatformData()->Mips[0];

	FByteBulkData* RawImageData = &MyMipMap->BulkData; // was originally FByteBulkData*

	const FColor* FormatedImageData = static_cast<const FColor*>(RawImageData->LockReadOnly()); // was originally a static cast

	uint32 TextureWidth = MyMipMap->SizeX, TextureHeight = MyMipMap->SizeY;


	for (int x = 0; x < depth; x++) {

		for (int y = 0; y < width; y++) {

			FColor PixelColor = FormatedImageData[((TextureHeight - 1 - x) % TextureHeight) * TextureWidth + (y % TextureWidth)];
			if (x < depth && y < width) {
				GetTile(x, y).ownHeat = PixelColor.R / 127.5;

				if (x + 1 < depth) {
					GetTile(x + 1, y).heatMapVals[2] = PixelColor.R / 127.5;
				}
				if (y + 1 < width) {
					GetTile(x, y + 1).heatMapVals[3] = PixelColor.R / 127.5;
				}
				if (x - 1 >= 0) {
					GetTile(x - 1, y).heatMapVals[0] = PixelColor.R / 127.5;
				}
				if (y - 1 >= 0) {
					GetTile(x, y - 1).heatMapVals[1] = PixelColor.R / 127.5;
				}
			}
			

		}
	}
	RawImageData->Unlock();

	return 0;
}

int AWC_Generation_Grid::GenerateGridGeometry()
{
	if (grid.Num() == 0) {
		return -1;
	}
	
	//for statistical readout
	placementStatName.Empty(); 
	placementStatCount.Empty(); 
	for (FString T : model->GetTileNameList()) { 
		placementStatName.Add(T); 
		placementStatCount.Add(0); 
	}

	FActorSpawnParameters spawnParam;
	spawnParam.Owner = this;
	spawnParam.Instigator = nullptr;
	spawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn; // Set collision handling to always spawn
	spawnParam.bNoFail = true;
	
	//find own location to do a transformation for spawning reltivie to current location.
	FVector ThisLocation = GetActorLocation();
	FRotator ThisRotation = GetActorRotation();
	FVector CurrentLocation = FVector(0.0f + tileHorizontalSize / 2.0, 0.0f + tileHorizontalSize / 2.0, 0.0f);

	// number of tiles that failed to spawn
	int32 PlacedCount = 0; 

	for (int y = 0; y < width; y++) {
		for (int x = 0; x < depth; x++) {
			FGridTile& currentTile = GetTile(x, y);

			TSubclassOf<UBlueprint> BP;


			//// stats
			int indexOfstate = placementStatName.Find(currentTile.tile.GetAssetName());
			if (indexOfstate != -1) {
				placementStatCount[indexOfstate]++;
			}
			
			///
			
			UBlueprint* TileRef = Cast<UBlueprint>(currentTile.tile.TryLoad());
			//Only try and generate if the tile is populated
			if (TileRef) {
				FVector SpawnLocation = ThisLocation + CurrentLocation;
				
				AActor* SpawnedTileActor = GetWorld()->SpawnActor<AActor>(TileRef->GeneratedClass, SpawnLocation, FRotator(0, 90.0f* currentTile.PlacedRotation,0), spawnParam);
				PlacedTiles.Add(SpawnedTileActor);
				if (SpawnedTileActor) {
					SpawnedTileActor->AttachToComponent(this->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
					PlacedCount++;
				}				
			}
			CurrentLocation += FVector(tileHorizontalSize, 0.0f, 0.0f);
		}

		CurrentLocation += FVector(-tileHorizontalSize*depth, tileHorizontalSize, 0.0f);
	}

	return PlacedCount;
}

int32 AWC_Generation_Grid::IsTileInValidLocation(FRuleSet& RuleToTest, int32 DepthStart, int32 WidthStart)
{	
	FGridTile GridLoc = GetTile(DepthStart, WidthStart);
	if (GridLoc.isInvalid()) {
		return -1;
	}

	if (GridLoc.CurrentRules.partialMatch(RuleToTest, enableRecalc)) {
		return 0;
	}
	return -2;
}




// Called every frame
void AWC_Generation_Grid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AWC_Generation_Grid::PlaceFirstTile(FSoftObjectPath StartTile, int32 rulesetOption, int32 rotation, int32 DepthStart, int32 WidthStart)
{
	//UE_LOG(LogTemp, Error, TEXT("Failed to load class from %s"), *StartTile.ToString());
	FTile ValidTile = FTile();
	model->GetTileFromGeometry(StartTile, ValidTile);
	//Tile is not in the model
	if (ValidTile.rulesets.Num() == 0) {
		return -301;
	}
	//invalid ruleset
	if (ValidTile.rulesets.Num() <= rulesetOption) {
		return -302;
	}
	if (!ValidTile.rulesets[rulesetOption].canRotate && rotation > 0) {
		return -303;
	}
	//tile cannot be placed (normaly due to Grid Edge not alligning. -304 bad grid tile, -305 can't place
	int32 code = IsTileInValidLocation(ValidTile.rulesets[rulesetOption], DepthStart, WidthStart);
	if (code < 0) {
		return -303 + code;
	}
	//validate rotation
	if (rotation > 3 && rotation % 90 == 0) {
		rotation = rotation / 90;
	}
	//invalid rotation given
	else if (rotation > 3) {
		return -306;
	}
	

	
	PlaceTile(Get1DFrom2DLocation(DepthStart, WidthStart),rulesetOption, rotation, ValidTile);

	/*FGridTile gridTile = GetTile(DepthStart, WidthStart);
	FRuleSet turnedRules = ValidTile.copyTurnRuleSet(rulesetOption, rotation);

	gridTile.closeTile(ValidTile.model, turnedRules, rotation);
	UpdateSurrounding(Get1DFrom2DLocation(DepthStart, WidthStart), turnedRules);*/


	return 0;
}

int AWC_Generation_Grid::WorldCollapse(int32 DepthStart, int32 WidthStart, FSoftObjectPath StartTile, int32 StartRuleset = 0, int32 startRotation = 0)
{
	int32 errorCodes;

	int32 tries = 0;
	int32 errorCode = -1; //must be negtive


	

	while (errorCode < 0 && tries < allowedTries) {
		//time function 
		double startTime = FPlatformTime::Seconds();


		errorCodes = PlaceFirstTile(StartTile, StartRuleset, startRotation, DepthStart, WidthStart);
		if (errorCodes < 0) {
			return errorCodes;
		}

		//MAIN LOOP
		errorCode = 0;


		while (entropyList.Num() != 0) {
			//find next lowest entropy

			FEntropyLocation ent = entropyList.Pop(true);
			int32 nextTileLoc = ent.location;

			if (GetTile1D(nextTileLoc).ownHeat < 0.25 && TilesThatArePlaced < MinTilesToPlace && ent.ReturnedbackCount != 1) {
				ent.ReturnedbackCount++;
				ent.entropy = FMath::Min(0.99, ent.entropy * 2);
				entropyList.Add(ent);
				continue;
			}


			FGridTile nextToSpawn = GetTile1D(nextTileLoc);
			FTileBucket theOptionSet = nextToSpawn.Options;

			int32 result = -1;


			//try and place tile from weighted odds
			//if all good place the tile  --
			//if not good remove the tile from the options and regenerate.
			//if all options are exhausted, return error
			//if the number of tiles placed is >= min tiles and no tiles can be palaced, return complete. 
			while (theOptionSet.tiles.Num() != 0 && result < 0) {

				int32 tileInd = weightedRandomTileIndex(theOptionSet, nextTileLoc);

				if(tileInd < 0) {

					UE_LOG(LogTemp, Warning, TEXT("No good tiles to place"));
					break;

				}
				
				int x = (nextTileLoc) / width;
				int y = nextTileLoc % width;
				
				FTile pickedOption = theOptionSet.tiles[tileInd];
				int32 PickRuleSet = theOptionSet.ruleset[tileInd];
				int32 PickedRotation = theOptionSet.rotations[tileInd];
				
				result = PlaceTile(nextTileLoc, PickRuleSet, PickedRotation, pickedOption);
				//if no tile could be placed to keep min open tiles above theshhold and this tiles has not tried before, try another tile first
				if (result == -402 && theOptionSet.tiles.Num() == 1 && ent.ReturnedbackCount != 1) {
					ent.ReturnedbackCount++;
					ent.entropy = FMath::Min(1.0, ent.entropy * 2);
					entropyList.Add(ent);
					break;
				}
				else if (result < 0 && theOptionSet.tiles.Num() != 1) {
					theOptionSet.ruleset.RemoveAt(tileInd);
					theOptionSet.rotations.RemoveAt(tileInd);
					theOptionSet.tiles.RemoveAt(tileInd);
				}
				else if (theOptionSet.tiles.Num() <= 1 && result < 0) {

					UE_LOG(LogClass, Log, TEXT("Tryed to place: %s"), *pickedOption.model.ToString());
					UE_LOG(LogClass, Log, TEXT("Items left: %i"), theOptionSet.tiles.Num());
					UE_LOG(LogClass, Log, TEXT("Current Rules: %s"), *(nextToSpawn.CurrentRules.rules.rules_strings[0] + ", " + nextToSpawn.CurrentRules.rules.rules_strings[1] + ", " + nextToSpawn.CurrentRules.rules.rules_strings[2] + ", " + nextToSpawn.CurrentRules.rules.rules_strings[3]));
					UE_LOG(LogClass, Log, TEXT("Running: x:%i, y:%i"), x, y);
					UE_LOG(LogClass, Log, TEXT("Running: x:%i"), nextTileLoc);
					UE_LOG(LogClass, Log, TEXT("Num in map: x:%i"), mappedModel.map.Num());
					FString keys = "";
					for (auto& pair : mappedModel.map) {
						keys += pair.Key.rules_strings[0] + " , " + pair.Key.rules_strings[1] + " , " + pair.Key.rules_strings[2] + " , " + pair.Key.rules_strings[3] + "\n";
					}

					if (ErrorMarker.IsValid()) {
						GetTile(x, y).tile = ErrorMarker;
					}


					//UE_LOG(LogClass, Error, TEXT("keys: x:%s"), *keys);
					errorCode = -401;
					break;
				}
			}

			if (errorCode == -401) {
				break;
			}
			
		}

		if (errorCode != -401) {
			
			double endtime = FPlatformTime::Seconds();
			lastrunTime = endtime - startTime;
			UE_LOG(LogClass, Log, TEXT("Function Elpased time: %f"), lastrunTime);
		}

		tries++;
	}

	double startTime = FPlatformTime::Seconds();
	GenerateGridGeometry();
	double endtime = FPlatformTime::Seconds();
	lastPlaceTime = endtime - startTime;
	UE_LOG(LogClass, Log, TEXT("Place geometry Elpased time: %f"), lastPlaceTime);

	return errorCode;
}

int32 AWC_Generation_Grid::PlaceTile(int32 loc, int32 ruleNum, int32 rotation, FTile tileToPlace)
{


	/*UE_LOG(LogClass, Log, TEXT("num left after, tiles: %s"), *tileToPlace.model.ToString());
	UE_LOG(LogClass, Log, TEXT("num left after, tiles: %s"), *(tileToPlace.rulesets[ruleNum].GetRules().rules_strings[0] + ", " + tileToPlace.rulesets[ruleNum].GetRules().rules_strings[1] + ", " + tileToPlace.rulesets[ruleNum].GetRules().rules_strings[2] + ", " + tileToPlace.rulesets[ruleNum].GetRules().rules_strings[3]));
	*/
	FRuleSet turnedRules = tileToPlace.copyTurnRuleSet(ruleNum, rotation);
	
	//UE_LOG(LogClass, Error, TEXT("num left after, tiles: %s"), *(turnedRules.GetRules().rules_strings[0] + ", " + turnedRules.GetRules().rules_strings[1] + ", " + turnedRules.GetRules().rules_strings[2] + ", " + turnedRules.GetRules().rules_strings[3]));
	//test if tile can be placed without causing error in surrounding tiles. 
	int result = UpdateSurrounding(loc, turnedRules);
	//if a tile could not be placed return error -401 which make it pick a new tile or, for the first tile, stops it.
	if (result == -2) {
		return -402;
	}
	else if (result < 0) {
		return -401;
	}
	
	FGridTile& gridTile = GetTile1D(loc);
	gridTile.closeTile(tileToPlace.model, turnedRules, rotation);
	TilesThatArePlaced++;
	removeEntropyLocation(loc);

	return 0;
}

int32 AWC_Generation_Grid::UpdateSurrounding(int32 loc, FRuleSet turnedRules)
{
	//get location of each adjacent
	// 
	//test the new rule
	//if invalid return 0
	//Update if all are valid.
	// run entropy on tiles that have a path to them.
	//TArray<TSharedPtr<FGridTile>> tiles;
	TArray<int32> locations;

	//used to figure out what rule goes were. Needed in case some are skipped due to wall.
	TArray<int32> index;

	int x = (loc) / width;
	int y = loc % width;

	
	if (x + 1 < depth) {
		//tiles.Emplace(MakeShared<FGridTile>(GetTile(x + 1, y)));
		locations.Emplace(Get1DFrom2DLocation(x + 1, y));
		index.Emplace(0);
		if (Get1DFrom2DLocation(x+1, y) == -1) {
			UE_LOG(LogClass, Warning, TEXT("error at %i,  %i"), x+1, y);
			return -1;
		}
	}
	if (y + 1 < width) {
		//tiles.Emplace(MakeShared<FGridTile>(GetTile(x, y + 1)));
		locations.Emplace(Get1DFrom2DLocation(x, y + 1));
		index.Emplace(1);
		if (Get1DFrom2DLocation(x, y + 1) == -1) {
			UE_LOG(LogClass, Warning, TEXT("error at %i,  %i"), x, y +1);
			return -1;
		}
	}
	if (x - 1 >= 0) {
		//tiles.Emplace(MakeShared<FGridTile>(GetTile(x - 1, y)));
		locations.Emplace(Get1DFrom2DLocation(x - 1, y));
		index.Emplace(2);
		
		if (Get1DFrom2DLocation(x-1, y) == -1) {
			UE_LOG(LogClass, Warning, TEXT("error at %i,  %i"), x-1, y);
			return -1;
		}
	}
	if (y - 1 >= 0) {
		//tiles.Emplace(MakeShared<FGridTile>(GetTile(x, y - 1)));
		locations.Emplace(Get1DFrom2DLocation(x, y - 1));
		if (Get1DFrom2DLocation(x, y - 1) == -1) {
			UE_LOG(LogClass, Warning, TEXT("error at %i,  %i"), x, y -1);
			return -1;
		}
		index.Emplace(3);
	}

	int32 NumEntropyToAdd = 0;
	isAvailable result;
	TArray<FEntropyLocation> potentialEntropiesToAdd;
	for (int i = 0; i < index.Num(); i++) {

		//UE_LOG(LogClass, Error, TEXT("Test loc: x:%i, y:%i"), locations[i] / depth, locations[i]%width);
		result = grid[locations[i]].testUpdate(turnedRules.GetRules().rules_strings[index[i]], turnedRules.isWall[index[i]], (index[i] + 2) % 4, mappedModel, enableRecalc);
		FString erromsg = result == isAvailable::invalid ? "invalid" : "valid";
		//UE_LOG(LogClass, Error, TEXT("Status %s"), *(erromsg));
		//if the placement would make the next placement impossible
		if (result == isAvailable::invalid) {
			return -1;
		}
		if (grid[locations[i]].hasEntropy()) {
			NumEntropyToAdd++;
			potentialEntropiesToAdd.Add(FEntropyLocation(shannonEntropy((grid[locations[i]].TestRules).rules), locations[i]));
		}
	}

	// if expected entropy is above 2 or places >= the min tiles to place then continue. 
	// (current + result - 1)
	if(entropyList.Num() + NumEntropyToAdd >= MinOpenings || MinTilesToPlace <= TilesThatArePlaced) {
		for (FEntropyLocation fel : potentialEntropiesToAdd) {
			insertEntropyLocation(fel);
		}

	} else {
		/*UE_LOG(LogClass, Error, TEXT("Bad entropy error: x:%i, y:%i"), x / depth, y % width);
		UE_LOG(LogClass, Error, TEXT("Entropy new %i"), entropyList.Num() + NumEntropyToAdd);
		UE_LOG(LogClass, Error, TEXT("Placed tiles: %i"), TilesThatArePlaced);
		UE_LOG(LogClass, Error, TEXT("Tiles to place: %i"), MinTilesToPlace);*/
		return -2;

	}
	for (int i = 0; i < locations.Num(); i++) {

		grid[locations[i]].commmitUpdate();
	}

	return NumEntropyToAdd;
}

float AWC_Generation_Grid::shannonEntropyFromPossibleTiles(TArray<FTile> tiles) {
    
    float entropy = 0.0;

    for(auto& tile : tiles) {

        for(auto& ruleSet : tile.rulesets) {

            float weight = (float)ruleSet.weight / model->totalWeight();

            entropy += weight * FMath::Log2(weight);

        }

    }
    
    return -1.0 * entropy;

}

float AWC_Generation_Grid::shannonEntropy(FRule fRule) {
    
    return shannonEntropyFromPossibleTiles(mappedModel.tilesFromBuckets(mappedModel.findAllPartialMatches(fRule)));

}

void AWC_Generation_Grid::insertEntropyLocation(FEntropyLocation fel) {
	for(int i = 0; i < entropyList.Num(); i ++) {

		if(fel.entropy > entropyList[i].entropy) {

			continue;

		} else {

			entropyList.Insert(fel, i);
			return;

		}

	}

	entropyList.Add(fel);

	return;

}

void AWC_Generation_Grid::removeEntropyLocation(int32 loc) {

	for(int i = 0; i < entropyList.Num(); i ++) {

		if(entropyList[i].location == loc) {

			entropyList.RemoveAt(i);
			break;

		}

	}

}

int32 AWC_Generation_Grid::weightedRandomTileIndex(FTileBucket tileBucket, int32 location) {

	
	TArray<int32> weights;
	int totalWeight = 0;


	///// ONLY USE WHEN A COPY IS PASSED INTO THE FUNCTION. THIS WILL OTHERWISE BREAK IT \\\\\\\\\//
	tileBucket.EvenDestributeWeight();
	

	TArray<int32> surLocations = getSurrounding(location);
	


	//////////////////////
	if (heatmapSupplied) {
		

		//tileBucket.reweigh();
		//get total weight
		for (int i = 0; i < tileBucket.tiles.Num(); i++) {

			FRuleSet ruleset = tileBucket.tiles[i].rulesets[tileBucket.ruleset[i]];

			ruleset.turn(tileBucket.rotations[i]);

			float lastmult = 1.0;

			for (int direction = 0; direction < 4; direction++) {
				//if the direction has a tile valid tile that is not already placed.
				if (surLocations[direction] != -1 && GetTile1D(surLocations[direction]).entropy >= 0) {
					//if an edge has a path
					if (ruleset.isWall[direction] == WallOptions::None) {

						ruleset.weight = FMath::CeilToInt(ruleset.weight * FMath::Min(1.7, FMath::Max(0.01, GetTile1D(location).heatMapVals[direction])));
						lastmult = FMath::Min(0.5, FMath::Max(0.01, GetTile1D(location).heatMapVals[direction]));
					}
					//if the edge is a wall
					else {
						ruleset.weight = FMath::CeilToInt(ruleset.weight * FMath::Max(.5, (2 - FMath::Max(0.01, GetTile1D(location).heatMapVals[direction]))));
						lastmult = 2.0 - GetTile1D(location).heatMapVals[direction];
					}

				}
			}


			int32 weight = ruleset.weight;


			weights.Add(weight);
			totalWeight += weight;
		}
	}
	//////////////////////////////////
	else {
		for (int i = 0; i < tileBucket.tiles.Num(); i++) {
			int32 weight = tileBucket.tiles[i].rulesets[tileBucket.ruleset[i]].weight;
			weights.Add(weight);
			totalWeight += weight;
		}
	}
	

	//find random tile
	int32 random = FMath::RandRange(1, totalWeight);


	if(totalWeight == 0) {

		return -1;

	}

	for(int i = 0; i < weights.Num(); i ++) {

		if(random <= weights[i]) {

			return i;

		}

		random -= weights[i];

	}
	
	
	return -1;

}

void AWC_Generation_Grid::resetGrid()
{
	grid.Empty();
	if (!PlacedTiles.IsEmpty()) {
		for (AActor* tile : PlacedTiles) {
			tile->Destroy();
		}
		PlacedTiles.Empty();
	}
	

	//create grid
	for (int t = 0; t < width * depth; t++) {
		grid.Add(FGridTile());
	}

	if (enableBorders) {
		//mark grid Edges
		for (int y = 0; y < width; y++) {
			GetTile(0, y).CurrentRules.MakeGridBorder(2);
			GetTile(depth - 1, y).CurrentRules.MakeGridBorder(0);
		}
		for (int x = 0; x < depth; x++) {
			GetTile(x, 0).CurrentRules.MakeGridBorder(3);
			GetTile(x, width - 1).CurrentRules.MakeGridBorder(1);
		}
	}
}

bool AWC_Generation_Grid::shouldGenerate(int32 location) {

	if(!heatmapSupplied) {

		return true;

	}
	
	return heatmapGrid[location];

}

FString AWC_Generation_Grid::AfterRunStatisticsReadout()
{
	int longest = 5;
	for (FString s : placementStatName) {
		if (s.Len() > longest) {
			longest = s.Len();
		}
	}
	

	FString retString = FString::Printf(TEXT("Placed Number of Tiles: %i\n Total Time: %f \n"), TilesThatArePlaced, lastrunTime + lastPlaceTime);
	retString += FString::Printf(TEXT("Time used for algorithm: %f, Time spent placing tiles: %f \n"), lastrunTime, lastPlaceTime);
	for (int i = 0; i < placementStatName.Num(); i++) {
		retString += FString::Printf(TEXT(" %-*s: spawned: %4i times.\n"), longest, *placementStatName[i], placementStatCount[i]);
	}

	return retString;
}
