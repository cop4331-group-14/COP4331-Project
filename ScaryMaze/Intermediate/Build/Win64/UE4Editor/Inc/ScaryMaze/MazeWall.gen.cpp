// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/MazeWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeWall() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AMazeWall_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AMazeWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMazeWall::StaticRegisterNativesAMazeWall()
	{
	}
	UClass* Z_Construct_UClass_AMazeWall_NoRegister()
	{
		return AMazeWall::StaticClass();
	}
	struct Z_Construct_UClass_AMazeWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_MazeWall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_MazeWall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MazeWall.h" },
		{ "ModuleRelativePath", "MazeWall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeWall_Statics::NewProp_SM_MazeWall_MetaData[] = {
		{ "Category", "MazeWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeWall_Statics::NewProp_SM_MazeWall = { UE4CodeGen_Private::EPropertyClass::Object, "SM_MazeWall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AMazeWall, SM_MazeWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeWall_Statics::NewProp_SM_MazeWall_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeWall_Statics::NewProp_SM_MazeWall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeWall_Statics::NewProp_SM_MazeWall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazeWall_Statics::ClassParams = {
		&AMazeWall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMazeWall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMazeWall_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMazeWall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMazeWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeWall, 2178436158);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeWall(Z_Construct_UClass_AMazeWall, &AMazeWall::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AMazeWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
