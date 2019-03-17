// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/Wall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWall() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AWall_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AWall_GetIsBoundary();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AWall_GetIsVisited();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AWall_SetIsBoundary();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AWall_SetIsVisited();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWall::StaticRegisterNativesAWall()
	{
		UClass* Class = AWall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsBoundary", &AWall::execGetIsBoundary },
			{ "GetIsVisited", &AWall::execGetIsVisited },
			{ "SetIsBoundary", &AWall::execSetIsBoundary },
			{ "SetIsVisited", &AWall::execSetIsVisited },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWall_GetIsBoundary_Statics
	{
		struct Wall_eventGetIsBoundary_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWall_GetIsBoundary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Wall_eventGetIsBoundary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWall_GetIsBoundary_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Wall_eventGetIsBoundary_Parms), &Z_Construct_UFunction_AWall_GetIsBoundary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWall_GetIsBoundary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWall_GetIsBoundary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWall_GetIsBoundary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Wall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWall_GetIsBoundary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWall, "GetIsBoundary", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Wall_eventGetIsBoundary_Parms), Z_Construct_UFunction_AWall_GetIsBoundary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWall_GetIsBoundary_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWall_GetIsBoundary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWall_GetIsBoundary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWall_GetIsBoundary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWall_GetIsBoundary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWall_GetIsVisited_Statics
	{
		struct Wall_eventGetIsVisited_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWall_GetIsVisited_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Wall_eventGetIsVisited_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWall_GetIsVisited_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Wall_eventGetIsVisited_Parms), &Z_Construct_UFunction_AWall_GetIsVisited_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWall_GetIsVisited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWall_GetIsVisited_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWall_GetIsVisited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Wall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWall_GetIsVisited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWall, "GetIsVisited", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Wall_eventGetIsVisited_Parms), Z_Construct_UFunction_AWall_GetIsVisited_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWall_GetIsVisited_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWall_GetIsVisited_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWall_GetIsVisited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWall_GetIsVisited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWall_GetIsVisited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWall_SetIsBoundary_Statics
	{
		struct Wall_eventSetIsBoundary_Parms
		{
			bool bBoundary;
		};
		static void NewProp_bBoundary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoundary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWall_SetIsBoundary_Statics::NewProp_bBoundary_SetBit(void* Obj)
	{
		((Wall_eventSetIsBoundary_Parms*)Obj)->bBoundary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWall_SetIsBoundary_Statics::NewProp_bBoundary = { UE4CodeGen_Private::EPropertyClass::Bool, "bBoundary", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Wall_eventSetIsBoundary_Parms), &Z_Construct_UFunction_AWall_SetIsBoundary_Statics::NewProp_bBoundary_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWall_SetIsBoundary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWall_SetIsBoundary_Statics::NewProp_bBoundary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWall_SetIsBoundary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Wall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWall_SetIsBoundary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWall, "SetIsBoundary", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Wall_eventSetIsBoundary_Parms), Z_Construct_UFunction_AWall_SetIsBoundary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWall_SetIsBoundary_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWall_SetIsBoundary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWall_SetIsBoundary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWall_SetIsBoundary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWall_SetIsBoundary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWall_SetIsVisited_Statics
	{
		struct Wall_eventSetIsVisited_Parms
		{
			bool bVisited;
		};
		static void NewProp_bVisited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisited;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWall_SetIsVisited_Statics::NewProp_bVisited_SetBit(void* Obj)
	{
		((Wall_eventSetIsVisited_Parms*)Obj)->bVisited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWall_SetIsVisited_Statics::NewProp_bVisited = { UE4CodeGen_Private::EPropertyClass::Bool, "bVisited", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Wall_eventSetIsVisited_Parms), &Z_Construct_UFunction_AWall_SetIsVisited_Statics::NewProp_bVisited_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWall_SetIsVisited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWall_SetIsVisited_Statics::NewProp_bVisited,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWall_SetIsVisited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Wall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWall_SetIsVisited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWall, "SetIsVisited", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Wall_eventSetIsVisited_Parms), Z_Construct_UFunction_AWall_SetIsVisited_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWall_SetIsVisited_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWall_SetIsVisited_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWall_SetIsVisited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWall_SetIsVisited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWall_SetIsVisited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWall_NoRegister()
	{
		return AWall::StaticClass();
	}
	struct Z_Construct_UClass_AWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWall_GetIsBoundary, "GetIsBoundary" }, // 3347188975
		{ &Z_Construct_UFunction_AWall_GetIsVisited, "GetIsVisited" }, // 370082707
		{ &Z_Construct_UFunction_AWall_SetIsBoundary, "SetIsBoundary" }, // 2082678816
		{ &Z_Construct_UFunction_AWall_SetIsVisited, "SetIsVisited" }, // 1599561093
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Wall.h" },
		{ "ModuleRelativePath", "Wall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWall_Statics::NewProp_WallMesh_MetaData[] = {
		{ "Category", "Wall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wall.h" },
		{ "ToolTip", "Allows wall's mesh to be edited." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWall_Statics::NewProp_WallMesh = { UE4CodeGen_Private::EPropertyClass::Object, "WallMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(AWall, WallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWall_Statics::NewProp_WallMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::NewProp_WallMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWall_Statics::NewProp_WallMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWall_Statics::ClassParams = {
		&AWall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AWall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWall, 3206851085);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWall(Z_Construct_UClass_AWall, &AWall::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
