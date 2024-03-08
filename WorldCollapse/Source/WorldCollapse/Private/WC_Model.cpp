// Fill out your copyright notice in the Description page of Project Settings.


#include "WC_Model.h"

FWCMap UWC_Model::CreateMap() {

    FWCMap map;
    //each tile
    for(FTile tile : model) {
        //each rule set per tile
        for(int r = 0; r < tile.rulesets.Num(); r ++) {

            FRuleSet ruleset = tile.rulesets[r];
            //each rotation of ruleset
            for(int i = 0; i < 1 || (i < 4 && ruleset.canRotate); i ++) {

                FTileBucket tileBucket;

                if(map.Contains(FRule::rotateRuleset(ruleset.rules, i))) {

                    tileBucket = map[FRule::rotateRuleset(ruleset.rules, i)];

                }             
                tileBucket.tiles.Add(tile);
                tileBucket.rotations.Add(i);
                tileBucket.ruleset.Add(r);
               /* FString e = FRule::rotateRuleset(ruleset.rules, i).rules_strings;*/

                FRule rule = FRule::rotateRuleset(ruleset.rules, i);

                map.Emplace(rule, tileBucket);

            }

        }

    }

    return map;

}

int32 UWC_Model::Num()
{
    return model.Num();
}

int UWC_Model::IsInModel(FSoftObjectPath TileGeometry)
{
    
    for (int i = 0; i < model.Num(); i++) {
        
        if (model[i].model.GetAssetName() == TileGeometry.GetAssetName()) {
            
            return model[i].rulesets.Num();
        }
    }
   
    return -1;
}

float UWC_Model::totalWeight() {
    
    float totalWeight = 0.0;

    for(auto& tile : model) {

        for(auto& ruleSet : tile.rulesets) {

            if(ruleSet.weight > totalWeight) {

                totalWeight += ruleSet.weight;

            }

        }

    }
    
    return totalWeight;

}

TArray<FString> UWC_Model::GetTileNameList()
{
    TArray<FString> Strings;
    for (FTile t : model) {
        FString s = t.model.GetAssetName();
        /*if (s.Contains(".")) {
            s.LeftChopInline(s.Len() - s.Find("."));
        }*/
        Strings.Add(s);
        
    }
    return Strings;
}

FTile UWC_Model::GetTileByName(FString name)
{
    for (FTile& t : model) {
        if (t.model.GetAssetFName().ToString() == name) {
            return t;
        }
    }
    return error;
}

void UWC_Model::clear()
{
    model.Empty();
}

void UWC_Model::GetTileFromGeometry(FSoftObjectPath TileGeometry, FTile& returnTile)
{
    
    FTile& result = error;
    for (int i = 0; i < model.Num(); i++) {
        result = model[i];
        if (result.model.ResolveObject() == TileGeometry.ResolveObject()) { // if a tile is found break
            returnTile = result;
            return;
        }
    }

}

int UWC_Model::AddTile(FSoftObjectPath Geometry, TArray<FString> rulesets, bool rotate, TArray<int> weights, TArray<bool> Walls) {

    //no object given
    if (Geometry == NULL) {
        return -1;
    }
    //-2: ruleset size is too small or not divisible by 6
    if (rulesets.Num() % 6 != 0 || rulesets.Num() < 6) {
        return -2;
    }
    //walls is unequal in size to the ruleset
    if (rulesets.Num() != Walls.Num()) {
        return - 3;
    }
    //Not enough weight information for the number of rulesets
    if (weights.Num() != rulesets.Num() / 6) {
        return -4;
    }
    //negitive weight
    for (auto w : weights) {
        if (w < 0) {
            return -6;
        }
    }

    //Tile picked is not valid
    UBlueprint* TileRef = Cast<UBlueprint>(Geometry.TryLoad());
    if (!TileRef) {
        UE_LOG(LogTemp, Error, TEXT("Failed to load class from %s"), *Geometry.ToString());
        return -5;
    }
    

    TArray<FRuleSet> newRules;
    

    TArray<FString> batchRule;
    TArray<WallOptions> batchWall;
    for (int i = 0; i < rulesets.Num() / 6; i++) {
        batchRule.Empty();
        batchWall.Empty();

        //This is stupid, why does unreal not let you batch remove
        for (int r = 0; r < 6; r++) {
            batchRule.Add(rulesets[r + i * 6]);
            batchWall.Add(Walls[r + i * 6] ? WallOptions::SoftWall : WallOptions::None);
        }
        newRules.Add(FRuleSet(rulesets, weights[i], batchWall, rotate));

    }
    //check if the tile already exists
    FTile ToAdd = FTile(Geometry, newRules);
    ToAdd.ID = model.Num();
    if (IsInModel(Geometry) != -1) {
        for (int i = 0; i < model.Num(); i++) {
            if (model[i].model == Geometry) {
                ToAdd.ID = model[i].ID;
                break;
            }
        }
        EditTile(ToAdd);
    }
    else {
        model.Add(ToAdd);
    }
    
    return 0;

}



int UWC_Model::EditTile(FTile ReturnTileToList) {

    if (ReturnTileToList.rulesets.Num() <= 0) {
        return -1;
    }
    for (FRuleSet R : ReturnTileToList.rulesets) {
        if (R.GetRules().rules_strings.Num() != 6) {
            return - 2;
        }
        if (R.isWall.Num() != 6) {
            return - 3;
        }
    }
    UBlueprint* TileRef = Cast<UBlueprint>(ReturnTileToList.model.TryLoad());
    if (!TileRef) {
        return -4;
    }

    for (FTile& t : model) {
        if (t.ID == ReturnTileToList.ID) {
            t = ReturnTileToList;
            return 0;
        }
    }
    return -1;

}

int UWC_Model::RemoveTile(int32 IDtoRemove) {
    //redo id
    if (IDtoRemove < 0) {
        return -1;
    }
    for (FTile t : model) {
        if (t.ID == IDtoRemove) {
            model.Remove(t);
            for (int32 index = 0; index < model.Num(); index++) {
                model[index].ID = index;
            }
            return 0;
        }
    }
    return -1;

}