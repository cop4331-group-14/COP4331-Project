// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCARYMAZE_ScaryMazeGameMode_generated_h
#error "ScaryMazeGameMode.generated.h already included, missing '#pragma once' in ScaryMazeGameMode.h"
#endif
#define SCARYMAZE_ScaryMazeGameMode_generated_h

#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnScaryMaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnScaryMaze(); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnScaryMaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnScaryMaze(); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScaryMazeGameMode(); \
	friend struct Z_Construct_UClass_AScaryMazeGameMode_Statics; \
public: \
	DECLARE_CLASS(AScaryMazeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScaryMaze"), SCARYMAZE_API) \
	DECLARE_SERIALIZER(AScaryMazeGameMode)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAScaryMazeGameMode(); \
	friend struct Z_Construct_UClass_AScaryMazeGameMode_Statics; \
public: \
	DECLARE_CLASS(AScaryMazeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScaryMaze"), SCARYMAZE_API) \
	DECLARE_SERIALIZER(AScaryMazeGameMode)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_STANDARD_CONSTRUCTORS \
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


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SCARYMAZE_API AScaryMazeGameMode(AScaryMazeGameMode&&); \
	SCARYMAZE_API AScaryMazeGameMode(const AScaryMazeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCARYMAZE_API, AScaryMazeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScaryMazeGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScaryMazeGameMode)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentMaze() { return STRUCT_OFFSET(AScaryMazeGameMode, CurrentMaze); } \
	FORCEINLINE static uint32 __PPO__ScaryMaze() { return STRUCT_OFFSET(AScaryMazeGameMode, ScaryMaze); } \
	FORCEINLINE static uint32 __PPO__ScaryMazePath() { return STRUCT_OFFSET(AScaryMazeGameMode, ScaryMazePath); }


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_11_PROLOG
#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_RPC_WRAPPERS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_INCLASS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_INCLASS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScaryMaze_Source_ScaryMaze_ScaryMazeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
