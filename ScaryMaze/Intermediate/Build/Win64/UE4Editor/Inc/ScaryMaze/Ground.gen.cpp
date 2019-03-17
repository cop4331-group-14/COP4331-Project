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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroundMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGround_Statics::NewProp_GroundMesh_MetaData[] = {
		{ "Category", "Ground" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ground.h" },
		{ "ToolTip", "Allows Ground's mesh to be edited." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGround_Statics::NewProp_GroundMesh = { UE4CodeGen_Private::EPropertyClass::Object, "GroundMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(AGround, GroundMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGround_Statics::NewProp_GroundMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGround_Statics::NewProp_GroundMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGround_Statics::NewProp_GroundMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGround_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGround>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGround_Statics::ClassParams = {
		&AGround::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AGround_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGround_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AGround, 2639591147);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGround(Z_Construct_UClass_AGround, &AGround::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AGround"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGround);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
