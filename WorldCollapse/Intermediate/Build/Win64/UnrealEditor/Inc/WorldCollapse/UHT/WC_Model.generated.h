// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WC_Model.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSoftObjectPath;
struct FTile;
struct FWCMap;
#ifdef WORLDCOLLAPSE_WC_Model_generated_h
#error "WC_Model.generated.h already included, missing '#pragma once' in WC_Model.h"
#endif
#define WORLDCOLLAPSE_WC_Model_generated_h

#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRule_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<struct FRule>();

#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuleSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<struct FRuleSet>();

#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_295_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<struct FTile>();

#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_340_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileBucket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<struct FTileBucket>();

#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_425_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWCMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<struct FWCMap>();

#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_SPARSE_DATA
#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execclear); \
	DECLARE_FUNCTION(execGetTileByName); \
	DECLARE_FUNCTION(execGetTileNameList); \
	DECLARE_FUNCTION(exectotalWeight); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execCreateMap); \
	DECLARE_FUNCTION(execGetTileFromGeometry); \
	DECLARE_FUNCTION(execIsInModel); \
	DECLARE_FUNCTION(execRemoveTile); \
	DECLARE_FUNCTION(execEditTile); \
	DECLARE_FUNCTION(execAddTile);


#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_ACCESSORS
#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWC_Model(); \
	friend struct Z_Construct_UClass_UWC_Model_Statics; \
public: \
	DECLARE_CLASS(UWC_Model, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldCollapse"), NO_API) \
	DECLARE_SERIALIZER(UWC_Model)


#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWC_Model(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWC_Model(UWC_Model&&); \
	NO_API UWC_Model(const UWC_Model&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWC_Model); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWC_Model); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWC_Model) \
	NO_API virtual ~UWC_Model();


#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_617_PROLOG
#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_SPARSE_DATA \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_ACCESSORS \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h_620_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDCOLLAPSE_API UClass* StaticClass<class UWC_Model>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Model_h


#define FOREACH_ENUM_WALLOPTIONS(op) \
	op(WallOptions::None) \
	op(WallOptions::SoftWall) \
	op(WallOptions::HardWall) 

enum class WallOptions : uint8;
template<> struct TIsUEnumClass<WallOptions> { enum { Value = true }; };
template<> WORLDCOLLAPSE_API UEnum* StaticEnum<WallOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
