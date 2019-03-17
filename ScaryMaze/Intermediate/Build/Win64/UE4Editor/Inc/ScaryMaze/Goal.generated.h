// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCARYMAZE_Goal_generated_h
#error "Goal.generated.h already included, missing '#pragma once' in Goal.h"
#endif
#define SCARYMAZE_Goal_generated_h

#define ScaryMaze_Source_ScaryMaze_Goal_h_14_RPC_WRAPPERS
#define ScaryMaze_Source_ScaryMaze_Goal_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ScaryMaze_Source_ScaryMaze_Goal_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoal(); \
	friend struct Z_Construct_UClass_AGoal_Statics; \
public: \
	DECLARE_CLASS(AGoal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(AGoal)


#define ScaryMaze_Source_ScaryMaze_Goal_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGoal(); \
	friend struct Z_Construct_UClass_AGoal_Statics; \
public: \
	DECLARE_CLASS(AGoal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(AGoal)


#define ScaryMaze_Source_ScaryMaze_Goal_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoal(AGoal&&); \
	NO_API AGoal(const AGoal&); \
public:


#define ScaryMaze_Source_ScaryMaze_Goal_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoal(AGoal&&); \
	NO_API AGoal(const AGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoal)


#define ScaryMaze_Source_ScaryMaze_Goal_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MazeGoal() { return STRUCT_OFFSET(AGoal, MazeGoal); } \
	FORCEINLINE static uint32 __PPO__GoalLight() { return STRUCT_OFFSET(AGoal, GoalLight); }


#define ScaryMaze_Source_ScaryMaze_Goal_h_11_PROLOG
#define ScaryMaze_Source_ScaryMaze_Goal_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_Goal_h_14_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_Goal_h_14_RPC_WRAPPERS \
	ScaryMaze_Source_ScaryMaze_Goal_h_14_INCLASS \
	ScaryMaze_Source_ScaryMaze_Goal_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScaryMaze_Source_ScaryMaze_Goal_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_Goal_h_14_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_Goal_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_Goal_h_14_INCLASS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_Goal_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScaryMaze_Source_ScaryMaze_Goal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
