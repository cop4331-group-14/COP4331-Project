// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/ArmorItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmorItem() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AArmorItem_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AArmorItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AArmorItem_DisplayArmorCollectionMessage();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AArmorItem::StaticRegisterNativesAArmorItem()
	{
		UClass* Class = AArmorItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayArmorCollectionMessage", &AArmorItem::execDisplayArmorCollectionMessage },
			{ "OnPlayerEnterLightBox", &AArmorItem::execOnPlayerEnterLightBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArmorItem_DisplayArmorCollectionMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmorItem_DisplayArmorCollectionMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArmorItem.h" },
		{ "ToolTip", "Display a default message when a light scource is walked over." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmorItem_DisplayArmorCollectionMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmorItem, "DisplayArmorCollectionMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmorItem_DisplayArmorCollectionMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmorItem_DisplayArmorCollectionMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmorItem_DisplayArmorCollectionMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmorItem_DisplayArmorCollectionMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics
	{
		struct ArmorItem_eventOnPlayerEnterLightBox_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ArmorItem_eventOnPlayerEnterLightBox_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ArmorItem_eventOnPlayerEnterLightBox_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ArmorItem_eventOnPlayerEnterLightBox_Parms), &Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ArmorItem_eventOnPlayerEnterLightBox_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ArmorItem_eventOnPlayerEnterLightBox_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ArmorItem_eventOnPlayerEnterLightBox_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ArmorItem_eventOnPlayerEnterLightBox_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArmorItem.h" },
		{ "ToolTip", "Overlap function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmorItem, "OnPlayerEnterLightBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(ArmorItem_eventOnPlayerEnterLightBox_Parms), Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArmorItem_NoRegister()
	{
		return AArmorItem::StaticClass();
	}
	struct Z_Construct_UClass_AArmorItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Defense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmorItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AArmorItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArmorItem_DisplayArmorCollectionMessage, "DisplayArmorCollectionMessage" }, // 1409880390
		{ &Z_Construct_UFunction_AArmorItem_OnPlayerEnterLightBox, "OnPlayerEnterLightBox" }, // 3263709749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmorItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmorItem.h" },
		{ "ModuleRelativePath", "ArmorItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorBox_MetaData[] = {
		{ "Category", "ArmorItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ArmorItem.h" },
		{ "ToolTip", "Collider for Light." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorBox = { UE4CodeGen_Private::EPropertyClass::Object, "ArmorBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AArmorItem, ArmorBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmorItem_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "ArmorItem" },
		{ "ModuleRelativePath", "ArmorItem.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AArmorItem_Statics::NewProp_Points = { UE4CodeGen_Private::EPropertyClass::Int, "Points", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AArmorItem, Points), METADATA_PARAMS(Z_Construct_UClass_AArmorItem_Statics::NewProp_Points_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmorItem_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmorItem_Statics::NewProp_Defense_MetaData[] = {
		{ "Category", "ArmorItem" },
		{ "ModuleRelativePath", "ArmorItem.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AArmorItem_Statics::NewProp_Defense = { UE4CodeGen_Private::EPropertyClass::Int, "Defense", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AArmorItem, Defense), METADATA_PARAMS(Z_Construct_UClass_AArmorItem_Statics::NewProp_Defense_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmorItem_Statics::NewProp_Defense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorMesh_MetaData[] = {
		{ "Category", "ArmorItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ArmorItem.h" },
		{ "ToolTip", "The mesh for the Light." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ArmorMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AArmorItem, ArmorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorRoot_MetaData[] = {
		{ "Category", "ArmorItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ArmorItem.h" },
		{ "ToolTip", "Scene component of Light." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorRoot = { UE4CodeGen_Private::EPropertyClass::Object, "ArmorRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AArmorItem, ArmorRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmorItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmorItem_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmorItem_Statics::NewProp_Defense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmorItem_Statics::NewProp_ArmorRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmorItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmorItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmorItem_Statics::ClassParams = {
		&AArmorItem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AArmorItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AArmorItem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AArmorItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AArmorItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmorItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmorItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmorItem, 2862536381);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmorItem(Z_Construct_UClass_AArmorItem, &AArmorItem::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AArmorItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmorItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
