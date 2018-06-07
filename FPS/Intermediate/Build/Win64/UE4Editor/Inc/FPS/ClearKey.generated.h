// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_ClearKey_generated_h
#error "ClearKey.generated.h already included, missing '#pragma once' in ClearKey.h"
#endif
#define FPS_ClearKey_generated_h

#define FPS_Source_FPS_AI_ClearKey_h_15_RPC_WRAPPERS
#define FPS_Source_FPS_AI_ClearKey_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_AI_ClearKey_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClearKey(); \
	friend FPS_API class UClass* Z_Construct_UClass_UClearKey(); \
public: \
	DECLARE_CLASS(UClearKey, UBTTaskNode, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UClearKey) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_AI_ClearKey_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUClearKey(); \
	friend FPS_API class UClass* Z_Construct_UClass_UClearKey(); \
public: \
	DECLARE_CLASS(UClearKey, UBTTaskNode, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UClearKey) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_AI_ClearKey_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClearKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClearKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClearKey); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClearKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClearKey(UClearKey&&); \
	NO_API UClearKey(const UClearKey&); \
public:


#define FPS_Source_FPS_AI_ClearKey_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClearKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClearKey(UClearKey&&); \
	NO_API UClearKey(const UClearKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClearKey); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClearKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClearKey)


#define FPS_Source_FPS_AI_ClearKey_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_KeyToClear() { return STRUCT_OFFSET(UClearKey, m_KeyToClear); }


#define FPS_Source_FPS_AI_ClearKey_h_12_PROLOG
#define FPS_Source_FPS_AI_ClearKey_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_AI_ClearKey_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_AI_ClearKey_h_15_RPC_WRAPPERS \
	FPS_Source_FPS_AI_ClearKey_h_15_INCLASS \
	FPS_Source_FPS_AI_ClearKey_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_AI_ClearKey_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_AI_ClearKey_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_AI_ClearKey_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_AI_ClearKey_h_15_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_AI_ClearKey_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_AI_ClearKey_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
