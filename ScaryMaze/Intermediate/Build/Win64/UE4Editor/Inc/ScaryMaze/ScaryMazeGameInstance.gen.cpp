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
	SCARYMAZE_API UFunction* Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame();
// End Cross Module References
	void UScaryMazeGameInstance::StaticRegisterNativesUScaryMazeGameInstance()
	{
		UClass* Class = UScaryMazeGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevel", &UScaryMazeGameInstance::execGetLevel },
			{ "SetbLoad", &UScaryMazeGameInstance::execSetbLoad },
			{ "SetbNewGame", &UScaryMazeGameInstance::execSetbNewGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics
	{
		struct ScaryMazeGameInstance_eventGetLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ScaryMazeGameInstance_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaryMazeGameInstance, "GetLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScaryMazeGameInstance_eventGetLevel_Parms), Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics
	{
		struct ScaryMazeGameInstance_eventSetbLoad_Parms
		{
			bool bLoadValue;
		};
		static void NewProp_bLoadValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::NewProp_bLoadValue_SetBit(void* Obj)
	{
		((ScaryMazeGameInstance_eventSetbLoad_Parms*)Obj)->bLoadValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::NewProp_bLoadValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoadValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScaryMazeGameInstance_eventSetbLoad_Parms), &Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::NewProp_bLoadValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::NewProp_bLoadValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaryMazeGameInstance, "SetbLoad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScaryMazeGameInstance_eventSetbLoad_Parms), Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics
	{
		struct ScaryMazeGameInstance_eventSetbNewGame_Parms
		{
			bool bNewGameValue;
		};
		static void NewProp_bNewGameValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewGameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::NewProp_bNewGameValue_SetBit(void* Obj)
	{
		((ScaryMazeGameInstance_eventSetbNewGame_Parms*)Obj)->bNewGameValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::NewProp_bNewGameValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewGameValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScaryMazeGameInstance_eventSetbNewGame_Parms), &Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::NewProp_bNewGameValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::NewProp_bNewGameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaryMazeGameInstance, "SetbNewGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScaryMazeGameInstance_eventSetbNewGame_Parms), Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewGame_MetaData[];
#endif
		static void NewProp_bNewGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewGame;
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
		{ &Z_Construct_UFunction_UScaryMazeGameInstance_GetLevel, "GetLevel" }, // 140281605
		{ &Z_Construct_UFunction_UScaryMazeGameInstance_SetbLoad, "SetbLoad" }, // 2094548398
		{ &Z_Construct_UFunction_UScaryMazeGameInstance_SetbNewGame, "SetbNewGame" }, // 4145084701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScaryMazeGameInstance.h" },
		{ "ModuleRelativePath", "ScaryMazeGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bNewGame_MetaData[] = {
		{ "Category", "ScaryMazeGameInstance" },
		{ "ModuleRelativePath", "ScaryMazeGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bNewGame_SetBit(void* Obj)
	{
		((UScaryMazeGameInstance*)Obj)->bNewGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bNewGame = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewGame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScaryMazeGameInstance), &Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bNewGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bNewGame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bNewGame_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaryMazeGameInstance_Statics::NewProp_bNewGame,
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
	IMPLEMENT_CLASS(UScaryMazeGameInstance, 4116623344);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScaryMazeGameInstance(Z_Construct_UClass_UScaryMazeGameInstance, &UScaryMazeGameInstance::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("UScaryMazeGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaryMazeGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
