// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/ScaryMazeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaryMazeGameMode() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AScaryMazeGameMode_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AScaryMazeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatches();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer();
	SCARYMAZE_API UClass* Z_Construct_UClass_AScaryMazeBaseCharacter_NoRegister();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SCARYMAZE_API UClass* Z_Construct_UClass_ALighter_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AMatch_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AMaze_NoRegister();
// End Cross Module References
	void AScaryMazeGameMode::StaticRegisterNativesAScaryMazeGameMode()
	{
		UClass* Class = AScaryMazeGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveControllerToPlayer", &AScaryMazeGameMode::execMoveControllerToPlayer },
			{ "SpawnMatches", &AScaryMazeGameMode::execSpawnMatches },
			{ "SpawnPlayer", &AScaryMazeGameMode::execSpawnPlayer },
			{ "SpawnScaryMaze", &AScaryMazeGameMode::execSpawnScaryMaze },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "MoveControllerToPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatches_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatches_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnMatches", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatches_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics
	{
		struct ScaryMazeGameMode_eventSpawnPlayer_Parms
		{
			AScaryMazeBaseCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ScaryMazeGameMode_eventSpawnPlayer_Parms, ReturnValue), Z_Construct_UClass_AScaryMazeBaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(ScaryMazeGameMode_eventSpawnPlayer_Parms), Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnScaryMaze", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AScaryMazeGameMode_NoRegister()
	{
		return AScaryMazeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AScaryMazeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lighter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Lighter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Match;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaryMaze_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScaryMaze;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMaze_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentMaze;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScaryMazeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AScaryMazeGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer, "MoveControllerToPlayer" }, // 3085187582
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatches, "SpawnMatches" }, // 2949240650
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer, "SpawnPlayer" }, // 1320504766
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze, "SpawnScaryMaze" }, // 4064320148
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ScaryMazeGameMode.h" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Controller_MetaData[] = {
		{ "Category", "ScaryMazeGameMode" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Controller_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "ScaryMazeGameMode" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, Player), Z_Construct_UClass_AScaryMazeBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_PlayerToSpawn_MetaData[] = {
		{ "Category", "ScaryMazeGameMode" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_PlayerToSpawn = { UE4CodeGen_Private::EPropertyClass::Class, "PlayerToSpawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, PlayerToSpawn), Z_Construct_UClass_AScaryMazeBaseCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_PlayerToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_PlayerToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Lighter_MetaData[] = {
		{ "Category", "ScaryMazeGameMode" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Lighter = { UE4CodeGen_Private::EPropertyClass::Class, "Lighter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, Lighter), Z_Construct_UClass_ALighter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Lighter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Lighter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Match_MetaData[] = {
		{ "Category", "ScaryMazeGameMode" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Match = { UE4CodeGen_Private::EPropertyClass::Class, "Match", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, Match), Z_Construct_UClass_AMatch_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Match_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Match_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMaze_MetaData[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
		{ "ToolTip", "Stores reference to spawned maze." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMaze = { UE4CodeGen_Private::EPropertyClass::Object, "ScaryMaze", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, ScaryMaze), Z_Construct_UClass_AMaze_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMaze_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMaze_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_CurrentMaze_MetaData[] = {
		{ "Category", "ScaryMazeGameMode" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
		{ "ToolTip", "Used to spawn maze object." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_CurrentMaze = { UE4CodeGen_Private::EPropertyClass::Class, "CurrentMaze", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, CurrentMaze), Z_Construct_UClass_AMaze_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_CurrentMaze_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_CurrentMaze_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScaryMazeGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_PlayerToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Lighter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Match,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMaze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_CurrentMaze,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScaryMazeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScaryMazeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScaryMazeGameMode_Statics::ClassParams = {
		&AScaryMazeGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AScaryMazeGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScaryMazeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScaryMazeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScaryMazeGameMode, 4037410354);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScaryMazeGameMode(Z_Construct_UClass_AScaryMazeGameMode, &AScaryMazeGameMode::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AScaryMazeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScaryMazeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
