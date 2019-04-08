// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/ScaryMazeSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaryMazeSaveGame() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_UScaryMazeSaveGame_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_UScaryMazeSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
// End Cross Module References
	void UScaryMazeSaveGame::StaticRegisterNativesUScaryMazeSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UScaryMazeSaveGame_NoRegister()
	{
		return UScaryMazeSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UScaryMazeSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Defense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AttackPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScaryMazeSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScaryMazeSaveGame.h" },
		{ "ModuleRelativePath", "ScaryMazeSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "ScaryMazeSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Score = { UE4CodeGen_Private::EPropertyClass::Int, "Score", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UScaryMazeSaveGame, Score), METADATA_PARAMS(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Score_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "ScaryMazeSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Int, "Level", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UScaryMazeSaveGame, Level), METADATA_PARAMS(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Level_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Defense_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "ScaryMazeSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Defense = { UE4CodeGen_Private::EPropertyClass::Int, "Defense", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UScaryMazeSaveGame, Defense), METADATA_PARAMS(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Defense_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Defense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_AttackPower_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "ScaryMazeSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_AttackPower = { UE4CodeGen_Private::EPropertyClass::Int, "AttackPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UScaryMazeSaveGame, AttackPower), METADATA_PARAMS(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_AttackPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_AttackPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "ScaryMazeSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UScaryMazeSaveGame, Health), METADATA_PARAMS(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_SaveName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "ScaryMazeSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_SaveName = { UE4CodeGen_Private::EPropertyClass::Str, "SaveName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UScaryMazeSaveGame, SaveName), METADATA_PARAMS(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_SaveName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_SaveName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScaryMazeSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Defense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_AttackPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaryMazeSaveGame_Statics::NewProp_SaveName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScaryMazeSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaryMazeSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScaryMazeSaveGame_Statics::ClassParams = {
		&UScaryMazeSaveGame::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UScaryMazeSaveGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeSaveGame_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UScaryMazeSaveGame_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScaryMazeSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScaryMazeSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScaryMazeSaveGame, 1198902265);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScaryMazeSaveGame(Z_Construct_UClass_UScaryMazeSaveGame, &UScaryMazeSaveGame::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("UScaryMazeSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaryMazeSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
