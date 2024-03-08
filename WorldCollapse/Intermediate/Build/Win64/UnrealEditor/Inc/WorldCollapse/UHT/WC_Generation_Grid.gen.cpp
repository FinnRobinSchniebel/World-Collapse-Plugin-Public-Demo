// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldCollapse/Public/WC_Generation_Grid.h"
#include "WorldCollapse/Public/WC_Model.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWC_Generation_Grid() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldCollapse();
	WORLDCOLLAPSE_API UClass* Z_Construct_UClass_AWC_Generation_Grid();
	WORLDCOLLAPSE_API UClass* Z_Construct_UClass_AWC_Generation_Grid_NoRegister();
	WORLDCOLLAPSE_API UClass* Z_Construct_UClass_UWC_Model_NoRegister();
	WORLDCOLLAPSE_API UEnum* Z_Construct_UEnum_WorldCollapse_isAvailable();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FEntropyLocation();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FGridTile();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FRule();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FRuleSet();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FTile();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FTileBucket();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWCMap();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_isAvailable;
	static UEnum* isAvailable_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_isAvailable.OuterSingleton)
		{
			Z_Registration_Info_UEnum_isAvailable.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldCollapse_isAvailable, (UObject*)Z_Construct_UPackage__Script_WorldCollapse(), TEXT("isAvailable"));
		}
		return Z_Registration_Info_UEnum_isAvailable.OuterSingleton;
	}
	template<> WORLDCOLLAPSE_API UEnum* StaticEnum<isAvailable>()
	{
		return isAvailable_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldCollapse_isAvailable_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldCollapse_isAvailable_Statics::Enumerators[] = {
		{ "isAvailable::invalid", (int64)isAvailable::invalid },
		{ "isAvailable::valid", (int64)isAvailable::valid },
		{ "isAvailable::closed", (int64)isAvailable::closed },
		{ "isAvailable::inaccessible", (int64)isAvailable::inaccessible },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldCollapse_isAvailable_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "closed.Comment", "// can place\n" },
		{ "closed.Name", "isAvailable::closed" },
		{ "closed.ToolTip", "can place" },
		{ "Comment", "// Use int32 to map enum to int\n" },
		{ "inaccessible.Comment", "// tile is already occupide but valid\n" },
		{ "inaccessible.Name", "isAvailable::inaccessible" },
		{ "inaccessible.ToolTip", "tile is already occupide but valid" },
		{ "invalid.Name", "isAvailable::invalid" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Use int32 to map enum to int" },
		{ "valid.Comment", "// cannot place\n" },
		{ "valid.Name", "isAvailable::valid" },
		{ "valid.ToolTip", "cannot place" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldCollapse_isAvailable_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldCollapse,
		nullptr,
		"isAvailable",
		"isAvailable",
		Z_Construct_UEnum_WorldCollapse_isAvailable_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldCollapse_isAvailable_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WorldCollapse_isAvailable_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WorldCollapse_isAvailable_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WorldCollapse_isAvailable()
	{
		if (!Z_Registration_Info_UEnum_isAvailable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_isAvailable.InnerSingleton, Z_Construct_UEnum_WorldCollapse_isAvailable_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_isAvailable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EntropyLocation;
class UScriptStruct* FEntropyLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EntropyLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EntropyLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntropyLocation, (UObject*)Z_Construct_UPackage__Script_WorldCollapse(), TEXT("EntropyLocation"));
	}
	return Z_Registration_Info_UScriptStruct_EntropyLocation.OuterSingleton;
}
template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<FEntropyLocation>()
{
	return FEntropyLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEntropyLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_entropy_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_entropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnedbackCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnedbackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntropyLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>\n/// Used in an min-queue array and hold the vaule of the entropy (used in array) and  the location in the grid that it belongs to (1d location).\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nUsed in an min-queue array and hold the vaule of the entropy (used in array) and  the location in the grid that it belongs to (1d location).\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntropyLocation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_entropy_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//stores the entropy value that corresponds to a tiles current entropy\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "stores the entropy value that corresponds to a tiles current entropy" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_entropy = { "entropy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEntropyLocation, entropy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_entropy_MetaData), Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_entropy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_location_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//The 1D location of the tile in the grid that the entropy belongs to\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "The 1D location of the tile in the grid that the entropy belongs to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEntropyLocation, location), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_location_MetaData), Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_ReturnedbackCount_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//used for heat map \n//Keeps track of how many times a location has been sent back into the min-queue for later calculation\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "used for heat map\nKeeps track of how many times a location has been sent back into the min-queue for later calculation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_ReturnedbackCount = { "ReturnedbackCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEntropyLocation, ReturnedbackCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_ReturnedbackCount_MetaData), Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_ReturnedbackCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEntropyLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_entropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewProp_ReturnedbackCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntropyLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldCollapse,
		nullptr,
		&NewStructOps,
		"EntropyLocation",
		Z_Construct_UScriptStruct_FEntropyLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntropyLocation_Statics::PropPointers),
		sizeof(FEntropyLocation),
		alignof(FEntropyLocation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntropyLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntropyLocation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntropyLocation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEntropyLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_EntropyLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EntropyLocation.InnerSingleton, Z_Construct_UScriptStruct_FEntropyLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EntropyLocation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridTile;
class UScriptStruct* FGridTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridTile, (UObject*)Z_Construct_UPackage__Script_WorldCollapse(), TEXT("GridTile"));
	}
	return Z_Registration_Info_UScriptStruct_GridTile.OuterSingleton;
}
template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<FGridTile>()
{
	return FGridTile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_entropy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_entropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlacedRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestRules;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_heatMapVals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heatMapVals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_heatMapVals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ownHeat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ownHeat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_testOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_testOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridTile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridTile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_entropy_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_entropy = { "entropy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, entropy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_entropy_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_entropy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_tile_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//current geomety info\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "current geomety info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, tile), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_tile_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_tile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_PlacedRotation_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "// an integer of how many times a tiles needs to be rotated by 90 degrees before being placed.\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "an integer of how many times a tiles needs to be rotated by 90 degrees before being placed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_PlacedRotation = { "PlacedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, PlacedRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_PlacedRotation_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_PlacedRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_CurrentRules_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//the rules the time currently has from its neighbors\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "the rules the time currently has from its neighbors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_CurrentRules = { "CurrentRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, CurrentRules), Z_Construct_UScriptStruct_FRuleSet, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_CurrentRules_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_CurrentRules_MetaData) }; // 1937962559
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_TestRules_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//the rules that it could have if a tile around it is being placed to see if it could fit in that location.\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "the rules that it could have if a tile around it is being placed to see if it could fit in that location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_TestRules = { "TestRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, TestRules), Z_Construct_UScriptStruct_FRuleSet, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_TestRules_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_TestRules_MetaData) }; // 1937962559
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_heatMapVals_Inner = { "heatMapVals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_heatMapVals_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_heatMapVals = { "heatMapVals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, heatMapVals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_heatMapVals_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_heatMapVals_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_ownHeat_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//the heat value from the heat map that is gotten from the pixel that corresponds to the location of the tile.\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "the heat value from the heat map that is gotten from the pixel that corresponds to the location of the tile." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_ownHeat = { "ownHeat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, ownHeat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_ownHeat_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_ownHeat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_testOptions_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//options being tested (not applied)\n//the hypothetical tiles that could fill this spot given the testRules\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "options being tested (not applied)\nthe hypothetical tiles that could fill this spot given the testRules" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_testOptions = { "testOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, testOptions), Z_Construct_UScriptStruct_FTileBucket, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_testOptions_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_testOptions_MetaData) }; // 3276309063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//options currently available\n//the current tiles that a can be placed given its currentRules.\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "options currently available\nthe current tiles that a can be placed given its currentRules." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, Options), Z_Construct_UScriptStruct_FTileBucket, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Options_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Options_MetaData) }; // 3276309063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_entropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_PlacedRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_CurrentRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_TestRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_heatMapVals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_heatMapVals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_ownHeat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_testOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridTile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldCollapse,
		nullptr,
		&NewStructOps,
		"GridTile",
		Z_Construct_UScriptStruct_FGridTile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::PropPointers),
		sizeof(FGridTile),
		alignof(FGridTile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridTile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGridTile()
	{
		if (!Z_Registration_Info_UScriptStruct_GridTile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridTile.InnerSingleton, Z_Construct_UScriptStruct_FGridTile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridTile.InnerSingleton;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execAfterRunStatisticsReadout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AfterRunStatisticsReadout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execshouldGenerate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->shouldGenerate(Z_Param_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execresetGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetGrid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execweightedRandomTileIndex)
	{
		P_GET_STRUCT(FTileBucket,Z_Param_tileBucket);
		P_GET_PROPERTY(FIntProperty,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->weightedRandomTileIndex(Z_Param_tileBucket,Z_Param_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execremoveEntropyLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_loc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->removeEntropyLocation(Z_Param_loc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execinsertEntropyLocation)
	{
		P_GET_STRUCT(FEntropyLocation,Z_Param_fel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->insertEntropyLocation(Z_Param_fel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execshannonEntropyFromPossibleTiles)
	{
		P_GET_TARRAY(FTile,Z_Param_tiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->shannonEntropyFromPossibleTiles(Z_Param_tiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execshannonEntropy)
	{
		P_GET_STRUCT(FRule,Z_Param_fRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->shannonEntropy(Z_Param_fRule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execUpdateSurrounding)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_loc);
		P_GET_STRUCT(FRuleSet,Z_Param_turnedRules);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateSurrounding(Z_Param_loc,Z_Param_turnedRules);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execPlaceTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_loc);
		P_GET_PROPERTY(FIntProperty,Z_Param_ruleNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_rotation);
		P_GET_STRUCT(FTile,Z_Param_tileToPlace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PlaceTile(Z_Param_loc,Z_Param_ruleNum,Z_Param_rotation,Z_Param_tileToPlace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execWorldCollapse)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DepthStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_WidthStart);
		P_GET_STRUCT(FSoftObjectPath,Z_Param_StartTile);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartRuleset);
		P_GET_PROPERTY(FIntProperty,Z_Param_startRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->WorldCollapse(Z_Param_DepthStart,Z_Param_WidthStart,Z_Param_StartTile,Z_Param_StartRuleset,Z_Param_startRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execPlaceFirstTile)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_StartTile);
		P_GET_PROPERTY(FIntProperty,Z_Param_rulesetOption);
		P_GET_PROPERTY(FIntProperty,Z_Param_rotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_DepthStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_WidthStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PlaceFirstTile(Z_Param_StartTile,Z_Param_rulesetOption,Z_Param_rotation,Z_Param_DepthStart,Z_Param_WidthStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execIsTileInValidLocation)
	{
		P_GET_STRUCT_REF(FRuleSet,Z_Param_Out_RuleToTest);
		P_GET_PROPERTY(FIntProperty,Z_Param_DepthStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_WidthStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IsTileInValidLocation(Z_Param_Out_RuleToTest,Z_Param_DepthStart,Z_Param_WidthStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execGenerateGridGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GenerateGridGeometry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execInitHeatMap)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_HeatMapL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->InitHeatMap(Z_Param_HeatMapL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execInitilize)
	{
		P_GET_OBJECT(UWC_Model,Z_Param_ModelL);
		P_GET_PROPERTY(FIntProperty,Z_Param_WidthL);
		P_GET_PROPERTY(FIntProperty,Z_Param_DepthL);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumTilesL);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TileHorizontalSizeL);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TileScaleL);
		P_GET_OBJECT(UTexture2D,Z_Param_HeatMapL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Initilize(Z_Param_ModelL,Z_Param_WidthL,Z_Param_DepthL,Z_Param_NumTilesL,Z_Param_TileHorizontalSizeL,Z_Param_TileScaleL,Z_Param_HeatMapL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execgetSurrounding)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_loc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->getSurrounding(Z_Param_loc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execGetTile1D)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_loc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridTile*)Z_Param__Result=P_THIS->GetTile1D(Z_Param_loc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execGet1DFrom2DLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Get1DFrom2DLocation(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWC_Generation_Grid::execGetTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridTile*)Z_Param__Result=P_THIS->GetTile(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	void AWC_Generation_Grid::StaticRegisterNativesAWC_Generation_Grid()
	{
		UClass* Class = AWC_Generation_Grid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AfterRunStatisticsReadout", &AWC_Generation_Grid::execAfterRunStatisticsReadout },
			{ "GenerateGridGeometry", &AWC_Generation_Grid::execGenerateGridGeometry },
			{ "Get1DFrom2DLocation", &AWC_Generation_Grid::execGet1DFrom2DLocation },
			{ "getSurrounding", &AWC_Generation_Grid::execgetSurrounding },
			{ "GetTile", &AWC_Generation_Grid::execGetTile },
			{ "GetTile1D", &AWC_Generation_Grid::execGetTile1D },
			{ "InitHeatMap", &AWC_Generation_Grid::execInitHeatMap },
			{ "Initilize", &AWC_Generation_Grid::execInitilize },
			{ "insertEntropyLocation", &AWC_Generation_Grid::execinsertEntropyLocation },
			{ "IsTileInValidLocation", &AWC_Generation_Grid::execIsTileInValidLocation },
			{ "PlaceFirstTile", &AWC_Generation_Grid::execPlaceFirstTile },
			{ "PlaceTile", &AWC_Generation_Grid::execPlaceTile },
			{ "removeEntropyLocation", &AWC_Generation_Grid::execremoveEntropyLocation },
			{ "resetGrid", &AWC_Generation_Grid::execresetGrid },
			{ "shannonEntropy", &AWC_Generation_Grid::execshannonEntropy },
			{ "shannonEntropyFromPossibleTiles", &AWC_Generation_Grid::execshannonEntropyFromPossibleTiles },
			{ "shouldGenerate", &AWC_Generation_Grid::execshouldGenerate },
			{ "UpdateSurrounding", &AWC_Generation_Grid::execUpdateSurrounding },
			{ "weightedRandomTileIndex", &AWC_Generation_Grid::execweightedRandomTileIndex },
			{ "WorldCollapse", &AWC_Generation_Grid::execWorldCollapse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics
	{
		struct WC_Generation_Grid_eventAfterRunStatisticsReadout_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventAfterRunStatisticsReadout_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Can be called after a generation to have a print out of the statistics collected during the run.\n/// This includes run times and the amount of each tile placed.\n/// </summary>\n/// <returns></returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nCan be called after a generation to have a print out of the statistics collected during the run.\nThis includes run times and the amount of each tile placed.\n</summary>\n<returns></returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "AfterRunStatisticsReadout", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::WC_Generation_Grid_eventAfterRunStatisticsReadout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::WC_Generation_Grid_eventAfterRunStatisticsReadout_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics
	{
		struct WC_Generation_Grid_eventGenerateGridGeometry_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventGenerateGridGeometry_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**\n\x09* This function generates the gemometry in the playspace after all tiles have been collapsed.\n\x09* Returns the number of failed tile generations.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "This function generates the gemometry in the playspace after all tiles have been collapsed.\nReturns the number of failed tile generations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "GenerateGridGeometry", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::WC_Generation_Grid_eventGenerateGridGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::WC_Generation_Grid_eventGenerateGridGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics
	{
		struct WC_Generation_Grid_eventGet1DFrom2DLocation_Parms
		{
			int32 x;
			int32 y;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventGet1DFrom2DLocation_Parms, x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventGet1DFrom2DLocation_Parms, y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventGet1DFrom2DLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**\n\x09* Get a tile index location using its two dimensional location\n\x09* Used in primarily for algorithm use.\n\x09*  returns -1 if choice is invalid.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Get a tile index location using its two dimensional location\nUsed in primarily for algorithm use.\n returns -1 if choice is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "Get1DFrom2DLocation", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::WC_Generation_Grid_eventGet1DFrom2DLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::WC_Generation_Grid_eventGet1DFrom2DLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics
	{
		struct WC_Generation_Grid_eventgetSurrounding_Parms
		{
			int32 loc;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_loc;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventgetSurrounding_Parms, loc), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventgetSurrounding_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::NewProp_loc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "getSurrounding", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::WC_Generation_Grid_eventgetSurrounding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::WC_Generation_Grid_eventgetSurrounding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics
	{
		struct WC_Generation_Grid_eventGetTile_Parms
		{
			int32 x;
			int32 y;
			FGridTile ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventGetTile_Parms, x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventGetTile_Parms, y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventGetTile_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(0, nullptr) }; // 2840944341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**\n\x09* Get a tile using its two dimensional location\n\x09* Used primarily for user input.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Get a tile using its two dimensional location\nUsed primarily for user input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "GetTile", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::WC_Generation_Grid_eventGetTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::WC_Generation_Grid_eventGetTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_GetTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_GetTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics
	{
		struct WC_Generation_Grid_eventGetTile1D_Parms
		{
			int32 loc;
			FGridTile ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_loc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventGetTile1D_Parms, loc), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventGetTile1D_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(0, nullptr) }; // 2840944341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::NewProp_loc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**\n\x09* Get a tile using its one dimensional location\n\x09* Used primarily for algorithm use\n\x09*/" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Get a tile using its one dimensional location\nUsed primarily for algorithm use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "GetTile1D", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::WC_Generation_Grid_eventGetTile1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::WC_Generation_Grid_eventGetTile1D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics
	{
		struct WC_Generation_Grid_eventInitHeatMap_Parms
		{
			UTexture2D* HeatMapL;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeatMapL;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::NewProp_HeatMapL = { "HeatMapL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventInitHeatMap_Parms, HeatMapL), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventInitHeatMap_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::NewProp_HeatMapL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Initilizes the heat map in initilize. Should not be used before init.\n/// Internal function\n/// </summary>\n/// <param name=\"HeatMapL\"></param>\n/// <returns></returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nInitilizes the heat map in initilize. Should not be used before init.\nInternal function\n</summary>\n<param name=\"HeatMapL\"></param>\n<returns></returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "InitHeatMap", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::WC_Generation_Grid_eventInitHeatMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::WC_Generation_Grid_eventInitHeatMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics
	{
		struct WC_Generation_Grid_eventInitilize_Parms
		{
			UWC_Model* ModelL;
			int32 WidthL;
			int32 DepthL;
			int32 NumTilesL;
			float TileHorizontalSizeL;
			float TileScaleL;
			UTexture2D* HeatMapL;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModelL;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WidthL;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DepthL;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTilesL;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileHorizontalSizeL;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileScaleL;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeatMapL;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_ModelL = { "ModelL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventInitilize_Parms, ModelL), Z_Construct_UClass_UWC_Model_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_WidthL = { "WidthL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventInitilize_Parms, WidthL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_DepthL = { "DepthL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventInitilize_Parms, DepthL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_NumTilesL = { "NumTilesL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventInitilize_Parms, NumTilesL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_TileHorizontalSizeL = { "TileHorizontalSizeL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventInitilize_Parms, TileHorizontalSizeL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_TileScaleL = { "TileScaleL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventInitilize_Parms, TileScaleL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_HeatMapL = { "HeatMapL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventInitilize_Parms, HeatMapL), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventInitilize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_ModelL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_WidthL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_DepthL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_NumTilesL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_TileHorizontalSizeL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_TileScaleL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_HeatMapL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n///  Initilize will initilize the class variables using the information that it is passed in\n/// </summary>\n/// <param name=\"ModelL\">the WC_model to use for the generation</param>\n/// <param name=\"WidthL\">The width (y value) the genration can occupy (in number of tiles)</param>\n/// <param name=\"DepthL\">The Depth (x-value) the genration can occupy (in number of tiles)</param>\n/// <param name=\"NumTilesL\"> Minumum number of tiles the generation should place</param>\n/// <param name=\"TileHorizontalSizeL\"> the size the tiles takes up in the XY directions</param>\n/// <param name=\"TileScaleL\">The scale at which the tile should be placed at (un-supported at this moment)</param>\n/// <param name=\"HeatMapL\">Heatmap to use for the generation. will wrap if smaller then generation. Will only be used to the size of generation if map is bigger</param>\n/// <returns>Error codes if init fails</returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\n Initilize will initilize the class variables using the information that it is passed in\n</summary>\n<param name=\"ModelL\">the WC_model to use for the generation</param>\n<param name=\"WidthL\">The width (y value) the genration can occupy (in number of tiles)</param>\n<param name=\"DepthL\">The Depth (x-value) the genration can occupy (in number of tiles)</param>\n<param name=\"NumTilesL\"> Minumum number of tiles the generation should place</param>\n<param name=\"TileHorizontalSizeL\"> the size the tiles takes up in the XY directions</param>\n<param name=\"TileScaleL\">The scale at which the tile should be placed at (un-supported at this moment)</param>\n<param name=\"HeatMapL\">Heatmap to use for the generation. will wrap if smaller then generation. Will only be used to the size of generation if map is bigger</param>\n<returns>Error codes if init fails</returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "Initilize", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::WC_Generation_Grid_eventInitilize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::WC_Generation_Grid_eventInitilize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_Initilize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_Initilize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics
	{
		struct WC_Generation_Grid_eventinsertEntropyLocation_Parms
		{
			FEntropyLocation fel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_fel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::NewProp_fel = { "fel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventinsertEntropyLocation_Parms, fel), Z_Construct_UScriptStruct_FEntropyLocation, METADATA_PARAMS(0, nullptr) }; // 2873011404
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::NewProp_fel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// inserts the entropy in the entropy list in a sorted fashion placing the lowest first.\n/// Internal function\n/// </summary>\n/// <param name=\"fel\">The entropy location object created from a entropy value and a 1d location in the grid</param>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\ninserts the entropy in the entropy list in a sorted fashion placing the lowest first.\nInternal function\n</summary>\n<param name=\"fel\">The entropy location object created from a entropy value and a 1d location in the grid</param>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "insertEntropyLocation", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::WC_Generation_Grid_eventinsertEntropyLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::WC_Generation_Grid_eventinsertEntropyLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics
	{
		struct WC_Generation_Grid_eventIsTileInValidLocation_Parms
		{
			FRuleSet RuleToTest;
			int32 DepthStart;
			int32 WidthStart;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuleToTest;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DepthStart;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WidthStart;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::NewProp_RuleToTest = { "RuleToTest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventIsTileInValidLocation_Parms, RuleToTest), Z_Construct_UScriptStruct_FRuleSet, METADATA_PARAMS(0, nullptr) }; // 1937962559
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::NewProp_DepthStart = { "DepthStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventIsTileInValidLocation_Parms, DepthStart), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::NewProp_WidthStart = { "WidthStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventIsTileInValidLocation_Parms, WidthStart), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventIsTileInValidLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::NewProp_RuleToTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::NewProp_DepthStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::NewProp_WidthStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**\n\x09* Checks if a tile ruleset can be placed in a specific location on the grid.\n\x09* errors:\n\x09*  0: no error\n\x09* -1: grid location out of range\n\x09* -2: cannot be placed due to restrictions\n\x09*/" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Checks if a tile ruleset can be placed in a specific location on the grid.\nerrors:\n 0: no error\n-1: grid location out of range\n-2: cannot be placed due to restrictions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "IsTileInValidLocation", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::WC_Generation_Grid_eventIsTileInValidLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::WC_Generation_Grid_eventIsTileInValidLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct WC_Generation_Grid_eventPlaceFirstTile_Parms
		{
			FSoftObjectPath StartTile;
			int32 rulesetOption;
			int32 rotation;
			int32 DepthStart;
			int32 WidthStart;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTile;
		static const UECodeGen_Private::FIntPropertyParams NewProp_rulesetOption;
		static const UECodeGen_Private::FIntPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DepthStart;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WidthStart;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_StartTile = { "StartTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceFirstTile_Parms, StartTile), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_rulesetOption = { "rulesetOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceFirstTile_Parms, rulesetOption), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceFirstTile_Parms, rotation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_DepthStart = { "DepthStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceFirstTile_Parms, DepthStart), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_WidthStart = { "WidthStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceFirstTile_Parms, WidthStart), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceFirstTile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_StartTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_rulesetOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_DepthStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_WidthStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**\n\x09* Places the first tile in generation with error checking.\n\x09* Error codes -300 are errors.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Places the first tile in generation with error checking.\nError codes -300 are errors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "PlaceFirstTile", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::WC_Generation_Grid_eventPlaceFirstTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::WC_Generation_Grid_eventPlaceFirstTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics
	{
		struct WC_Generation_Grid_eventPlaceTile_Parms
		{
			int32 loc;
			int32 ruleNum;
			int32 rotation;
			FTile tileToPlace;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_loc;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ruleNum;
		static const UECodeGen_Private::FIntPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tileToPlace;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceTile_Parms, loc), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::NewProp_ruleNum = { "ruleNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceTile_Parms, ruleNum), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceTile_Parms, rotation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::NewProp_tileToPlace = { "tileToPlace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceTile_Parms, tileToPlace), Z_Construct_UScriptStruct_FTile, METADATA_PARAMS(0, nullptr) }; // 1552443848
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventPlaceTile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::NewProp_loc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::NewProp_ruleNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::NewProp_tileToPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Internal function (should not be used outside without knowing how it works)\n/// checks if a tile is valid and places it if it is.\n/// </summary>\n/// <param name=\"loc\">Location in 1-dimension of where the tile is to be placed in the grid</param>\n/// <param name=\"ruleNum\">What rule the tile is meant to follow at this location</param>\n/// <param name=\"rotation\">The rotation the tile is to be placed in (values 0-3 turns 90 degrees per incerment)</param>\n/// <param name=\"tileToPlace\">The tile to place retrieved from the WC_model</param>\n/// <returns>will return an error code (-) if it cant be placed</returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nInternal function (should not be used outside without knowing how it works)\nchecks if a tile is valid and places it if it is.\n</summary>\n<param name=\"loc\">Location in 1-dimension of where the tile is to be placed in the grid</param>\n<param name=\"ruleNum\">What rule the tile is meant to follow at this location</param>\n<param name=\"rotation\">The rotation the tile is to be placed in (values 0-3 turns 90 degrees per incerment)</param>\n<param name=\"tileToPlace\">The tile to place retrieved from the WC_model</param>\n<returns>will return an error code (-) if it cant be placed</returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "PlaceTile", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::WC_Generation_Grid_eventPlaceTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::WC_Generation_Grid_eventPlaceTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics
	{
		struct WC_Generation_Grid_eventremoveEntropyLocation_Parms
		{
			int32 loc;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_loc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventremoveEntropyLocation_Parms, loc), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::NewProp_loc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Removes entropy at a location.\n/// </summary>\n/// <param name=\"loc\">Location in the entropy array</param>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nRemoves entropy at a location.\n</summary>\n<param name=\"loc\">Location in the entropy array</param>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "removeEntropyLocation", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::WC_Generation_Grid_eventremoveEntropyLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::WC_Generation_Grid_eventremoveEntropyLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_resetGrid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_resetGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Returns the grid to its starting state and removes any spawned geometry.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nReturns the grid to its starting state and removes any spawned geometry.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_resetGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "resetGrid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_resetGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_resetGrid_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_resetGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_resetGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics
	{
		struct WC_Generation_Grid_eventshannonEntropy_Parms
		{
			FRule fRule;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_fRule;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::NewProp_fRule = { "fRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventshannonEntropy_Parms, fRule), Z_Construct_UScriptStruct_FRule, METADATA_PARAMS(0, nullptr) }; // 3240476602
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventshannonEntropy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::NewProp_fRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Calculates the shanon entropy of a grid tile given its rulset. \n/// Uses the total weight of the bucket options to do so.\n/// </summary>\n/// <param name=\"fRule\">Rule to use for producing the entropy of the tile.</param>\n/// <returns>the entropy result</returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nCalculates the shanon entropy of a grid tile given its rulset.\nUses the total weight of the bucket options to do so.\n</summary>\n<param name=\"fRule\">Rule to use for producing the entropy of the tile.</param>\n<returns>the entropy result</returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "shannonEntropy", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::WC_Generation_Grid_eventshannonEntropy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::WC_Generation_Grid_eventshannonEntropy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics
	{
		struct WC_Generation_Grid_eventshannonEntropyFromPossibleTiles_Parms
		{
			TArray<FTile> tiles;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_tiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tiles;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::NewProp_tiles_Inner = { "tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTile, METADATA_PARAMS(0, nullptr) }; // 1552443848
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::NewProp_tiles = { "tiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventshannonEntropyFromPossibleTiles_Parms, tiles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1552443848
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventshannonEntropyFromPossibleTiles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::NewProp_tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::NewProp_tiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// used in \"shannonEntropy\", internal function.\n/// Calculates the shanon entropy of a grid tile given its rulset. \n/// Uses the total weight of the bucket options to do so.\n/// </summary>\n/// <param name=\"tiles\"></param>\n/// <returns></returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nused in \"shannonEntropy\", internal function.\nCalculates the shanon entropy of a grid tile given its rulset.\nUses the total weight of the bucket options to do so.\n</summary>\n<param name=\"tiles\"></param>\n<returns></returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "shannonEntropyFromPossibleTiles", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::WC_Generation_Grid_eventshannonEntropyFromPossibleTiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::WC_Generation_Grid_eventshannonEntropyFromPossibleTiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics
	{
		struct WC_Generation_Grid_eventshouldGenerate_Parms
		{
			int32 location;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventshouldGenerate_Parms, location), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WC_Generation_Grid_eventshouldGenerate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WC_Generation_Grid_eventshouldGenerate_Parms), &Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Depricated\n/// </summary>\n/// <param name=\"location\"></param>\n/// <returns></returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nDepricated\n</summary>\n<param name=\"location\"></param>\n<returns></returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "shouldGenerate", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::WC_Generation_Grid_eventshouldGenerate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::WC_Generation_Grid_eventshouldGenerate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics
	{
		struct WC_Generation_Grid_eventUpdateSurrounding_Parms
		{
			int32 loc;
			FRuleSet turnedRules;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_loc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_turnedRules;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventUpdateSurrounding_Parms, loc), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::NewProp_turnedRules = { "turnedRules", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventUpdateSurrounding_Parms, turnedRules), Z_Construct_UScriptStruct_FRuleSet, METADATA_PARAMS(0, nullptr) }; // 1937962559
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventUpdateSurrounding_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::NewProp_loc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::NewProp_turnedRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n///\x09Used as part of placeTile. Checks the surrounding tiles in the grid and checks if they can still generate with this tile placement.\n/// Only checks this for tiles that have entropy.\n/// Will also check if the entropy list has enough tiles in it to continue generation if the min number of tiles have not been placed yet.\n/// Will update the rules of surrounding if the placement is valid.\n/// </summary>\n/// <param name=\"loc\">location of the tile being placed (not the surrounding tile)</param>\n/// <param name=\"turnedRules\">The ruleset to test with that has already been turned to fit the exact placement it is meant to go in</param>\n/// <returns>can return error codes (-) if invalid or 0 if it works</returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\n      Used as part of placeTile. Checks the surrounding tiles in the grid and checks if they can still generate with this tile placement.\nOnly checks this for tiles that have entropy.\nWill also check if the entropy list has enough tiles in it to continue generation if the min number of tiles have not been placed yet.\nWill update the rules of surrounding if the placement is valid.\n</summary>\n<param name=\"loc\">location of the tile being placed (not the surrounding tile)</param>\n<param name=\"turnedRules\">The ruleset to test with that has already been turned to fit the exact placement it is meant to go in</param>\n<returns>can return error codes (-) if invalid or 0 if it works</returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "UpdateSurrounding", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::WC_Generation_Grid_eventUpdateSurrounding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::WC_Generation_Grid_eventUpdateSurrounding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics
	{
		struct WC_Generation_Grid_eventweightedRandomTileIndex_Parms
		{
			FTileBucket tileBucket;
			int32 location;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_tileBucket;
		static const UECodeGen_Private::FIntPropertyParams NewProp_location;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::NewProp_tileBucket = { "tileBucket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventweightedRandomTileIndex_Parms, tileBucket), Z_Construct_UScriptStruct_FTileBucket, METADATA_PARAMS(0, nullptr) }; // 3276309063
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventweightedRandomTileIndex_Parms, location), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventweightedRandomTileIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::NewProp_tileBucket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Retrieves a tile from the bucket at random using the tiles weight (and heat map if one is provided)\n/// Internal function\n/// </summary>\n/// <param name=\"tileBucket\">Tile bucket to retrieve from</param> \n/// <param name=\"location\">Location in the grid to which the bucket belongs</param>\n/// <returns>returns the index of the tile picked at random in the bucket</returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nRetrieves a tile from the bucket at random using the tiles weight (and heat map if one is provided)\nInternal function\n</summary>\n<param name=\"tileBucket\">Tile bucket to retrieve from</param>\n<param name=\"location\">Location in the grid to which the bucket belongs</param>\n<returns>returns the index of the tile picked at random in the bucket</returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "weightedRandomTileIndex", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::WC_Generation_Grid_eventweightedRandomTileIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::WC_Generation_Grid_eventweightedRandomTileIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct WC_Generation_Grid_eventWorldCollapse_Parms
		{
			int32 DepthStart;
			int32 WidthStart;
			FSoftObjectPath StartTile;
			int32 StartRuleset;
			int32 startRotation;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DepthStart;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WidthStart;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTile;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartRuleset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_startRotation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_DepthStart = { "DepthStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventWorldCollapse_Parms, DepthStart), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_WidthStart = { "WidthStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventWorldCollapse_Parms, WidthStart), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_StartTile = { "StartTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventWorldCollapse_Parms, StartTile), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_StartRuleset = { "StartRuleset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventWorldCollapse_Parms, StartRuleset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_startRotation = { "startRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventWorldCollapse_Parms, startRotation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Generation_Grid_eventWorldCollapse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_DepthStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_WidthStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_StartTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_StartRuleset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_startRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Runs the algorithm after initilization. (Should not be called before init is called)\n/// </summary>\n/// <param name=\"DepthStart\"> the depth the starting tile should be set to (x-coordinate)</param>\n/// <param name=\"WidthStart\">the width the starting tile should be set to (y-coordinate)</param>\n/// <param name=\"StartTile\">The actor that you want to lace as the first tile in this location</param>\n/// <param name=\"StartRuleset\">The rulset you want this first tile to use (if it has multiple)</param>\n/// <param name=\"startRotation\">the rotation you want the tile to be placed in (if it has more then one rotation)</param>\n/// <returns>The error code if a issue should occur</returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "<summary>\nRuns the algorithm after initilization. (Should not be called before init is called)\n</summary>\n<param name=\"DepthStart\"> the depth the starting tile should be set to (x-coordinate)</param>\n<param name=\"WidthStart\">the width the starting tile should be set to (y-coordinate)</param>\n<param name=\"StartTile\">The actor that you want to lace as the first tile in this location</param>\n<param name=\"StartRuleset\">The rulset you want this first tile to use (if it has multiple)</param>\n<param name=\"startRotation\">the rotation you want the tile to be placed in (if it has more then one rotation)</param>\n<returns>The error code if a issue should occur</returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWC_Generation_Grid, nullptr, "WorldCollapse", nullptr, nullptr, Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::WC_Generation_Grid_eventWorldCollapse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::WC_Generation_Grid_eventWorldCollapse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWC_Generation_Grid);
	UClass* Z_Construct_UClass_AWC_Generation_Grid_NoRegister()
	{
		return AWC_Generation_Grid::StaticClass();
	}
	struct Z_Construct_UClass_AWC_Generation_Grid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_my_BP_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_my_BP_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMarker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorMarker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinOpenings_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinOpenings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_depth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_depth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_grid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTilesToPlace_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinTilesToPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesThatArePlaced_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TilesThatArePlaced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_availableTiles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_availableTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tileHorizontalSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tileHorizontalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tileScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tileScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heatMap_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_heatMap;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_heatmapGrid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heatmapGrid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_heatmapGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heatmapSupplied_MetaData[];
#endif
		static void NewProp_heatmapSupplied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_heatmapSupplied;
		static const UECodeGen_Private::FStructPropertyParams NewProp_entropyList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_entropyList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_entropyList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_model_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mappedModel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappedModel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacedTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacedTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlacedTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_allowedTries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_allowedTries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastrunTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lastrunTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastPlaceTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lastPlaceTime;
		static const UECodeGen_Private::FStrPropertyParams NewProp_placementStatName_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_placementStatName_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_placementStatName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_placementStatCount_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_placementStatCount_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_placementStatCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enableBorders_MetaData[];
#endif
		static void NewProp_enableBorders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enableBorders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enableRecalc_MetaData[];
#endif
		static void NewProp_enableRecalc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enableRecalc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_error_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWC_Generation_Grid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldCollapse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AWC_Generation_Grid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWC_Generation_Grid_AfterRunStatisticsReadout, "AfterRunStatisticsReadout" }, // 2915820108
		{ &Z_Construct_UFunction_AWC_Generation_Grid_GenerateGridGeometry, "GenerateGridGeometry" }, // 58020360
		{ &Z_Construct_UFunction_AWC_Generation_Grid_Get1DFrom2DLocation, "Get1DFrom2DLocation" }, // 2858823401
		{ &Z_Construct_UFunction_AWC_Generation_Grid_getSurrounding, "getSurrounding" }, // 1753511521
		{ &Z_Construct_UFunction_AWC_Generation_Grid_GetTile, "GetTile" }, // 1680012218
		{ &Z_Construct_UFunction_AWC_Generation_Grid_GetTile1D, "GetTile1D" }, // 3937664810
		{ &Z_Construct_UFunction_AWC_Generation_Grid_InitHeatMap, "InitHeatMap" }, // 2905259594
		{ &Z_Construct_UFunction_AWC_Generation_Grid_Initilize, "Initilize" }, // 3240557499
		{ &Z_Construct_UFunction_AWC_Generation_Grid_insertEntropyLocation, "insertEntropyLocation" }, // 4065539715
		{ &Z_Construct_UFunction_AWC_Generation_Grid_IsTileInValidLocation, "IsTileInValidLocation" }, // 3949504279
		{ &Z_Construct_UFunction_AWC_Generation_Grid_PlaceFirstTile, "PlaceFirstTile" }, // 3576646077
		{ &Z_Construct_UFunction_AWC_Generation_Grid_PlaceTile, "PlaceTile" }, // 3072201230
		{ &Z_Construct_UFunction_AWC_Generation_Grid_removeEntropyLocation, "removeEntropyLocation" }, // 3810785523
		{ &Z_Construct_UFunction_AWC_Generation_Grid_resetGrid, "resetGrid" }, // 598053107
		{ &Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropy, "shannonEntropy" }, // 3212588226
		{ &Z_Construct_UFunction_AWC_Generation_Grid_shannonEntropyFromPossibleTiles, "shannonEntropyFromPossibleTiles" }, // 1076422776
		{ &Z_Construct_UFunction_AWC_Generation_Grid_shouldGenerate, "shouldGenerate" }, // 90818885
		{ &Z_Construct_UFunction_AWC_Generation_Grid_UpdateSurrounding, "UpdateSurrounding" }, // 2437594620
		{ &Z_Construct_UFunction_AWC_Generation_Grid_weightedRandomTileIndex, "weightedRandomTileIndex" }, // 13306438
		{ &Z_Construct_UFunction_AWC_Generation_Grid_WorldCollapse, "WorldCollapse" }, // 3554250551
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WC_Generation_Grid.h" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MyStaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MyStaticMesh = { "MyStaticMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, MyStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MyStaticMesh_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MyStaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_my_BP_Class_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_my_BP_Class = { "my_BP_Class", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, my_BP_Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_my_BP_Class_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_my_BP_Class_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_ErrorMarker_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_ErrorMarker = { "ErrorMarker", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, ErrorMarker), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_ErrorMarker_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_ErrorMarker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MinOpenings_MetaData[] = {
		{ "Comment", "//minimum number of openings that need to be available while the minimum number of tiles has not been placed.\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "minimum number of openings that need to be available while the minimum number of tiles has not been placed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MinOpenings = { "MinOpenings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, MinOpenings), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MinOpenings_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MinOpenings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_width_MetaData[] = {
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_width_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_width_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_depth_MetaData[] = {
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_depth = { "depth", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, depth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_depth_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_depth_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_grid_Inner = { "grid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(0, nullptr) }; // 2840944341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_grid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_grid_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_grid_MetaData) }; // 2840944341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MinTilesToPlace_MetaData[] = {
		{ "Comment", "//1d array of the 2d grid accessed by x*width+y\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "1d array of the 2d grid accessed by x*width+y" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MinTilesToPlace = { "MinTilesToPlace", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, MinTilesToPlace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MinTilesToPlace_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MinTilesToPlace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_TilesThatArePlaced_MetaData[] = {
		{ "Comment", "//min number of tiles that need to be placed to succeed.\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "min number of tiles that need to be placed to succeed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_TilesThatArePlaced = { "TilesThatArePlaced", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, TilesThatArePlaced), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_TilesThatArePlaced_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_TilesThatArePlaced_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_availableTiles_MetaData[] = {
		{ "Comment", "//num tiles already placed\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "num tiles already placed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_availableTiles = { "availableTiles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, availableTiles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_availableTiles_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_availableTiles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_tileHorizontalSize_MetaData[] = {
		{ "Comment", "//Number of locations where paths are open for generation\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Number of locations where paths are open for generation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_tileHorizontalSize = { "tileHorizontalSize", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, tileHorizontalSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_tileHorizontalSize_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_tileHorizontalSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_tileScale_MetaData[] = {
		{ "Comment", "//tile size in engine units\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "tile size in engine units" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_tileScale = { "tileScale", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, tileScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_tileScale_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_tileScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatMap_MetaData[] = {
		{ "Comment", "//scale the size of the tiles (quick adjustment for testing)\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "scale the size of the tiles (quick adjustment for testing)" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatMap = { "heatMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, heatMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatMap_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatMap_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapGrid_Inner = { "heatmapGrid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapGrid_MetaData[] = {
		{ "Comment", "//Type may change\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Type may change" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapGrid = { "heatmapGrid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, heatmapGrid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapGrid_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapGrid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapSupplied_MetaData[] = {
		{ "Comment", "//1d array of the 2d grid accessed by x*width+y\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "1d array of the 2d grid accessed by x*width+y" },
	};
#endif
	void Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapSupplied_SetBit(void* Obj)
	{
		((AWC_Generation_Grid*)Obj)->heatmapSupplied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapSupplied = { "heatmapSupplied", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWC_Generation_Grid), &Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapSupplied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapSupplied_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapSupplied_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_entropyList_Inner = { "entropyList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEntropyLocation, METADATA_PARAMS(0, nullptr) }; // 2873011404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_entropyList_MetaData[] = {
		{ "Comment", "//Used to determine if recalculation of weight is necessary\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Used to determine if recalculation of weight is necessary" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_entropyList = { "entropyList", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, entropyList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_entropyList_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_entropyList_MetaData) }; // 2873011404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_model_MetaData[] = {
		{ "Comment", "//The minqueue of grid tile locations by their entropy that is used to find what tile location to place next.\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "The minqueue of grid tile locations by their entropy that is used to find what tile location to place next." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, model), Z_Construct_UClass_UWC_Model_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_model_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_model_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_mappedModel_MetaData[] = {
		{ "Comment", "//WC model to use for the generation\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "WC model to use for the generation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_mappedModel = { "mappedModel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, mappedModel), Z_Construct_UScriptStruct_FWCMap, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_mappedModel_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_mappedModel_MetaData) }; // 1996471142
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_PlacedTiles_Inner = { "PlacedTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_PlacedTiles_MetaData[] = {
		{ "Comment", "//Hashmap version of the model to be used\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Hashmap version of the model to be used" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_PlacedTiles = { "PlacedTiles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, PlacedTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_PlacedTiles_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_PlacedTiles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_allowedTries_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//Array of actors in the world that have been spawned by this grid.\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "Array of actors in the world that have been spawned by this grid." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_allowedTries = { "allowedTries", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, allowedTries), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_allowedTries_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_allowedTries_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_lastrunTime_MetaData[] = {
		{ "Category", "WC" },
		{ "Comment", "//statistics for runtime\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "statistics for runtime" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_lastrunTime = { "lastrunTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, lastrunTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_lastrunTime_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_lastrunTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_lastPlaceTime_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_lastPlaceTime = { "lastPlaceTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, lastPlaceTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_lastPlaceTime_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_lastPlaceTime_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatName_Inner = { "placementStatName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatName_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatName = { "placementStatName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, placementStatName), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatName_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatCount_Inner = { "placementStatCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatCount_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatCount = { "placementStatCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, placementStatCount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatCount_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableBorders_MetaData[] = {
		{ "Comment", "//dev variable\n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "dev variable" },
	};
#endif
	void Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableBorders_SetBit(void* Obj)
	{
		((AWC_Generation_Grid*)Obj)->enableBorders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableBorders = { "enableBorders", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWC_Generation_Grid), &Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableBorders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableBorders_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableBorders_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableRecalc_MetaData[] = {
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
	};
#endif
	void Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableRecalc_SetBit(void* Obj)
	{
		((AWC_Generation_Grid*)Obj)->enableRecalc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableRecalc = { "enableRecalc", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWC_Generation_Grid), &Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableRecalc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableRecalc_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableRecalc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_error_MetaData[] = {
		{ "Comment", "//This is a cheat may need to change that \n" },
		{ "ModuleRelativePath", "Public/WC_Generation_Grid.h" },
		{ "ToolTip", "This is a cheat may need to change that" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWC_Generation_Grid, error), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_error_MetaData), Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_error_MetaData) }; // 2840944341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWC_Generation_Grid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MyStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_my_BP_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_ErrorMarker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MinOpenings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_MinTilesToPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_TilesThatArePlaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_availableTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_tileHorizontalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_tileScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapGrid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_heatmapSupplied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_entropyList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_entropyList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_mappedModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_PlacedTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_PlacedTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_allowedTries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_lastrunTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_lastPlaceTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatCount_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_placementStatCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableBorders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_enableRecalc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWC_Generation_Grid_Statics::NewProp_error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWC_Generation_Grid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWC_Generation_Grid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWC_Generation_Grid_Statics::ClassParams = {
		&AWC_Generation_Grid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWC_Generation_Grid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::Class_MetaDataParams), Z_Construct_UClass_AWC_Generation_Grid_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWC_Generation_Grid_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWC_Generation_Grid()
	{
		if (!Z_Registration_Info_UClass_AWC_Generation_Grid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWC_Generation_Grid.OuterSingleton, Z_Construct_UClass_AWC_Generation_Grid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWC_Generation_Grid.OuterSingleton;
	}
	template<> WORLDCOLLAPSE_API UClass* StaticClass<AWC_Generation_Grid>()
	{
		return AWC_Generation_Grid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWC_Generation_Grid);
	AWC_Generation_Grid::~AWC_Generation_Grid() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_Statics::EnumInfo[] = {
		{ isAvailable_StaticEnum, TEXT("isAvailable"), &Z_Registration_Info_UEnum_isAvailable, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2063853292U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_Statics::ScriptStructInfo[] = {
		{ FEntropyLocation::StaticStruct, Z_Construct_UScriptStruct_FEntropyLocation_Statics::NewStructOps, TEXT("EntropyLocation"), &Z_Registration_Info_UScriptStruct_EntropyLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntropyLocation), 2873011404U) },
		{ FGridTile::StaticStruct, Z_Construct_UScriptStruct_FGridTile_Statics::NewStructOps, TEXT("GridTile"), &Z_Registration_Info_UScriptStruct_GridTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridTile), 2840944341U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWC_Generation_Grid, AWC_Generation_Grid::StaticClass, TEXT("AWC_Generation_Grid"), &Z_Registration_Info_UClass_AWC_Generation_Grid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWC_Generation_Grid), 1019776407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_167514633(TEXT("/Script/WorldCollapse"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
