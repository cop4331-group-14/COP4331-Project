// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/Ground.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGround() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AGround_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AGround();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
// End Cross Module References
	void AGround::StaticRegisterNativesAGround()
	{
	}
	UClass* Z_Construct_UClass_AGround_NoRegister()
	{
		return AGround::StaticClass();
	}
	struct Z_Construct_UClass_AGround_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGround_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGround_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ground.h" },
		{ "ModuleRelativePath", "Ground.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGround_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGround>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGround_Statics::ClassParams = {
		&AGround::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGround_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGround_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGround()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGround_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGround, 2900782029);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGround(Z_Construct_UClass_AGround, &AGround::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AGround"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGround);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
