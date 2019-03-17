// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/Maze.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AMaze_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AMaze();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_CreateMaze();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_GenerateGround();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_GetGoalIndex();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_GetMazePath();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_GetMazeWalls();
	SCARYMAZE_API UClass* Z_Construct_UClass_AWall_NoRegister();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_GetNextIndex();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_GetStartIndex();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_InitializeMaze();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_IsValidIndex();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_MazeConstructorLoop();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_RemoveWalls();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_SelectGoal();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_SelectStart();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_SpawnGoal();
	SCARYMAZE_API UClass* Z_Construct_UClass_AGoal_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_SpawnGround();
	SCARYMAZE_API UClass* Z_Construct_UClass_AGround_NoRegister();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AMaze_SpawnWall();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AMaze::StaticRegisterNativesAMaze()
	{
		UClass* Class = AMaze::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMaze", &AMaze::execCreateMaze },
			{ "GenerateGround", &AMaze::execGenerateGround },
			{ "GetGoalIndex", &AMaze::execGetGoalIndex },
			{ "GetMazePath", &AMaze::execGetMazePath },
			{ "GetMazeWalls", &AMaze::execGetMazeWalls },
			{ "GetNextIndex", &AMaze::execGetNextIndex },
			{ "GetStartIndex", &AMaze::execGetStartIndex },
			{ "InitializeMaze", &AMaze::execInitializeMaze },
			{ "IsOnOrOutOfBounds", &AMaze::execIsOnOrOutOfBounds },
			{ "IsValidIndex", &AMaze::execIsValidIndex },
			{ "MazeConstructorLoop", &AMaze::execMazeConstructorLoop },
			{ "RemoveWalls", &AMaze::execRemoveWalls },
			{ "SelectGoal", &AMaze::execSelectGoal },
			{ "SelectStart", &AMaze::execSelectStart },
			{ "SpawnGoal", &AMaze::execSpawnGoal },
			{ "SpawnGround", &AMaze::execSpawnGround },
			{ "SpawnWall", &AMaze::execSpawnWall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMaze_CreateMaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_CreateMaze_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Makes the maze, includeing both the MazeWalls and MazePath arrays." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_CreateMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "CreateMaze", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_CreateMaze_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_CreateMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_CreateMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_CreateMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_GenerateGround_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_GenerateGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Makes the ground." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GenerateGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "GenerateGround", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GenerateGround_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GenerateGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_GenerateGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_GenerateGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_GetGoalIndex_Statics
	{
		struct Maze_eventGetGoalIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_GetGoalIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_eventGetGoalIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_GetGoalIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetGoalIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_GetGoalIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Returns the index of the Goal in the MazeWalls array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GetGoalIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "GetGoalIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Maze_eventGetGoalIndex_Parms), Z_Construct_UFunction_AMaze_GetGoalIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetGoalIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GetGoalIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetGoalIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_GetGoalIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_GetGoalIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_GetMazePath_Statics
	{
		struct Maze_eventGetMazePath_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMaze_GetMazePath_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_eventGetMazePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_GetMazePath_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_GetMazePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetMazePath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetMazePath_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_GetMazePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Returns the MazePath array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GetMazePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "GetMazePath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Maze_eventGetMazePath_Parms), Z_Construct_UFunction_AMaze_GetMazePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetMazePath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GetMazePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetMazePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_GetMazePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_GetMazePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_GetMazeWalls_Statics
	{
		struct Maze_eventGetMazeWalls_Parms
		{
			TArray<AWall*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_eventGetMazeWalls_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AWall_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Returns the MazeWalls array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "GetMazeWalls", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Maze_eventGetMazeWalls_Parms), Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_GetMazeWalls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_GetMazeWalls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_GetNextIndex_Statics
	{
		struct Maze_eventGetNextIndex_Parms
		{
			int32 CurrentIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_GetNextIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_eventGetNextIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_GetNextIndex_Statics::NewProp_CurrentIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_eventGetNextIndex_Parms, CurrentIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_GetNextIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetNextIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetNextIndex_Statics::NewProp_CurrentIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_GetNextIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Get the next valid index to move to while constructing the maze paths." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GetNextIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "GetNextIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(Maze_eventGetNextIndex_Parms), Z_Construct_UFunction_AMaze_GetNextIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetNextIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GetNextIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetNextIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_GetNextIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_GetNextIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_GetStartIndex_Statics
	{
		struct Maze_eventGetStartIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_GetStartIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_eventGetStartIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_GetStartIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetStartIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_GetStartIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Returns the index of the starting position in the MazeWalls array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GetStartIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "GetStartIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Maze_eventGetStartIndex_Parms), Z_Construct_UFunction_AMaze_GetStartIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetStartIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GetStartIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetStartIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_GetStartIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_GetStartIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_InitializeMaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_InitializeMaze_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Fills the area with walls to be removed as the maze is constructed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_InitializeMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "InitializeMaze", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_InitializeMaze_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_InitializeMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_InitializeMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_InitializeMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics
	{
		struct Maze_eventIsOnOrOutOfBounds_Parms
		{
			int32 Cell;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Cell;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Maze_eventIsOnOrOutOfBounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Maze_eventIsOnOrOutOfBounds_Parms), &Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::NewProp_Cell = { UE4CodeGen_Private::EPropertyClass::Int, "Cell", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_eventIsOnOrOutOfBounds_Parms, Cell), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::NewProp_Cell,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Checks if a potential cell is on the boundary or outside the boundary of the maze." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "IsOnOrOutOfBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(Maze_eventIsOnOrOutOfBounds_Parms), Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_IsValidIndex_Statics
	{
		struct Maze_eventIsValidIndex_Parms
		{
			int32 PotentialIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PotentialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMaze_IsValidIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Maze_eventIsValidIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMaze_IsValidIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Maze_eventIsValidIndex_Parms), &Z_Construct_UFunction_AMaze_IsValidIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_IsValidIndex_Statics::NewProp_PotentialIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PotentialIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_eventIsValidIndex_Parms, PotentialIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_IsValidIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_IsValidIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_IsValidIndex_Statics::NewProp_PotentialIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_IsValidIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Check if a potential cell is in bounds and has not been visited. If so, it\nis valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_IsValidIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "IsValidIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(Maze_eventIsValidIndex_Parms), Z_Construct_UFunction_AMaze_IsValidIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_IsValidIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_IsValidIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_IsValidIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_IsValidIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_IsValidIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_MazeConstructorLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_MazeConstructorLoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "The loop that finds valid walls to remove in order to construct the maze and backtracks when none\ncan be found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_MazeConstructorLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "MazeConstructorLoop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_MazeConstructorLoop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_MazeConstructorLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_MazeConstructorLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_MazeConstructorLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_RemoveWalls_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_RemoveWalls_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Turns off collision and hides mesh of walls that are to be 'removed'." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_RemoveWalls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "RemoveWalls", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_RemoveWalls_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_RemoveWalls_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_RemoveWalls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_RemoveWalls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_SelectGoal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SelectGoal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Randomly select a position for the goal in the last column of the maze." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_SelectGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "SelectGoal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SelectGoal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_SelectGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_SelectGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_SelectGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_SelectStart_Statics
	{
		struct Maze_eventSelectStart_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_SelectStart_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_eventSelectStart_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_SelectStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SelectStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SelectStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Randomly choose a start position from the first column inside the maze." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_SelectStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "SelectStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(Maze_eventSelectStart_Parms), Z_Construct_UFunction_AMaze_SelectStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_SelectStart_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SelectStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_SelectStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_SelectStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_SelectStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_SpawnGoal_Statics
	{
		struct Maze_eventSpawnGoal_Parms
		{
			FVector Location;
			AGoal* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaze_SpawnGoal_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_eventSpawnGoal_Parms, ReturnValue), Z_Construct_UClass_AGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_SpawnGoal_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_eventSpawnGoal_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_SpawnGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnGoal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnGoal_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SpawnGoal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Spawns Goal at location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_SpawnGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "SpawnGoal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00840401, sizeof(Maze_eventSpawnGoal_Parms), Z_Construct_UFunction_AMaze_SpawnGoal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_SpawnGoal_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SpawnGoal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_SpawnGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_SpawnGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_SpawnGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_SpawnGround_Statics
	{
		struct Maze_eventSpawnGround_Parms
		{
			FVector Location;
			AGround* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaze_SpawnGround_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_eventSpawnGround_Parms, ReturnValue), Z_Construct_UClass_AGround_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_SpawnGround_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_eventSpawnGround_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_SpawnGround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnGround_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnGround_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SpawnGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Spawns Floor at location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_SpawnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "SpawnGround", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00840401, sizeof(Maze_eventSpawnGround_Parms), Z_Construct_UFunction_AMaze_SpawnGround_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_SpawnGround_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SpawnGround_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_SpawnGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_SpawnGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_SpawnGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_SpawnWall_Statics
	{
		struct Maze_eventSpawnWall_Parms
		{
			FVector Location;
			AWall* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaze_SpawnWall_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_eventSpawnWall_Parms, ReturnValue), Z_Construct_UClass_AWall_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_SpawnWall_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_eventSpawnWall_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_SpawnWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnWall_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnWall_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SpawnWall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Spawns Wall at location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_SpawnWall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, "SpawnWall", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00840401, sizeof(Maze_eventSpawnWall_Parms), Z_Construct_UFunction_AMaze_SpawnWall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_SpawnWall_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SpawnWall_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_SpawnWall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_SpawnWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_SpawnWall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMaze_NoRegister()
	{
		return AMaze::StaticClass();
	}
	struct Z_Construct_UClass_AMaze_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MazePath;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MazePath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeWalls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MazeWalls;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeWalls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Goal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ground_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Wall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMaze_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaze_CreateMaze, "CreateMaze" }, // 876515594
		{ &Z_Construct_UFunction_AMaze_GenerateGround, "GenerateGround" }, // 2412513443
		{ &Z_Construct_UFunction_AMaze_GetGoalIndex, "GetGoalIndex" }, // 3861851861
		{ &Z_Construct_UFunction_AMaze_GetMazePath, "GetMazePath" }, // 4047459456
		{ &Z_Construct_UFunction_AMaze_GetMazeWalls, "GetMazeWalls" }, // 74004837
		{ &Z_Construct_UFunction_AMaze_GetNextIndex, "GetNextIndex" }, // 128123661
		{ &Z_Construct_UFunction_AMaze_GetStartIndex, "GetStartIndex" }, // 3365236734
		{ &Z_Construct_UFunction_AMaze_InitializeMaze, "InitializeMaze" }, // 3198514642
		{ &Z_Construct_UFunction_AMaze_IsOnOrOutOfBounds, "IsOnOrOutOfBounds" }, // 1243131916
		{ &Z_Construct_UFunction_AMaze_IsValidIndex, "IsValidIndex" }, // 3408922121
		{ &Z_Construct_UFunction_AMaze_MazeConstructorLoop, "MazeConstructorLoop" }, // 2924891103
		{ &Z_Construct_UFunction_AMaze_RemoveWalls, "RemoveWalls" }, // 1085287994
		{ &Z_Construct_UFunction_AMaze_SelectGoal, "SelectGoal" }, // 2922146363
		{ &Z_Construct_UFunction_AMaze_SelectStart, "SelectStart" }, // 3113425995
		{ &Z_Construct_UFunction_AMaze_SpawnGoal, "SpawnGoal" }, // 3911565658
		{ &Z_Construct_UFunction_AMaze_SpawnGround, "SpawnGround" }, // 2836269730
		{ &Z_Construct_UFunction_AMaze_SpawnWall, "SpawnWall" }, // 4203908053
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Maze.h" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_MazePath_MetaData[] = {
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "The array that contains the indices of areas that have been visited and are thus the 'path' of the maze.\nThey are in the order that the maze was constructed, beginning from MazeStart, but does not finish at\nMazeGoal." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_MazePath = { UE4CodeGen_Private::EPropertyClass::Array, "MazePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AMaze, MazePath), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_MazePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_MazePath_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_MazePath_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "MazePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_MazeWalls_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "The array that contains wall objects. The \"Maze\"." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_MazeWalls = { UE4CodeGen_Private::EPropertyClass::Array, "MazeWalls", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AMaze, MazeWalls), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_MazeWalls_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_MazeWalls_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_MazeWalls_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MazeWalls", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AWall_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "Goal" },
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Allows mesh to be chosen in Unreal Editor to apply to Goal." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Goal = { UE4CodeGen_Private::EPropertyClass::Class, "Goal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AMaze, Goal), Z_Construct_UClass_AGoal_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Goal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Ground_MetaData[] = {
		{ "Category", "Ground" },
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Allows mesh to be chosen in Unreal Editor to apply to Ground." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Ground = { UE4CodeGen_Private::EPropertyClass::Class, "Ground", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AMaze, Ground), Z_Construct_UClass_AGround_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Ground_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Ground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Wall_MetaData[] = {
		{ "Category", "Wall" },
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "Allows mesh to be chosen in Unreal Editor to apply to Wall." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Wall = { UE4CodeGen_Private::EPropertyClass::Class, "Wall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AMaze, Wall), Z_Construct_UClass_AWall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Wall_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Wall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_MazePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_MazePath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_MazeWalls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_MazeWalls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Ground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Wall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaze_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaze>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaze_Statics::ClassParams = {
		&AMaze::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMaze_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaze()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaze_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaze, 3622469325);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaze(Z_Construct_UClass_AMaze, &AMaze::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AMaze"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
