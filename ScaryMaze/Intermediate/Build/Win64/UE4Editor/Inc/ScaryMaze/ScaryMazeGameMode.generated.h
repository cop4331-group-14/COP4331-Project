// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UScaryMazeGameInstance;
class AScaryMazeBaseCharacter;
#ifdef SCARYMAZE_ScaryMazeGameMode_generated_h
#error "ScaryMazeGameMode.generated.h already included, missing '#pragma once' in ScaryMazeGameMode.h"
#endif
#define SCARYMAZE_ScaryMazeGameMode_generated_h

#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveControllerToPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveControllerToPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnGoblin) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnGoblin(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnHeraklios) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnHeraklios(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEnemies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnEnemies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnHealthPack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnHealthPack(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnHealthPacks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnHealthPacks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnPlayer) \
	{ \
		P_GET_OBJECT(UScaryMazeGameInstance,Z_Param_Instance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AScaryMazeBaseCharacter**)Z_Param__Result=P_THIS->SpawnPlayer(Z_Param_Instance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnHelmet) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PathLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnHelmet(Z_Param_PathLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnGreaves) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PathLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnGreaves(Z_Param_PathLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnBreastplate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PathLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnBreastplate(Z_Param_PathLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnArmorItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnArmorItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnLantern) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnLantern(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnLighter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnLighter(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnMatch) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnMatch(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnLightItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnLightItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnScaryMaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnScaryMaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadGame(); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveControllerToPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveControllerToPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnGoblin) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnGoblin(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnHeraklios) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnHeraklios(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEnemies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnEnemies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnHealthPack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnHealthPack(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnHealthPacks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnHealthPacks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnPlayer) \
	{ \
		P_GET_OBJECT(UScaryMazeGameInstance,Z_Param_Instance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AScaryMazeBaseCharacter**)Z_Param__Result=P_THIS->SpawnPlayer(Z_Param_Instance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnHelmet) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PathLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnHelmet(Z_Param_PathLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnGreaves) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PathLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnGreaves(Z_Param_PathLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnBreastplate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PathLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnBreastplate(Z_Param_PathLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnArmorItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnArmorItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnLantern) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnLantern(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnLighter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnLighter(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnMatch) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentCell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnMatch(Z_Param_CurrentCell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnLightItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnLightItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnScaryMaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnScaryMaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadGame(); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScaryMazeGameMode(); \
	friend struct Z_Construct_UClass_AScaryMazeGameMode_Statics; \
public: \
	DECLARE_CLASS(AScaryMazeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScaryMaze"), SCARYMAZE_API) \
	DECLARE_SERIALIZER(AScaryMazeGameMode)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAScaryMazeGameMode(); \
	friend struct Z_Construct_UClass_AScaryMazeGameMode_Statics; \
public: \
	DECLARE_CLASS(AScaryMazeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScaryMaze"), SCARYMAZE_API) \
	DECLARE_SERIALIZER(AScaryMazeGameMode)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCARYMAZE_API AScaryMazeGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScaryMazeGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCARYMAZE_API, AScaryMazeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScaryMazeGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SCARYMAZE_API AScaryMazeGameMode(AScaryMazeGameMode&&); \
	SCARYMAZE_API AScaryMazeGameMode(const AScaryMazeGameMode&); \
public:


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SCARYMAZE_API AScaryMazeGameMode(AScaryMazeGameMode&&); \
	SCARYMAZE_API AScaryMazeGameMode(const AScaryMazeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCARYMAZE_API, AScaryMazeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScaryMazeGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScaryMazeGameMode)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentMaze() { return STRUCT_OFFSET(AScaryMazeGameMode, CurrentMaze); } \
	FORCEINLINE static uint32 __PPO__ScaryMaze() { return STRUCT_OFFSET(AScaryMazeGameMode, ScaryMaze); } \
	FORCEINLINE static uint32 __PPO__Match() { return STRUCT_OFFSET(AScaryMazeGameMode, Match); } \
	FORCEINLINE static uint32 __PPO__Lighter() { return STRUCT_OFFSET(AScaryMazeGameMode, Lighter); } \
	FORCEINLINE static uint32 __PPO__Lantern() { return STRUCT_OFFSET(AScaryMazeGameMode, Lantern); } \
	FORCEINLINE static uint32 __PPO__Breastplate() { return STRUCT_OFFSET(AScaryMazeGameMode, Breastplate); } \
	FORCEINLINE static uint32 __PPO__Greaves() { return STRUCT_OFFSET(AScaryMazeGameMode, Greaves); } \
	FORCEINLINE static uint32 __PPO__Helmet() { return STRUCT_OFFSET(AScaryMazeGameMode, Helmet); } \
	FORCEINLINE static uint32 __PPO__PlayerToSpawn() { return STRUCT_OFFSET(AScaryMazeGameMode, PlayerToSpawn); } \
	FORCEINLINE static uint32 __PPO__Player() { return STRUCT_OFFSET(AScaryMazeGameMode, Player); } \
	FORCEINLINE static uint32 __PPO__Controller() { return STRUCT_OFFSET(AScaryMazeGameMode, Controller); } \
	FORCEINLINE static uint32 __PPO__HealthPackToSpawn() { return STRUCT_OFFSET(AScaryMazeGameMode, HealthPackToSpawn); } \
	FORCEINLINE static uint32 __PPO__HerakliosToSpawn() { return STRUCT_OFFSET(AScaryMazeGameMode, HerakliosToSpawn); } \
	FORCEINLINE static uint32 __PPO__GoblinToSpawn() { return STRUCT_OFFSET(AScaryMazeGameMode, GoblinToSpawn); }


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_24_PROLOG
#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_RPC_WRAPPERS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_INCLASS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_INCLASS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
