// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/Goal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoal() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AGoal_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AGoal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AGoal::StaticRegisterNativesAGoal()
	{
		UClass* Class = AGoal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerEnterGoalBox", &AGoal::execOnPlayerEnterGoalBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics
	{
		struct Goal_eventOnPlayerEnterGoalBox_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Goal_eventOnPlayerEnterGoalBox_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Goal_eventOnPlayerEnterGoalBox_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Goal_eventOnPlayerEnterGoalBox_Parms), &Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Goal_eventOnPlayerEnterGoalBox_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Goal_eventOnPlayerEnterGoalBox_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Goal_eventOnPlayerEnterGoalBox_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Goal_eventOnPlayerEnterGoalBox_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goal.h" },
		{ "ToolTip", "Overlap function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoal, "OnPlayerEnterGoalBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(Goal_eventOnPlayerEnterGoalBox_Parms), Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGoal_NoRegister()
	{
		return AGoal::StaticClass();
	}
	struct Z_Construct_UClass_AGoal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGoal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoal_OnPlayerEnterGoalBox, "OnPlayerEnterGoalBox" }, // 2489949362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Goal.h" },
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_GoalBox_MetaData[] = {
		{ "Category", "Goal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goal.h" },
		{ "ToolTip", "Box collider." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_GoalBox = { UE4CodeGen_Private::EPropertyClass::Object, "GoalBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AGoal, GoalBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_GoalBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_GoalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_GoalLight_MetaData[] = {
		{ "Category", "Goal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goal.h" },
		{ "ToolTip", "A pointlight for the goal to project." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_GoalLight = { UE4CodeGen_Private::EPropertyClass::Object, "GoalLight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AGoal, GoalLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_GoalLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_GoalLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_GoalMesh_MetaData[] = {
		{ "Category", "Goal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goal.h" },
		{ "ToolTip", "The mesh for the goal." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_GoalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "GoalMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AGoal, GoalMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_GoalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_GoalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_GoalRoot_MetaData[] = {
		{ "Category", "Goal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goal.h" },
		{ "ToolTip", "Scene Component of the Goal as root." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_GoalRoot = { UE4CodeGen_Private::EPropertyClass::Object, "GoalRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AGoal, GoalRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_GoalRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_GoalRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_GoalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_GoalLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_GoalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_GoalRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoal_Statics::ClassParams = {
		&AGoal::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AGoal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoal, 396863178);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoal(Z_Construct_UClass_AGoal, &AGoal::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AGoal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
