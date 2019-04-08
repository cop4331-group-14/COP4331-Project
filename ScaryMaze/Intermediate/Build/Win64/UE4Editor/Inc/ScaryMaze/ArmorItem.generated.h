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
#ifdef SCARYMAZE_ArmorItem_generated_h
#error "ArmorItem.generated.h already included, missing '#pragma once' in ArmorItem.h"
#endif
#define SCARYMAZE_ArmorItem_generated_h

#define ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayArmorCollectionMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisplayArmorCollectionMessage(); \
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


#define ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayArmorCollectionMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisplayArmorCollectionMessage(); \
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


#define ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmorItem(); \
	friend struct Z_Construct_UClass_AArmorItem_Statics; \
public: \
	DECLARE_CLASS(AArmorItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(AArmorItem)


#define ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAArmorItem(); \
	friend struct Z_Construct_UClass_AArmorItem_Statics; \
public: \
	DECLARE_CLASS(AArmorItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(AArmorItem)


#define ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmorItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmorItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmorItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmorItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmorItem(AArmorItem&&); \
	NO_API AArmorItem(const AArmorItem&); \
public:


#define ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmorItem(AArmorItem&&); \
	NO_API AArmorItem(const AArmorItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmorItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmorItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArmorItem)


#define ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ArmorRoot() { return STRUCT_OFFSET(AArmorItem, ArmorRoot); } \
	FORCEINLINE static uint32 __PPO__ArmorMesh() { return STRUCT_OFFSET(AArmorItem, ArmorMesh); } \
	FORCEINLINE static uint32 __PPO__Defense() { return STRUCT_OFFSET(AArmorItem, Defense); } \
	FORCEINLINE static uint32 __PPO__Points() { return STRUCT_OFFSET(AArmorItem, Points); } \
	FORCEINLINE static uint32 __PPO__ArmorBox() { return STRUCT_OFFSET(AArmorItem, ArmorBox); }


#define ScaryMaze_Source_ScaryMaze_ArmorItem_h_11_PROLOG
#define ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_RPC_WRAPPERS \
	ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_INCLASS \
	ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_INCLASS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ArmorItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScaryMaze_Source_ScaryMaze_ArmorItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
