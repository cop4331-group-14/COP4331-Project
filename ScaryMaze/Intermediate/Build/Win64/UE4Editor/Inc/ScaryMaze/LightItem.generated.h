// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SCARYMAZE_LightItem_generated_h
#error "LightItem.generated.h already included, missing '#pragma once' in LightItem.h"
#endif
#define SCARYMAZE_LightItem_generated_h

#define ScaryMaze_Source_ScaryMaze_LightItem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayLightCollectionMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisplayLightCollectionMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayerEnterLightBox) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerEnterLightBox(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_LightItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayLightCollectionMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisplayLightCollectionMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayerEnterLightBox) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerEnterLightBox(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_LightItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightItem(); \
	friend struct Z_Construct_UClass_ALightItem_Statics; \
public: \
	DECLARE_CLASS(ALightItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(ALightItem)


#define ScaryMaze_Source_ScaryMaze_LightItem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALightItem(); \
	friend struct Z_Construct_UClass_ALightItem_Statics; \
public: \
	DECLARE_CLASS(ALightItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(ALightItem)


#define ScaryMaze_Source_ScaryMaze_LightItem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightItem(ALightItem&&); \
	NO_API ALightItem(const ALightItem&); \
public:


#define ScaryMaze_Source_ScaryMaze_LightItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightItem(ALightItem&&); \
	NO_API ALightItem(const ALightItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightItem)


#define ScaryMaze_Source_ScaryMaze_LightItem_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LightRoot() { return STRUCT_OFFSET(ALightItem, LightRoot); } \
	FORCEINLINE static uint32 __PPO__LightMesh() { return STRUCT_OFFSET(ALightItem, LightMesh); } \
	FORCEINLINE static uint32 __PPO__LightIntensity() { return STRUCT_OFFSET(ALightItem, LightIntensity); } \
	FORCEINLINE static uint32 __PPO__LightTime() { return STRUCT_OFFSET(ALightItem, LightTime); } \
	FORCEINLINE static uint32 __PPO__LightColor() { return STRUCT_OFFSET(ALightItem, LightColor); } \
	FORCEINLINE static uint32 __PPO__Attenuation() { return STRUCT_OFFSET(ALightItem, Attenuation); } \
	FORCEINLINE static uint32 __PPO__LightBox() { return STRUCT_OFFSET(ALightItem, LightBox); }


#define ScaryMaze_Source_ScaryMaze_LightItem_h_12_PROLOG
#define ScaryMaze_Source_ScaryMaze_LightItem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_LightItem_h_15_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_LightItem_h_15_RPC_WRAPPERS \
	ScaryMaze_Source_ScaryMaze_LightItem_h_15_INCLASS \
	ScaryMaze_Source_ScaryMaze_LightItem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScaryMaze_Source_ScaryMaze_LightItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_LightItem_h_15_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_LightItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_LightItem_h_15_INCLASS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_LightItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScaryMaze_Source_ScaryMaze_LightItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
