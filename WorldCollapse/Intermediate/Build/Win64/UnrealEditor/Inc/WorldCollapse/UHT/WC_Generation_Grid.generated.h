// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WC_Generation_Grid.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UWC_Model;
struct FEntropyLocation;
struct FGridTile;
struct FRule;
struct FRuleSet;
struct FSoftObjectPath;
struct FTile;
struct FTileBucket;
#ifdef WORLDCOLLAPSE_WC_Generation_Grid_generated_h
#error "WC_Generation_Grid.generated.h already included, missing '#pragma once' in WC_Generation_Grid.h"
#endif
#define WORLDCOLLAPSE_WC_Generation_Grid_generated_h

#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEntropyLocation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<struct FEntropyLocation>();

#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridTile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WORLDCOLLAPSE_API UScriptStruct* StaticStruct<struct FGridTile>();

#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_SPARSE_DATA
#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAfterRunStatisticsReadout); \
	DECLARE_FUNCTION(execshouldGenerate); \
	DECLARE_FUNCTION(execresetGrid); \
	DECLARE_FUNCTION(execweightedRandomTileIndex); \
	DECLARE_FUNCTION(execremoveEntropyLocation); \
	DECLARE_FUNCTION(execinsertEntropyLocation); \
	DECLARE_FUNCTION(execshannonEntropyFromPossibleTiles); \
	DECLARE_FUNCTION(execshannonEntropy); \
	DECLARE_FUNCTION(execUpdateSurrounding); \
	DECLARE_FUNCTION(execPlaceTile); \
	DECLARE_FUNCTION(execWorldCollapse); \
	DECLARE_FUNCTION(execPlaceFirstTile); \
	DECLARE_FUNCTION(execIsTileInValidLocation); \
	DECLARE_FUNCTION(execGenerateGridGeometry); \
	DECLARE_FUNCTION(execInitHeatMap); \
	DECLARE_FUNCTION(execInitilize); \
	DECLARE_FUNCTION(execgetSurrounding); \
	DECLARE_FUNCTION(execGetTile1D); \
	DECLARE_FUNCTION(execGet1DFrom2DLocation); \
	DECLARE_FUNCTION(execGetTile);


#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_ACCESSORS
#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWC_Generation_Grid(); \
	friend struct Z_Construct_UClass_AWC_Generation_Grid_Statics; \
public: \
	DECLARE_CLASS(AWC_Generation_Grid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldCollapse"), NO_API) \
	DECLARE_SERIALIZER(AWC_Generation_Grid)


#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWC_Generation_Grid(AWC_Generation_Grid&&); \
	NO_API AWC_Generation_Grid(const AWC_Generation_Grid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWC_Generation_Grid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWC_Generation_Grid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWC_Generation_Grid) \
	NO_API virtual ~AWC_Generation_Grid();


#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_213_PROLOG
#define FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_SPARSE_DATA \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_ACCESSORS \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h_216_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDCOLLAPSE_API UClass* StaticClass<class AWC_Generation_Grid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_WorldCollapse_Source_WorldCollapse_Public_WC_Generation_Grid_h


#define FOREACH_ENUM_ISAVAILABLE(op) \
	op(isAvailable::invalid) \
	op(isAvailable::valid) \
	op(isAvailable::closed) \
	op(isAvailable::inaccessible) 

enum class isAvailable : uint8;
template<> struct TIsUEnumClass<isAvailable> { enum { Value = true }; };
template<> WORLDCOLLAPSE_API UEnum* StaticEnum<isAvailable>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
