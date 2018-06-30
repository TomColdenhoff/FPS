// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_Dummy_generated_h
#error "Dummy.generated.h already included, missing '#pragma once' in Dummy.h"
#endif
#define FPS_Dummy_generated_h

#define FPS_Source_FPS_Dummy_h_12_RPC_WRAPPERS
#define FPS_Source_FPS_Dummy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Dummy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADummy(); \
	friend FPS_API class UClass* Z_Construct_UClass_ADummy(); \
public: \
	DECLARE_CLASS(ADummy, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ADummy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Dummy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADummy(); \
	friend FPS_API class UClass* Z_Construct_UClass_ADummy(); \
public: \
	DECLARE_CLASS(ADummy, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ADummy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Dummy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADummy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADummy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADummy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADummy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADummy(ADummy&&); \
	NO_API ADummy(const ADummy&); \
public:


#define FPS_Source_FPS_Dummy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADummy(ADummy&&); \
	NO_API ADummy(const ADummy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADummy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADummy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADummy)


#define FPS_Source_FPS_Dummy_h_12_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Dummy_h_9_PROLOG
#define FPS_Source_FPS_Dummy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Dummy_h_12_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Dummy_h_12_RPC_WRAPPERS \
	FPS_Source_FPS_Dummy_h_12_INCLASS \
	FPS_Source_FPS_Dummy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Dummy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Dummy_h_12_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Dummy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Dummy_h_12_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Dummy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Dummy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
