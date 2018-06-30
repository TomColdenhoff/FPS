// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_AimTowardsTarget_generated_h
#error "AimTowardsTarget.generated.h already included, missing '#pragma once' in AimTowardsTarget.h"
#endif
#define FPS_AimTowardsTarget_generated_h

#define FPS_Source_FPS_AI_AimTowardsTarget_h_15_RPC_WRAPPERS
#define FPS_Source_FPS_AI_AimTowardsTarget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_AI_AimTowardsTarget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAimTowardsTarget(); \
	friend FPS_API class UClass* Z_Construct_UClass_UAimTowardsTarget(); \
public: \
	DECLARE_CLASS(UAimTowardsTarget, UBTTaskNode, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UAimTowardsTarget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_AI_AimTowardsTarget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAimTowardsTarget(); \
	friend FPS_API class UClass* Z_Construct_UClass_UAimTowardsTarget(); \
public: \
	DECLARE_CLASS(UAimTowardsTarget, UBTTaskNode, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UAimTowardsTarget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_AI_AimTowardsTarget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAimTowardsTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimTowardsTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimTowardsTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimTowardsTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimTowardsTarget(UAimTowardsTarget&&); \
	NO_API UAimTowardsTarget(const UAimTowardsTarget&); \
public:


#define FPS_Source_FPS_AI_AimTowardsTarget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAimTowardsTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimTowardsTarget(UAimTowardsTarget&&); \
	NO_API UAimTowardsTarget(const UAimTowardsTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimTowardsTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimTowardsTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimTowardsTarget)


#define FPS_Source_FPS_AI_AimTowardsTarget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Target() { return STRUCT_OFFSET(UAimTowardsTarget, m_Target); }


#define FPS_Source_FPS_AI_AimTowardsTarget_h_12_PROLOG
#define FPS_Source_FPS_AI_AimTowardsTarget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_AI_AimTowardsTarget_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_AI_AimTowardsTarget_h_15_RPC_WRAPPERS \
	FPS_Source_FPS_AI_AimTowardsTarget_h_15_INCLASS \
	FPS_Source_FPS_AI_AimTowardsTarget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_AI_AimTowardsTarget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_AI_AimTowardsTarget_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_AI_AimTowardsTarget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_AI_AimTowardsTarget_h_15_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_AI_AimTowardsTarget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_AI_AimTowardsTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
