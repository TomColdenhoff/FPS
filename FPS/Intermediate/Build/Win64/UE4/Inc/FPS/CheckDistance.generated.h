// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_CheckDistance_generated_h
#error "CheckDistance.generated.h already included, missing '#pragma once' in CheckDistance.h"
#endif
#define FPS_CheckDistance_generated_h

#define FPS_Source_FPS_AI_CheckDistance_h_15_RPC_WRAPPERS
#define FPS_Source_FPS_AI_CheckDistance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_AI_CheckDistance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckDistance(); \
	friend FPS_API class UClass* Z_Construct_UClass_UCheckDistance(); \
public: \
	DECLARE_CLASS(UCheckDistance, UBTService, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UCheckDistance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_AI_CheckDistance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCheckDistance(); \
	friend FPS_API class UClass* Z_Construct_UClass_UCheckDistance(); \
public: \
	DECLARE_CLASS(UCheckDistance, UBTService, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UCheckDistance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_AI_CheckDistance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckDistance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckDistance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckDistance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckDistance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckDistance(UCheckDistance&&); \
	NO_API UCheckDistance(const UCheckDistance&); \
public:


#define FPS_Source_FPS_AI_CheckDistance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckDistance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckDistance(UCheckDistance&&); \
	NO_API UCheckDistance(const UCheckDistance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckDistance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckDistance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckDistance)


#define FPS_Source_FPS_AI_CheckDistance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_TargetKey() { return STRUCT_OFFSET(UCheckDistance, m_TargetKey); } \
	FORCEINLINE static uint32 __PPO__m_ToFarKey() { return STRUCT_OFFSET(UCheckDistance, m_ToFarKey); } \
	FORCEINLINE static uint32 __PPO__m_ToCloseKey() { return STRUCT_OFFSET(UCheckDistance, m_ToCloseKey); }


#define FPS_Source_FPS_AI_CheckDistance_h_12_PROLOG
#define FPS_Source_FPS_AI_CheckDistance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_AI_CheckDistance_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_AI_CheckDistance_h_15_RPC_WRAPPERS \
	FPS_Source_FPS_AI_CheckDistance_h_15_INCLASS \
	FPS_Source_FPS_AI_CheckDistance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_AI_CheckDistance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_AI_CheckDistance_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_AI_CheckDistance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_AI_CheckDistance_h_15_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_AI_CheckDistance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_AI_CheckDistance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
