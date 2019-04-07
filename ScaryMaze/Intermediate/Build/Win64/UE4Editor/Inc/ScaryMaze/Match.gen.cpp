// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/Match.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatch() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AMatch_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AMatch();
	SCARYMAZE_API UClass* Z_Construct_UClass_ALightItem();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
// End Cross Module References
	void AMatch::StaticRegisterNativesAMatch()
	{
	}
	UClass* Z_Construct_UClass_AMatch_NoRegister()
	{
		return AMatch::StaticClass();
	}
	struct Z_Construct_UClass_AMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALightItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Match.h" },
		{ "ModuleRelativePath", "Match.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMatch_Statics::ClassParams = {
		&AMatch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMatch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMatch, 799111136);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMatch(Z_Construct_UClass_AMatch, &AMatch::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
