// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/LightItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightItem() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_ALightItem_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_ALightItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_ALightItem_DisplayLightCollectionMessage();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ALightItem::StaticRegisterNativesALightItem()
	{
		UClass* Class = ALightItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayLightCollectionMessage", &ALightItem::execDisplayLightCollectionMessage },
			{ "OnPlayerEnterLightBox", &ALightItem::execOnPlayerEnterLightBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightItem_DisplayLightCollectionMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightItem_DisplayLightCollectionMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightItem.h" },
		{ "ToolTip", "Display a default message when a light scource is walked over." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightItem_DisplayLightCollectionMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightItem, "DisplayLightCollectionMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightItem_DisplayLightCollectionMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALightItem_DisplayLightCollectionMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightItem_DisplayLightCollectionMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightItem_DisplayLightCollectionMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics
	{
		struct LightItem_eventOnPlayerEnterLightBox_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(LightItem_eventOnPlayerEnterLightBox_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LightItem_eventOnPlayerEnterLightBox_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightItem_eventOnPlayerEnterLightBox_Parms), &Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightItem_eventOnPlayerEnterLightBox_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LightItem_eventOnPlayerEnterLightBox_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightItem_eventOnPlayerEnterLightBox_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LightItem_eventOnPlayerEnterLightBox_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightItem.h" },
		{ "ToolTip", "Overlap function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightItem, "OnPlayerEnterLightBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(LightItem_eventOnPlayerEnterLightBox_Parms), Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightItem_NoRegister()
	{
		return ALightItem::StaticClass();
	}
	struct Z_Construct_UClass_ALightItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightEmission_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightEmission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightItem_DisplayLightCollectionMessage, "DisplayLightCollectionMessage" }, // 847133610
		{ &Z_Construct_UFunction_ALightItem_OnPlayerEnterLightBox, "OnPlayerEnterLightBox" }, // 2301663791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightItem.h" },
		{ "ModuleRelativePath", "LightItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightItem_Statics::NewProp_LightBox_MetaData[] = {
		{ "Category", "LightItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightItem.h" },
		{ "ToolTip", "Collider for Light." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightItem_Statics::NewProp_LightBox = { UE4CodeGen_Private::EPropertyClass::Object, "LightBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ALightItem, LightBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightItem_Statics::NewProp_LightBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALightItem_Statics::NewProp_LightBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightItem_Statics::NewProp_LightEmission_MetaData[] = {
		{ "Category", "LightItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightItem.h" },
		{ "ToolTip", "A pointlight for the light to project." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightItem_Statics::NewProp_LightEmission = { UE4CodeGen_Private::EPropertyClass::Object, "LightEmission", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ALightItem, LightEmission), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightItem_Statics::NewProp_LightEmission_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALightItem_Statics::NewProp_LightEmission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightItem_Statics::NewProp_LightMesh_MetaData[] = {
		{ "Category", "LightItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightItem.h" },
		{ "ToolTip", "The mesh for the Light." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightItem_Statics::NewProp_LightMesh = { UE4CodeGen_Private::EPropertyClass::Object, "LightMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ALightItem, LightMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightItem_Statics::NewProp_LightMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALightItem_Statics::NewProp_LightMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightItem_Statics::NewProp_LightRoot_MetaData[] = {
		{ "Category", "LightItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightItem.h" },
		{ "ToolTip", "Scene component of Light." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightItem_Statics::NewProp_LightRoot = { UE4CodeGen_Private::EPropertyClass::Object, "LightRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ALightItem, LightRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightItem_Statics::NewProp_LightRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALightItem_Statics::NewProp_LightRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightItem_Statics::NewProp_LightBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightItem_Statics::NewProp_LightEmission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightItem_Statics::NewProp_LightMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightItem_Statics::NewProp_LightRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightItem_Statics::ClassParams = {
		&ALightItem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALightItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALightItem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALightItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALightItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightItem, 1567909408);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightItem(Z_Construct_UClass_ALightItem, &ALightItem::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("ALightItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
