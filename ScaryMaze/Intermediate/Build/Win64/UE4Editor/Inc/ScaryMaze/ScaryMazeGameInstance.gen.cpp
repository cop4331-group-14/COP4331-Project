// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/ScaryMazeGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaryMazeGameInstance() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_UScaryMazeGameInstance_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_UScaryMazeGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
// End Cross Module References
	void UScaryMazeGameInstance::StaticRegisterNativesUScaryMazeGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UScaryMazeGameInstance_NoRegister()
	{
		return UScaryMazeGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UScaryMazeGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScaryMazeGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScaryMazeGameInstance.h" },
		{ "ModuleRelativePath", "ScaryMazeGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScaryMazeGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaryMazeGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScaryMazeGameInstance_Statics::ClassParams = {
		&UScaryMazeGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UScaryMazeGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScaryMazeGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScaryMazeGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScaryMazeGameInstance, 1919800384);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScaryMazeGameInstance(Z_Construct_UClass_UScaryMazeGameInstance, &UScaryMazeGameInstance::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("UScaryMazeGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaryMazeGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
