// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryMaze/ScaryMazeBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaryMazeBaseCharacter() {}
// Cross Module References
	SCARYMAZE_API UClass* Z_Construct_UClass_AScaryMazeBaseCharacter_NoRegister();
	SCARYMAZE_API UClass* Z_Construct_UClass_AScaryMazeBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ScaryMaze();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDead();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateAttackPower();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateDefense();
	SCARYMAZE_API UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateHealth();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AScaryMazeBaseCharacter::StaticRegisterNativesAScaryMazeBaseCharacter()
	{
		UClass* Class = AScaryMazeBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateAttackPower", &AScaryMazeBaseCharacter::execCalculateAttackPower },
			{ "CalculateDead", &AScaryMazeBaseCharacter::execCalculateDead },
			{ "CalculateDefense", &AScaryMazeBaseCharacter::execCalculateDefense },
			{ "CalculateHealth", &AScaryMazeBaseCharacter::execCalculateHealth },
			{ "ValidateAttackPower", &AScaryMazeBaseCharacter::execValidateAttackPower },
			{ "ValidateDefense", &AScaryMazeBaseCharacter::execValidateDefense },
			{ "ValidateHealth", &AScaryMazeBaseCharacter::execValidateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics
	{
		struct ScaryMazeBaseCharacter_eventCalculateAttackPower_Parms
		{
			float DeltaAttackPower;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaAttackPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics::NewProp_DeltaAttackPower = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaAttackPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaryMazeBaseCharacter_eventCalculateAttackPower_Parms, DeltaAttackPower), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics::NewProp_DeltaAttackPower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeBaseCharacter, "CalculateAttackPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ScaryMazeBaseCharacter_eventCalculateAttackPower_Parms), Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeBaseCharacter, "CalculateDead", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDead_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics
	{
		struct ScaryMazeBaseCharacter_eventCalculateDefense_Parms
		{
			float DeltaDefense;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaDefense;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics::NewProp_DeltaDefense = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaDefense", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaryMazeBaseCharacter_eventCalculateDefense_Parms, DeltaDefense), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics::NewProp_DeltaDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeBaseCharacter, "CalculateDefense", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ScaryMazeBaseCharacter_eventCalculateDefense_Parms), Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics
	{
		struct ScaryMazeBaseCharacter_eventCalculateHealth_Parms
		{
			float DeltaHealth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics::NewProp_DeltaHealth = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaryMazeBaseCharacter_eventCalculateHealth_Parms, DeltaHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics::NewProp_DeltaHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeBaseCharacter, "CalculateHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ScaryMazeBaseCharacter_eventCalculateHealth_Parms), Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateAttackPower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateAttackPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateAttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeBaseCharacter, "ValidateAttackPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateAttackPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateAttackPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateAttackPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateAttackPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateDefense_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateDefense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateDefense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeBaseCharacter, "ValidateDefense", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateDefense_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateDefense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateDefense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateDefense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScaryMazeBaseCharacter, "ValidateHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AScaryMazeBaseCharacter_NoRegister()
	{
		return AScaryMazeBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AScaryMazeBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Defense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AttackPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaryMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateAttackPower, "CalculateAttackPower" }, // 833183091
		{ &Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDead, "CalculateDead" }, // 3544914373
		{ &Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateDefense, "CalculateDefense" }, // 2728587275
		{ &Z_Construct_UFunction_AScaryMazeBaseCharacter_CalculateHealth, "CalculateHealth" }, // 84124604
		{ &Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateAttackPower, "ValidateAttackPower" }, // 3634511737
		{ &Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateDefense, "ValidateDefense" }, // 504804820
		{ &Z_Construct_UFunction_AScaryMazeBaseCharacter_ValidateHealth, "ValidateHealth" }, // 2939004103
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ScaryMazeBaseCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_IsDead_MetaData[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((AScaryMazeBaseCharacter*)Obj)->IsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_IsDead = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AScaryMazeBaseCharacter), &Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_IsDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Defense_MetaData[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Defense = { UE4CodeGen_Private::EPropertyClass::Int, "Defense", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, Defense), METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Defense_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Defense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_AttackPower_MetaData[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_AttackPower = { UE4CodeGen_Private::EPropertyClass::Int, "AttackPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, AttackPower), METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_AttackPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_AttackPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_MaxHealth = { UE4CodeGen_Private::EPropertyClass::Float, "MaxHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_LightTime_MetaData[] = {
		{ "Category", "ScaryMazeBaseCharacter" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_LightTime = { UE4CodeGen_Private::EPropertyClass::Float, "LightTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, LightTime), METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_LightTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_LightTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_LightSource_MetaData[] = {
		{ "Category", "ScaryMazeBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_LightSource = { UE4CodeGen_Private::EPropertyClass::Object, "LightSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, LightSource), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_LightSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_LightSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Skeleton = { UE4CodeGen_Private::EPropertyClass::Object, "Skeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Skeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Weapon = { UE4CodeGen_Private::EPropertyClass::Object, "Weapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Weapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_FirstPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScaryMazeBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Mesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AScaryMazeBaseCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Mesh1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_IsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Defense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_AttackPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_LightTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_LightSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::NewProp_Mesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScaryMazeBaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::ClassParams = {
		&AScaryMazeBaseCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScaryMazeBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScaryMazeBaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScaryMazeBaseCharacter, 1027757587);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScaryMazeBaseCharacter(Z_Construct_UClass_AScaryMazeBaseCharacter, &AScaryMazeBaseCharacter::StaticClass, TEXT("/Script/ScaryMaze"), TEXT("AScaryMazeBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScaryMazeBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
