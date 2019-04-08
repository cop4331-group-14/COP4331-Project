// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/Helmet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelmet() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AHelmet_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AHelmet();
	SCARYMAZE_API UClass* Z_Construct_UClass_AArmorItem();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
// End Cross Module References
	void AHelmet::StaticRegisterNativesAHelmet()
	{
	}
	UClass* Z_Construct_UClass_AHelmet_NoRegister()
	{
		return AHelmet::StaticClass();
	}
	struct Z_Construct_UClass_AHelmet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelmet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArmorItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelmet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Helmet.h" },
		{ "ModuleRelativePath", "Helmet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelmet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelmet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHelmet_Statics::ClassParams = {
		&AHelmet::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHelmet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHelmet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHelmet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHelmet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHelmet, 4046675945);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHelmet(Z_Construct_UClass_AHelmet, &AHelmet::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AHelmet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelmet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
