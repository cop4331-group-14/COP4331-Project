// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/ScaryMazeHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaryMazeHUD() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AScaryMazeHUD_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AScaryMazeHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
// End Cross Module References
	void AScaryMazeHUD::StaticRegisterNativesAScaryMazeHUD()
	{
	}
	UClass* Z_Construct_UClass_AScaryMazeHUD_NoRegister()
	{
		return AScaryMazeHUD::StaticClass();
	}
	struct Z_Construct_UClass_AScaryMazeHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScaryMazeHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ScaryMazeHUD.h" },
		{ "ModuleRelativePath", "ScaryMazeHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScaryMazeHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScaryMazeHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScaryMazeHUD_Statics::ClassParams = {
		&AScaryMazeHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AScaryMazeHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScaryMazeHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScaryMazeHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScaryMazeHUD, 1080905060);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScaryMazeHUD(Z_Construct_UClass_AScaryMazeHUD, &AScaryMazeHUD::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AScaryMazeHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScaryMazeHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
