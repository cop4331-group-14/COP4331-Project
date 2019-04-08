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
	SCARYMAZE_API UFunction* Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad();
// End Cross Module References
	void UScaryMazeGameInstance::StaticRegisterNativesUScaryMazeGameInstance()
	{
		UClass* Class = UScaryMazeGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetbLoad", &UScaryMazeGameInstance::execSetbLoad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaryMazeGameInstance, "SetbLoad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScaryMazeGameInstance_NoRegister()
	{
		return UScaryMazeGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UScaryMazeGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoad_MetaData[];
#endif
		static void NewProp_bLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScaryMazeGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScaryMazeGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad, "SetbLoad" }, // 1093536222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScaryMazeGameInstance.h" },
		{ "ModuleRelativePath", "ScaryMazeGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bLoad_MetaData[] = {
		{ "Category", "ScaryMazeGameInstance" },
		{ "ModuleRelativePath", "ScaryMazeGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bLoad_SetBit(void* Obj)
	{
		((UScaryMazeGameInstance*)Obj)->bLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScaryMazeGameInstance), &Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bLoad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScaryMazeGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bLoad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScaryMazeGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaryMazeGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScaryMazeGameInstance_Statics::ClassParams = {
		&UScaryMazeGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UScaryMazeGameInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeGameInstance_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UScaryMazeGameInstance, 852083454);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScaryMazeGameInstance(Z_Construct_UClass_UScaryMazeGameInstance, &UScaryMazeGameInstance::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("UScaryMazeGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaryMazeGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
