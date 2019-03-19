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
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze();
	SCARYMAZE_API UClass* Z_Construct_UClass_AWall_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AMaze_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AScaryMazeGameMode::StaticRegisterNativesAScaryMazeGameMode()
	{
		UClass* Class = AScaryMazeGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnScaryMaze", &AScaryMazeGameMode::execSpawnScaryMaze },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
		{ "ToolTip", "Spawns the maze." },
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaryMazePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScaryMazePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScaryMazePath_Inner;
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
		{ &Z_Construct_UFunction_AScaryMazeGameMode_SpawnScaryMaze, "SpawnScaryMaze" }, // 1610296266
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMazePath_MetaData[] = {
		{ "ModuleRelativePath", "ScaryMazeGameMode.h" },
		{ "ToolTip", "Stores array of path through the maze." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMazePath = { UE4CodeGen_Private::EPropertyClass::Array, "ScaryMazePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AScaryMazeGameMode, ScaryMazePath), METADATA_PARAMS(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMazePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMazePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMazePath_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ScaryMazePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AWall_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMazePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeGameMode_Statics::NewProp_ScaryMazePath_Inner,
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
	IMPLEMENT_CLASS(AScaryMazeGameMode, 2122228363);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScaryMazeGameMode(Z_Construct_UClass_AScaryMazeGameMode, &AScaryMazeGameMode::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AScaryMazeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScaryMazeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
