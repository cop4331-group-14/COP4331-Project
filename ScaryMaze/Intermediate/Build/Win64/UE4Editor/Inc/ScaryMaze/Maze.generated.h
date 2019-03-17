// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AGoal;
class AGround;
class AWall;
#ifdef SCARYMAZE_Maze_generated_h
#error "Maze.generated.h already included, missing '#pragma once' in Maze.h"
#endif
#define SCARYMAZE_Maze_generated_h

#define ScaryMaze_Source_ScaryMaze_Maze_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnGoal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGoal**)Z_Param__Result=P_THIS->SpawnGoal(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnGround) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGround**)Z_Param__Result=P_THIS->SpawnGround(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnWall) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWall**)Z_Param__Result=P_THIS->SpawnWall(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectGoal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectGoal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveWalls) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveWalls(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PotentialIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidIndex(Z_Param_PotentialIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNextIndex(Z_Param_CurrentIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->SelectStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOnOrOutOfBounds) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Cell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOnOrOutOfBounds(Z_Param_Cell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMazeConstructorLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MazeConstructorLoop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeMaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeMaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateGround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateGround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetMazePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazeWalls) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AWall*>*)Z_Param__Result=P_THIS->GetMazeWalls(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoalIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGoalIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStartIndex(); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_Maze_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnGoal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGoal**)Z_Param__Result=P_THIS->SpawnGoal(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnGround) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGround**)Z_Param__Result=P_THIS->SpawnGround(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnWall) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWall**)Z_Param__Result=P_THIS->SpawnWall(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectGoal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectGoal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveWalls) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveWalls(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PotentialIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidIndex(Z_Param_PotentialIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNextIndex(Z_Param_CurrentIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->SelectStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOnOrOutOfBounds) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Cell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOnOrOutOfBounds(Z_Param_Cell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMazeConstructorLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MazeConstructorLoop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeMaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeMaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateGround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateGround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetMazePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazeWalls) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AWall*>*)Z_Param__Result=P_THIS->GetMazeWalls(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoalIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGoalIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStartIndex(); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_Maze_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define ScaryMaze_Source_ScaryMaze_Maze_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define ScaryMaze_Source_ScaryMaze_Maze_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaze(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaze) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public:


#define ScaryMaze_Source_ScaryMaze_Maze_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMaze)


#define ScaryMaze_Source_ScaryMaze_Maze_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Wall() { return STRUCT_OFFSET(AMaze, Wall); } \
	FORCEINLINE static uint32 __PPO__Ground() { return STRUCT_OFFSET(AMaze, Ground); } \
	FORCEINLINE static uint32 __PPO__Goal() { return STRUCT_OFFSET(AMaze, Goal); } \
	FORCEINLINE static uint32 __PPO__MazeWalls() { return STRUCT_OFFSET(AMaze, MazeWalls); } \
	FORCEINLINE static uint32 __PPO__MazePath() { return STRUCT_OFFSET(AMaze, MazePath); }


#define ScaryMaze_Source_ScaryMaze_Maze_h_24_PROLOG
#define ScaryMaze_Source_ScaryMaze_Maze_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_Maze_h_27_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_Maze_h_27_RPC_WRAPPERS \
	ScaryMaze_Source_ScaryMaze_Maze_h_27_INCLASS \
	ScaryMaze_Source_ScaryMaze_Maze_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScaryMaze_Source_ScaryMaze_Maze_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_Maze_h_27_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_Maze_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_Maze_h_27_INCLASS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_Maze_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScaryMaze_Source_ScaryMaze_Maze_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
