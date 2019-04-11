// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCARYMAZE_ScaryMazeGameInstance_generated_h
#error "ScaryMazeGameInstance.generated.h already included, missing '#pragma once' in ScaryMazeGameInstance.h"
#endif
#define SCARYMAZE_ScaryMazeGameInstance_generated_h

#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetbNewGame) \
	{ \
		P_GET_UBOOL(Z_Param_bNewGameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetbNewGame(Z_Param_bNewGameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetbLoad) \
	{ \
		P_GET_UBOOL(Z_Param_bLoadValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetbLoad(Z_Param_bLoadValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLevel(); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetbNewGame) \
	{ \
		P_GET_UBOOL(Z_Param_bNewGameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetbNewGame(Z_Param_bNewGameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetbLoad) \
	{ \
		P_GET_UBOOL(Z_Param_bLoadValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetbLoad(Z_Param_bLoadValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLevel(); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScaryMazeGameInstance(); \
	friend struct Z_Construct_UClass_UScaryMazeGameInstance_Statics; \
public: \
	DECLARE_CLASS(UScaryMazeGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(UScaryMazeGameInstance)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUScaryMazeGameInstance(); \
	friend struct Z_Construct_UClass_UScaryMazeGameInstance_Statics; \
public: \
	DECLARE_CLASS(UScaryMazeGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(UScaryMazeGameInstance)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScaryMazeGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScaryMazeGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScaryMazeGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScaryMazeGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScaryMazeGameInstance(UScaryMazeGameInstance&&); \
	NO_API UScaryMazeGameInstance(const UScaryMazeGameInstance&); \
public:


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScaryMazeGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScaryMazeGameInstance(UScaryMazeGameInstance&&); \
	NO_API UScaryMazeGameInstance(const UScaryMazeGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScaryMazeGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScaryMazeGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScaryMazeGameInstance)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_PRIVATE_PROPERTY_OFFSET
#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_14_PROLOG
#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_RPC_WRAPPERS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_INCLASS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScaryMaze_Source_ScaryMaze_ScaryMazeGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
