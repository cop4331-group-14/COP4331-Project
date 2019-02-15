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
struct FVector;
struct FHitResult;
#ifdef SCARYMAZE_ScaryMazeProjectile_generated_h
#error "ScaryMazeProjectile.generated.h already included, missing '#pragma once' in ScaryMazeProjectile.h"
#endif
#define SCARYMAZE_ScaryMazeProjectile_generated_h

#define ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScaryMazeProjectile(); \
	friend struct Z_Construct_UClass_AScaryMazeProjectile_Statics; \
public: \
	DECLARE_CLASS(AScaryMazeProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(AScaryMazeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAScaryMazeProjectile(); \
	friend struct Z_Construct_UClass_AScaryMazeProjectile_Statics; \
public: \
	DECLARE_CLASS(AScaryMazeProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(AScaryMazeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScaryMazeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScaryMazeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScaryMazeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScaryMazeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScaryMazeProjectile(AScaryMazeProjectile&&); \
	NO_API AScaryMazeProjectile(const AScaryMazeProjectile&); \
public:


#define ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScaryMazeProjectile(AScaryMazeProjectile&&); \
	NO_API AScaryMazeProjectile(const AScaryMazeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScaryMazeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScaryMazeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScaryMazeProjectile)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AScaryMazeProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AScaryMazeProjectile, ProjectileMovement); }


#define ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_9_PROLOG
#define ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_RPC_WRAPPERS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_INCLASS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScaryMaze_Source_ScaryMaze_ScaryMazeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
