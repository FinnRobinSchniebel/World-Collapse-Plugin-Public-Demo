// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldCollapse/Public/WC_Model.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWC_Model() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_WorldCollapse();
	WORLDCOLLAPSE_API UClass* Z_Construct_UClass_UWC_Model();
	WORLDCOLLAPSE_API UClass* Z_Construct_UClass_UWC_Model_NoRegister();
	WORLDCOLLAPSE_API UEnum* Z_Construct_UEnum_WorldCollapse_WallOptions();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FRule();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FRuleSet();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FTile();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FTileBucket();
	WORLDCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWCMap();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_WallOptions;
	static UEnum* WallOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_WallOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_WallOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldCollapse_WallOptions, (UObject*)Z_Construct_UPackage__Script_WorldCollapse(), TEXT("WallOptions"));
		}
		return Z_Registration_Info_UEnum_WallOptions.OuterSingleton;
	}
	template<> WORLDCOLLAPSE_API UEnum* StaticEnum<WallOptions>()
	{
		return WallOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldCollapse_WallOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldCollapse_WallOptions_Statics::Enumerators[] = {
		{ "WallOptions::None", (int64)WallOptions::None },
		{ "WallOptions::SoftWall", (int64)WallOptions::SoftWall },
		{ "WallOptions::HardWall", (int64)WallOptions::HardWall },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldCollapse_WallOptions_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Use int32 to map enum to int\n" },
		{ "HardWall.Comment", "// wall but can be recalculated\n" },
		{ "HardWall.Name", "WallOptions::HardWall" },
		{ "HardWall.ToolTip", "wall but can be recalculated" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "None.Name", "WallOptions::None" },
		{ "SoftWall.Comment", "// no wall\n" },
		{ "SoftWall.Name", "WallOptions::SoftWall" },
		{ "SoftWall.ToolTip", "no wall" },
		{ "ToolTip", "Use int32 to map enum to int" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldCollapse_WallOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldCollapse,
		nullptr,
		"WallOptions",
		"WallOptions",
		Z_Construct_UEnum_WorldCollapse_WallOptions_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldCollapse_WallOptions_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WorldCollapse_WallOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WorldCollapse_WallOptions_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WorldCollapse_WallOptions()
	{
		if (!Z_Registration_Info_UEnum_WallOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_WallOptions.InnerSingleton, Z_Construct_UEnum_WorldCollapse_WallOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_WallOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rule;
class UScriptStruct* FRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRule, (UObject*)Z_Construct_UPackage__Script_WorldCollapse(), TEXT("Rule"));
	}
	return Z_Registration_Info_UScriptStruct_Rule.OuterSingleton;
}
template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<FRule>()
{
	return FRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_rules_strings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rules_strings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rules_strings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Rules is an array of strings marking each edge rule.\n * Required as a seperate function for efficent map access.\n */" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "Rules is an array of strings marking each edge rule.\nRequired as a seperate function for efficent map access." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRule>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRule_Statics::NewProp_rules_strings_Inner = { "rules_strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRule_Statics::NewProp_rules_strings_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRule_Statics::NewProp_rules_strings = { "rules_strings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRule, rules_strings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRule_Statics::NewProp_rules_strings_MetaData), Z_Construct_UScriptStruct_FRule_Statics::NewProp_rules_strings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRule_Statics::NewProp_rules_strings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRule_Statics::NewProp_rules_strings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldCollapse,
		nullptr,
		&NewStructOps,
		"Rule",
		Z_Construct_UScriptStruct_FRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRule_Statics::PropPointers),
		sizeof(FRule),
		alignof(FRule),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRule_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRule_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRule()
	{
		if (!Z_Registration_Info_UScriptStruct_Rule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rule.InnerSingleton, Z_Construct_UScriptStruct_FRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Rule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuleSet;
class UScriptStruct* FRuleSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuleSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuleSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuleSet, (UObject*)Z_Construct_UPackage__Script_WorldCollapse(), TEXT("RuleSet"));
	}
	return Z_Registration_Info_UScriptStruct_RuleSet.OuterSingleton;
}
template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<FRuleSet>()
{
	return FRuleSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuleSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_weight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_isWall_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_isWall_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isWall_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_isWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canRotate_MetaData[];
#endif
		static void NewProp_canRotate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canRotate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuleSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuleSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_rules_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_rules = { "rules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuleSet, rules), Z_Construct_UScriptStruct_FRule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_rules_MetaData), Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_rules_MetaData) }; // 3240476602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuleSet, weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_weight_MetaData), Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_weight_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_isWall_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_isWall_Inner = { "isWall", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_WorldCollapse_WallOptions, METADATA_PARAMS(0, nullptr) }; // 3243661524
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_isWall_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_isWall = { "isWall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuleSet, isWall), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_isWall_MetaData), Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_isWall_MetaData) }; // 3243661524
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_canRotate_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_canRotate_SetBit(void* Obj)
	{
		((FRuleSet*)Obj)->canRotate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_canRotate = { "canRotate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRuleSet), &Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_canRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_canRotate_MetaData), Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_canRotate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuleSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_rules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_isWall_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_isWall_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_isWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleSet_Statics::NewProp_canRotate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuleSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldCollapse,
		nullptr,
		&NewStructOps,
		"RuleSet",
		Z_Construct_UScriptStruct_FRuleSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleSet_Statics::PropPointers),
		sizeof(FRuleSet),
		alignof(FRuleSet),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuleSet_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleSet_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRuleSet()
	{
		if (!Z_Registration_Info_UScriptStruct_RuleSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuleSet.InnerSingleton, Z_Construct_UScriptStruct_FRuleSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuleSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Tile;
class UScriptStruct* FTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Tile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Tile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTile, (UObject*)Z_Construct_UPackage__Script_WorldCollapse(), TEXT("Tile"));
	}
	return Z_Registration_Info_UScriptStruct_Tile.OuterSingleton;
}
template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<FTile>()
{
	return FTile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_model_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_model;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rulesets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rulesets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rulesets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTile_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTile_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTile, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FTile_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTile_Statics::NewProp_model_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTile_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTile, model), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::NewProp_model_MetaData), Z_Construct_UScriptStruct_FTile_Statics::NewProp_model_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTile_Statics::NewProp_rulesets_Inner = { "rulesets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuleSet, METADATA_PARAMS(0, nullptr) }; // 1937962559
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTile_Statics::NewProp_rulesets_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTile_Statics::NewProp_rulesets = { "rulesets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTile, rulesets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::NewProp_rulesets_MetaData), Z_Construct_UScriptStruct_FTile_Statics::NewProp_rulesets_MetaData) }; // 1937962559
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTile_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTile_Statics::NewProp_model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTile_Statics::NewProp_rulesets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTile_Statics::NewProp_rulesets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldCollapse,
		nullptr,
		&NewStructOps,
		"Tile",
		Z_Construct_UScriptStruct_FTile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::PropPointers),
		sizeof(FTile),
		alignof(FTile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTile()
	{
		if (!Z_Registration_Info_UScriptStruct_Tile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Tile.InnerSingleton, Z_Construct_UScriptStruct_FTile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Tile.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TileBucket;
class UScriptStruct* FTileBucket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TileBucket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TileBucket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileBucket, (UObject*)Z_Construct_UPackage__Script_WorldCollapse(), TEXT("TileBucket"));
	}
	return Z_Registration_Info_UScriptStruct_TileBucket.OuterSingleton;
}
template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<FTileBucket>()
{
	return FTileBucket::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTileBucket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_tiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tiles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_rotations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rotations;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ruleset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ruleset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ruleset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileBucket_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileBucket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileBucket>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_tiles_Inner = { "tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTile, METADATA_PARAMS(0, nullptr) }; // 1552443848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_tiles_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_tiles = { "tiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileBucket, tiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_tiles_MetaData), Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_tiles_MetaData) }; // 1552443848
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_rotations_Inner = { "rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_rotations_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_rotations = { "rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileBucket, rotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_rotations_MetaData), Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_rotations_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_ruleset_Inner = { "ruleset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_ruleset_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_ruleset = { "ruleset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileBucket, ruleset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_ruleset_MetaData), Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_ruleset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileBucket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_tiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_rotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_rotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_ruleset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileBucket_Statics::NewProp_ruleset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileBucket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldCollapse,
		nullptr,
		&NewStructOps,
		"TileBucket",
		Z_Construct_UScriptStruct_FTileBucket_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileBucket_Statics::PropPointers),
		sizeof(FTileBucket),
		alignof(FTileBucket),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileBucket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTileBucket_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileBucket_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTileBucket()
	{
		if (!Z_Registration_Info_UScriptStruct_TileBucket.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TileBucket.InnerSingleton, Z_Construct_UScriptStruct_FTileBucket_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TileBucket.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WCMap;
class UScriptStruct* FWCMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WCMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WCMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWCMap, (UObject*)Z_Construct_UPackage__Script_WorldCollapse(), TEXT("WCMap"));
	}
	return Z_Registration_Info_UScriptStruct_WCMap.OuterSingleton;
}
template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<FWCMap>()
{
	return FWCMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWCMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_map_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_map;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWCMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWCMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWCMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWCMap_Statics::NewProp_map_ValueProp = { "map", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTileBucket, METADATA_PARAMS(0, nullptr) }; // 3276309063
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWCMap_Statics::NewProp_map_Key_KeyProp = { "map_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRule, METADATA_PARAMS(0, nullptr) }; // 3240476602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWCMap_Statics::NewProp_map_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWCMap_Statics::NewProp_map = { "map", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWCMap, map), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWCMap_Statics::NewProp_map_MetaData), Z_Construct_UScriptStruct_FWCMap_Statics::NewProp_map_MetaData) }; // 3240476602 3276309063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWCMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWCMap_Statics::NewProp_map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWCMap_Statics::NewProp_map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWCMap_Statics::NewProp_map,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWCMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldCollapse,
		nullptr,
		&NewStructOps,
		"WCMap",
		Z_Construct_UScriptStruct_FWCMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWCMap_Statics::PropPointers),
		sizeof(FWCMap),
		alignof(FWCMap),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWCMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWCMap_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWCMap_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWCMap()
	{
		if (!Z_Registration_Info_UScriptStruct_WCMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WCMap.InnerSingleton, Z_Construct_UScriptStruct_FWCMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WCMap.InnerSingleton;
	}
	DEFINE_FUNCTION(UWC_Model::execclear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Model::execGetTileByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTile*)Z_Param__Result=P_THIS->GetTileByName(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Model::execGetTileNameList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetTileNameList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Model::exectotalWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->totalWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Model::execNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Num();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Model::execCreateMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWCMap*)Z_Param__Result=P_THIS->CreateMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Model::execGetTileFromGeometry)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_TileGeometry);
		P_GET_STRUCT_REF(FTile,Z_Param_Out_returnTile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTileFromGeometry(Z_Param_TileGeometry,Z_Param_Out_returnTile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Model::execIsInModel)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_TileGeometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IsInModel(Z_Param_TileGeometry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Model::execRemoveTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IDtoRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveTile(Z_Param_IDtoRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Model::execEditTile)
	{
		P_GET_STRUCT(FTile,Z_Param_ReturnTileToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->EditTile(Z_Param_ReturnTileToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Model::execAddTile)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_Geometry);
		P_GET_TARRAY(FString,Z_Param_rulesets);
		P_GET_UBOOL(Z_Param_rotate);
		P_GET_TARRAY(int32,Z_Param_weights);
		P_GET_TARRAY(bool,Z_Param_Walls);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddTile(Z_Param_Geometry,Z_Param_rulesets,Z_Param_rotate,Z_Param_weights,Z_Param_Walls);
		P_NATIVE_END;
	}
	void UWC_Model::StaticRegisterNativesUWC_Model()
	{
		UClass* Class = UWC_Model::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTile", &UWC_Model::execAddTile },
			{ "clear", &UWC_Model::execclear },
			{ "CreateMap", &UWC_Model::execCreateMap },
			{ "EditTile", &UWC_Model::execEditTile },
			{ "GetTileByName", &UWC_Model::execGetTileByName },
			{ "GetTileFromGeometry", &UWC_Model::execGetTileFromGeometry },
			{ "GetTileNameList", &UWC_Model::execGetTileNameList },
			{ "IsInModel", &UWC_Model::execIsInModel },
			{ "Num", &UWC_Model::execNum },
			{ "RemoveTile", &UWC_Model::execRemoveTile },
			{ "totalWeight", &UWC_Model::exectotalWeight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWC_Model_AddTile_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct WC_Model_eventAddTile_Parms
		{
			FSoftObjectPath Geometry;
			TArray<FString> rulesets;
			bool rotate;
			TArray<int32> weights;
			TArray<bool> Walls;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FStrPropertyParams NewProp_rulesets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rulesets;
		static void NewProp_rotate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_rotate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_weights_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_weights;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Walls_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Walls;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventAddTile_Parms, Geometry), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_rulesets_Inner = { "rulesets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_rulesets = { "rulesets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventAddTile_Parms, rulesets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_rotate_SetBit(void* Obj)
	{
		((WC_Model_eventAddTile_Parms*)Obj)->rotate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_rotate = { "rotate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WC_Model_eventAddTile_Parms), &Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_rotate_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_weights_Inner = { "weights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_weights = { "weights", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventAddTile_Parms, weights), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_Walls_Inner = { "Walls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_Walls = { "Walls", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventAddTile_Parms, Walls), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventAddTile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWC_Model_AddTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_rulesets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_rulesets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_rotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_weights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_weights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_Walls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_Walls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_AddTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_AddTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**\n\x09\x09* Main interface for adding tiles from the UI and from other sources\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "Main interface for adding tiles from the UI and from other sources" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_AddTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "AddTile", nullptr, nullptr, Z_Construct_UFunction_UWC_Model_AddTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_AddTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWC_Model_AddTile_Statics::WC_Model_eventAddTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_AddTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_AddTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_AddTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWC_Model_AddTile_Statics::WC_Model_eventAddTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWC_Model_AddTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_AddTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Model_clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**Remove all tiles*/" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "Remove all tiles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "clear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_clear_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWC_Model_clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Model_CreateMap_Statics
	{
		struct WC_Model_eventCreateMap_Parms
		{
			FWCMap ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWC_Model_CreateMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventCreateMap_Parms, ReturnValue), Z_Construct_UScriptStruct_FWCMap, METADATA_PARAMS(0, nullptr) }; // 1996471142
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWC_Model_CreateMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_CreateMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_CreateMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**\n\x09\x09* Using the model array, generates a map that is used in the collapse step to imporve access speed.\n\x09\x09* This function will automaticly be run when initilizing the WC_Generation_Gird.\n\x09\x09* The key to the resulting map is a tiles FRule.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "Using the model array, generates a map that is used in the collapse step to imporve access speed.\nThis function will automaticly be run when initilizing the WC_Generation_Gird.\nThe key to the resulting map is a tiles FRule." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_CreateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "CreateMap", nullptr, nullptr, Z_Construct_UFunction_UWC_Model_CreateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_CreateMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWC_Model_CreateMap_Statics::WC_Model_eventCreateMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_CreateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_CreateMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_CreateMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWC_Model_CreateMap_Statics::WC_Model_eventCreateMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWC_Model_CreateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_CreateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Model_EditTile_Statics
	{
		struct WC_Model_eventEditTile_Parms
		{
			FTile ReturnTileToList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnTileToList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWC_Model_EditTile_Statics::NewProp_ReturnTileToList = { "ReturnTileToList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventEditTile_Parms, ReturnTileToList), Z_Construct_UScriptStruct_FTile, METADATA_PARAMS(0, nullptr) }; // 1552443848
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWC_Model_EditTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventEditTile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWC_Model_EditTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_EditTile_Statics::NewProp_ReturnTileToList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_EditTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_EditTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Will replace the tile with a matching id to the given tile.\n/// </summary>\n/// <param name=\"ReturnTileToList\"> tile to edit</param>\n/// <returns>0: done, -1: error</returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "<summary>\nWill replace the tile with a matching id to the given tile.\n</summary>\n<param name=\"ReturnTileToList\"> tile to edit</param>\n<returns>0: done, -1: error</returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_EditTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "EditTile", nullptr, nullptr, Z_Construct_UFunction_UWC_Model_EditTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_EditTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWC_Model_EditTile_Statics::WC_Model_eventEditTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_EditTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_EditTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_EditTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWC_Model_EditTile_Statics::WC_Model_eventEditTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWC_Model_EditTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_EditTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Model_GetTileByName_Statics
	{
		struct WC_Model_eventGetTileByName_Parms
		{
			FString name;
			FTile ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventGetTileByName_Parms, name), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventGetTileByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FTile, METADATA_PARAMS(0, nullptr) }; // 1552443848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "//Get the tile by the asset name. Used in ocmbination with GetTileNameList in UI\n" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "Get the tile by the asset name. Used in ocmbination with GetTileNameList in UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "GetTileByName", nullptr, nullptr, Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::WC_Model_eventGetTileByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::WC_Model_eventGetTileByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWC_Model_GetTileByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_GetTileByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct WC_Model_eventGetTileFromGeometry_Parms
		{
			FSoftObjectPath TileGeometry;
			FTile returnTile;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_returnTile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::NewProp_TileGeometry = { "TileGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventGetTileFromGeometry_Parms, TileGeometry), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::NewProp_returnTile = { "returnTile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventGetTileFromGeometry_Parms, returnTile), Z_Construct_UScriptStruct_FTile, METADATA_PARAMS(0, nullptr) }; // 1552443848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::NewProp_TileGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::NewProp_returnTile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**\n\x09\x09* This function looks for the selected tile for the start of WFC.\n\x09\x09* Returns the Ftile if found and an empty Ftile if not found.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "This function looks for the selected tile for the start of WFC.\nReturns the Ftile if found and an empty Ftile if not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "GetTileFromGeometry", nullptr, nullptr, Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::WC_Model_eventGetTileFromGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::WC_Model_eventGetTileFromGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWC_Model_GetTileFromGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_GetTileFromGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics
	{
		struct WC_Model_eventGetTileNameList_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventGetTileNameList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "//gets the names of all tiles in the model and returns them as a list.\n" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "gets the names of all tiles in the model and returns them as a list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "GetTileNameList", nullptr, nullptr, Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::WC_Model_eventGetTileNameList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::WC_Model_eventGetTileNameList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWC_Model_GetTileNameList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_GetTileNameList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Model_IsInModel_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct WC_Model_eventIsInModel_Parms
		{
			FSoftObjectPath TileGeometry;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileGeometry;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWC_Model_IsInModel_Statics::NewProp_TileGeometry = { "TileGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventIsInModel_Parms, TileGeometry), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWC_Model_IsInModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventIsInModel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWC_Model_IsInModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_IsInModel_Statics::NewProp_TileGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_IsInModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_IsInModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/**\n\x09\x09* This function tests if the selected tile for the start of WFC has been added into the data set.\n\x09\x09* If it is not it will return -1\n\x09\x09* If it does exist it will return the number of rule sets that the tile has available\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "This function tests if the selected tile for the start of WFC has been added into the data set.\nIf it is not it will return -1\nIf it does exist it will return the number of rule sets that the tile has available" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_IsInModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "IsInModel", nullptr, nullptr, Z_Construct_UFunction_UWC_Model_IsInModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_IsInModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWC_Model_IsInModel_Statics::WC_Model_eventIsInModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_IsInModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_IsInModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_IsInModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWC_Model_IsInModel_Statics::WC_Model_eventIsInModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWC_Model_IsInModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_IsInModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Model_Num_Statics
	{
		struct WC_Model_eventNum_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWC_Model_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWC_Model_Num_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_Num_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_Num_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// Number of tiles in the model\n/// </summary>\n/// <returns></returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "<summary>\nNumber of tiles in the model\n</summary>\n<returns></returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "Num", nullptr, nullptr, Z_Construct_UFunction_UWC_Model_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWC_Model_Num_Statics::WC_Model_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_Num_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_Num_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWC_Model_Num_Statics::WC_Model_eventNum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWC_Model_Num()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_Num_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Model_RemoveTile_Statics
	{
		struct WC_Model_eventRemoveTile_Parms
		{
			int32 IDtoRemove;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_IDtoRemove;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::NewProp_IDtoRemove = { "IDtoRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventRemoveTile_Parms, IDtoRemove), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventRemoveTile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::NewProp_IDtoRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "RemoveTile", nullptr, nullptr, Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::WC_Model_eventRemoveTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::WC_Model_eventRemoveTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWC_Model_RemoveTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_RemoveTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Model_totalWeight_Statics
	{
		struct WC_Model_eventtotalWeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWC_Model_totalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WC_Model_eventtotalWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWC_Model_totalWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWC_Model_totalWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Model_totalWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "WC" },
		{ "Comment", "/// <summary>\n/// total weight of all tiles in the model\n/// </summary>\n/// <returns></returns>\n" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "<summary>\ntotal weight of all tiles in the model\n</summary>\n<returns></returns>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Model_totalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Model, nullptr, "totalWeight", nullptr, nullptr, Z_Construct_UFunction_UWC_Model_totalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_totalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWC_Model_totalWeight_Statics::WC_Model_eventtotalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_totalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWC_Model_totalWeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Model_totalWeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWC_Model_totalWeight_Statics::WC_Model_eventtotalWeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWC_Model_totalWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Model_totalWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWC_Model);
	UClass* Z_Construct_UClass_UWC_Model_NoRegister()
	{
		return UWC_Model::StaticClass();
	}
	struct Z_Construct_UClass_UWC_Model_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_model_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_model_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_error_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWC_Model_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldCollapse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Model_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWC_Model_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWC_Model_AddTile, "AddTile" }, // 1064860331
		{ &Z_Construct_UFunction_UWC_Model_clear, "clear" }, // 1763196142
		{ &Z_Construct_UFunction_UWC_Model_CreateMap, "CreateMap" }, // 3411291279
		{ &Z_Construct_UFunction_UWC_Model_EditTile, "EditTile" }, // 3300573032
		{ &Z_Construct_UFunction_UWC_Model_GetTileByName, "GetTileByName" }, // 1839019332
		{ &Z_Construct_UFunction_UWC_Model_GetTileFromGeometry, "GetTileFromGeometry" }, // 760620680
		{ &Z_Construct_UFunction_UWC_Model_GetTileNameList, "GetTileNameList" }, // 4091842386
		{ &Z_Construct_UFunction_UWC_Model_IsInModel, "IsInModel" }, // 2011848477
		{ &Z_Construct_UFunction_UWC_Model_Num, "Num" }, // 3905987865
		{ &Z_Construct_UFunction_UWC_Model_RemoveTile, "RemoveTile" }, // 259832882
		{ &Z_Construct_UFunction_UWC_Model_totalWeight, "totalWeight" }, // 1747053057
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Model_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Model_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WC_Model.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWC_Model_Statics::NewProp_model_Inner = { "model", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTile, METADATA_PARAMS(0, nullptr) }; // 1552443848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Model_Statics::NewProp_model_MetaData[] = {
		{ "Category", "WC" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWC_Model_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWC_Model, model), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Model_Statics::NewProp_model_MetaData), Z_Construct_UClass_UWC_Model_Statics::NewProp_model_MetaData) }; // 1552443848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Model_Statics::NewProp_error_MetaData[] = {
		{ "Comment", "/*\n\x09\x09UFUNCTION(BluePrintCallable, Category = \"WC\")\n\x09\x09""FRule rotateRuleset(FRule rule, int r);\n\x09\x09*///cheat may need replacement\n" },
		{ "ModuleRelativePath", "Public/WC_Model.h" },
		{ "ToolTip", "UFUNCTION(BluePrintCallable, Category = \"WC\")\nFRule rotateRuleset(FRule rule, int r);\n//cheat may need replacement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWC_Model_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWC_Model, error), Z_Construct_UScriptStruct_FTile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Model_Statics::NewProp_error_MetaData), Z_Construct_UClass_UWC_Model_Statics::NewProp_error_MetaData) }; // 1552443848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWC_Model_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Model_Statics::NewProp_model_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Model_Statics::NewProp_model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Model_Statics::NewProp_error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWC_Model_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWC_Model>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWC_Model_Statics::ClassParams = {
		&UWC_Model::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWC_Model_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Model_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Model_Statics::Class_MetaDataParams), Z_Construct_UClass_UWC_Model_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Model_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWC_Model()
	{
		if (!Z_Registration_Info_UClass_UWC_Model.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWC_Model.OuterSingleton, Z_Construct_UClass_UWC_Model_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWC_Model.OuterSingleton;
	}
	template<> WORLDCOLLAPSE_API UClass* StaticClass<UWC_Model>()
	{
		return UWC_Model::StaticClass();
	}
	UWC_Model::UWC_Model(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWC_Model);
	UWC_Model::~UWC_Model() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_Statics::EnumInfo[] = {
		{ WallOptions_StaticEnum, TEXT("WallOptions"), &Z_Registration_Info_UEnum_WallOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3243661524U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_Statics::ScriptStructInfo[] = {
		{ FRule::StaticStruct, Z_Construct_UScriptStruct_FRule_Statics::NewStructOps, TEXT("Rule"), &Z_Registration_Info_UScriptStruct_Rule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRule), 3240476602U) },
		{ FRuleSet::StaticStruct, Z_Construct_UScriptStruct_FRuleSet_Statics::NewStructOps, TEXT("RuleSet"), &Z_Registration_Info_UScriptStruct_RuleSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuleSet), 1937962559U) },
		{ FTile::StaticStruct, Z_Construct_UScriptStruct_FTile_Statics::NewStructOps, TEXT("Tile"), &Z_Registration_Info_UScriptStruct_Tile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTile), 1552443848U) },
		{ FTileBucket::StaticStruct, Z_Construct_UScriptStruct_FTileBucket_Statics::NewStructOps, TEXT("TileBucket"), &Z_Registration_Info_UScriptStruct_TileBucket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileBucket), 3276309063U) },
		{ FWCMap::StaticStruct, Z_Construct_UScriptStruct_FWCMap_Statics::NewStructOps, TEXT("WCMap"), &Z_Registration_Info_UScriptStruct_WCMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWCMap), 1996471142U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWC_Model, UWC_Model::StaticClass, TEXT("UWC_Model"), &Z_Registration_Info_UClass_UWC_Model, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWC_Model), 5063380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_2707059900(TEXT("/Script/WorldCollapse"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
