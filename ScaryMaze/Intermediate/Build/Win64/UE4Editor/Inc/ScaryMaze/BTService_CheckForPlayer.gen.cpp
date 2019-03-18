// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/BTService_CheckForPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_CheckForPlayer() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_UBTService_CheckForPlayer_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_UBTService_CheckForPlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
// End Cross Module References
	void UBTService_CheckForPlayer::StaticRegisterNativesUBTService_CheckForPlayer()
	{
	}
	UClass* Z_Construct_UClass_UBTService_CheckForPlayer_NoRegister()
	{
		return UBTService_CheckForPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_CheckForPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_CheckForPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CheckForPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_CheckForPlayer.h" },
		{ "ModuleRelativePath", "BTService_CheckForPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_CheckForPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_CheckForPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_CheckForPlayer_Statics::ClassParams = {
		&UBTService_CheckForPlayer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_CheckForPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTService_CheckForPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_CheckForPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_CheckForPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_CheckForPlayer, 1167662305);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_CheckForPlayer(Z_Construct_UClass_UBTService_CheckForPlayer, &UBTService_CheckForPlayer::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("UBTService_CheckForPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_CheckForPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
