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
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_LoadGame();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnArmorItem();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnLightItems();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer();
	SCARYMAZE_API UClass* Z_Construct_UClass_AScaryMazeBaseCharacter_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_UScaryMazeGameInstance_NoRegister();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SCARYMAZE_API UClass* Z_Construct_UClass_AHelmet_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AGreaves_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_ABreastplate_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_ALantern_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_ALighter_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AMatch_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AMaze_NoRegister();
// End Cross Module References
	void AScaryMazeGameMode::StaticRegisterNativesAScaryMazeGameMode()
	{
		UClass* Class = AScaryMazeGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGame", &AScaryMazeGameMode::execLoadGame },
			{ "MoveControllerToPlayer", &AScaryMazeGameMode::execMoveControllerToPlayer },
			{ "SpawnArmorItem", &AScaryMazeGameMode::execSpawnArmorItem },
			{ "SpawnBreastplate", &AScaryMazeGameMode::execSpawnBreastplate },
			{ "SpawnGreaves", &AScaryMazeGameMode::execSpawnGreaves },
			{ "SpawnHelmet", &AScaryMazeGameMode::execSpawnHelmet },
			{ "SpawnLantern", &AScaryMazeGameMode::execSpawnLantern },
			{ "SpawnLighter", &AScaryMazeGameMode::execSpawnLighter },
			{ "SpawnLightItems", &AScaryMazeGameMode::execSpawnLightItems },
			{ "SpawnMatch", &AScaryMazeGameMode::execSpawnMatch },
			{ "SpawnPlayer", &AScaryMazeGameMode::execSpawnPlayer },
			{ "SpawnScaryMaze", &AScaryMazeGameMode::execSpawnScaryMaze },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_LoadGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "LoadGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_LoadGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnArmorItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnArmorItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnArmorItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnArmorItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnArmorItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnArmorItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnArmorItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnArmorItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics
	{
		struct ScaryMazeGameMode_eventSpawnBreastplate_Parms
		{
			int32 PathLength;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PathLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics::NewProp_PathLength = { UE4CodeGen_Private::EPropertyClass::Int, "PathLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaryMazeGameMode_eventSpawnBreastplate_Parms, PathLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics::NewProp_PathLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnBreastplate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(ScaryMazeGameMode_eventSpawnBreastplate_Parms), Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics
	{
		struct ScaryMazeGameMode_eventSpawnGreaves_Parms
		{
			int32 PathLength;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PathLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics::NewProp_PathLength = { UE4CodeGen_Private::EPropertyClass::Int, "PathLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaryMazeGameMode_eventSpawnGreaves_Parms, PathLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics::NewProp_PathLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnGreaves", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(ScaryMazeGameMode_eventSpawnGreaves_Parms), Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics
	{
		struct ScaryMazeGameMode_eventSpawnHelmet_Parms
		{
			int32 PathLength;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PathLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics::NewProp_PathLength = { UE4CodeGen_Private::EPropertyClass::Int, "PathLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaryMazeGameMode_eventSpawnHelmet_Parms, PathLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics::NewProp_PathLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnHelmet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(ScaryMazeGameMode_eventSpawnHelmet_Parms), Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics
	{
		struct ScaryMazeGameMode_eventSpawnLantern_Parms
		{
			int32 CurrentCell;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentCell;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics::NewProp_CurrentCell = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentCell", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaryMazeGameMode_eventSpawnLantern_Parms, CurrentCell), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics::NewProp_CurrentCell,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnLantern", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(ScaryMazeGameMode_eventSpawnLantern_Parms), Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics
	{
		struct ScaryMazeGameMode_eventSpawnLighter_Parms
		{
			int32 CurrentCell;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentCell;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics::NewProp_CurrentCell = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentCell", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaryMazeGameMode_eventSpawnLighter_Parms, CurrentCell), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics::NewProp_CurrentCell,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnLighter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(ScaryMazeGameMode_eventSpawnLighter_Parms), Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnLightItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnLightItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnLightItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnLightItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnLightItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnLightItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnLightItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnLightItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics
	{
		struct ScaryMazeGameMode_eventSpawnMatch_Parms
		{
			int32 CurrentCell;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentCell;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics::NewProp_CurrentCell = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentCell", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaryMazeGameMode_eventSpawnMatch_Parms, CurrentCell), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics::NewProp_CurrentCell,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeGameMode, "SpawnMatch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(ScaryMazeGameMode_eventSpawnMatch_Parms), Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics
	{
		struct ScaryMazeGameMode_eventSpawnPlayer_Parms
		{
			UScaryMazeGameInstance* Instance;
			AScaryMazeBaseCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ScaryMazeGameMode_eventSpawnPlayer_Parms, ReturnValue), Z_Construct_UClass_AScaryMazeBaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::NewProp_Instance = { UE4CodeGen_Private::EPropertyClass::Object, "Instance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaryMazeGameMode_eventSpawnPlayer_Parms, Instance), Z_Construct_UClass_UScaryMazeGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer_Statics::NewProp_Instance,
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helmet_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Helmet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Greaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Greaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Breastplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Breastplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lantern_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Lantern;
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
		{ &Z_Construct_UFunction_AScaryMazeGameMode_LoadGame, "LoadGame" }, // 1515369394
		{ &Z_Construct_UFunction_AScaryMazeGameMode_MoveControllerToPlayer, "MoveControllerToPlayer" }, // 3085187582
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnArmorItem, "SpawnArmorItem" }, // 3098533194
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnBreastplate, "SpawnBreastplate" }, // 473130189
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnGreaves, "SpawnGreaves" }, // 913373972
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnHelmet, "SpawnHelmet" }, // 3989657912
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnLantern, "SpawnLantern" }, // 3571083684
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnLighter, "SpawnLighter" }, // 767336265
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnLightItems, "SpawnLightItems" }, // 2335852559
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnMatch, "SpawnMatch" }, // 1422315538
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnPlayer, "SpawnPlayer" }, // 3013131565
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Helmet_MetaData[] = {
		{ "Category", "ScaryMazeGameMode" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Helmet = { UE4CodeGen_Private::EPropertyClass::Class, "Helmet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, Helmet), Z_Construct_UClass_AHelmet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Helmet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Helmet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Greaves_MetaData[] = {
		{ "Category", "ScaryMazeGameMode" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Greaves = { UE4CodeGen_Private::EPropertyClass::Class, "Greaves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, Greaves), Z_Construct_UClass_AGreaves_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Greaves_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Greaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Breastplate_MetaData[] = {
		{ "Category", "ScaryMazeGameMode" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Breastplate = { UE4CodeGen_Private::EPropertyClass::Class, "Breastplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, Breastplate), Z_Construct_UClass_ABreastplate_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Breastplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Breastplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Lantern_MetaData[] = {
		{ "Category", "ScaryMazeGameMode" },
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Lantern = { UE4CodeGen_Private::EPropertyClass::Class, "Lantern", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, Lantern), Z_Construct_UClass_ALantern_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Lantern_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Lantern_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Helmet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Greaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Breastplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_Lantern,
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
	IMPLEMENT_CLASS(AScaryMazeGameMode, 3649291811);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScaryMazeGameMode(Z_Construct_UClass_AScaryMazeGameMode, &AScaryMazeGameMode::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AScaryMazeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScaryMazeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
