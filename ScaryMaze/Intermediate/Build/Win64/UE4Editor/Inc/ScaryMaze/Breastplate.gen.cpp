// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/Breastplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreastplate() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_ABreastplate_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_ABreastplate();
	SCARYMAZE_API UClass* Z_Construct_UClass_AArmorItem();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
// End Cross Module References
	void ABreastplate::StaticRegisterNativesABreastplate()
	{
	}
	UClass* Z_Construct_UClass_ABreastplate_NoRegister()
	{
		return ABreastplate::StaticClass();
	}
	struct Z_Construct_UClass_ABreastplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreastplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArmorItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreastplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Breastplate.h" },
		{ "ModuleRelativePath", "Breastplate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreastplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreastplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABreastplate_Statics::ClassParams = {
		&ABreastplate::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABreastplate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABreastplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABreastplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABreastplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABreastplate, 86956127);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABreastplate(Z_Construct_UClass_ABreastplate, &ABreastplate::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("ABreastplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreastplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
