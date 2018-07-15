// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_ActivateActors_generated_h
#error "ActivateActors.generated.h already included, missing '#pragma once' in ActivateActors.h"
#endif
#define FPS_ActivateActors_generated_h

#define FPS_Source_FPS_Tasks_ActivateActors_h_13_RPC_WRAPPERS
#define FPS_Source_FPS_Tasks_ActivateActors_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Tasks_ActivateActors_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActivateActors(); \
	friend FPS_API class UClass* Z_Construct_UClass_AActivateActors(); \
public: \
	DECLARE_CLASS(AActivateActors, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AActivateActors) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AActivateActors*>(this); }


#define FPS_Source_FPS_Tasks_ActivateActors_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAActivateActors(); \
	friend FPS_API class UClass* Z_Construct_UClass_AActivateActors(); \
public: \
	DECLARE_CLASS(AActivateActors, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AActivateActors) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AActivateActors*>(this); }


#define FPS_Source_FPS_Tasks_ActivateActors_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActivateActors(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActivateActors) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActivateActors); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActivateActors); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActivateActors(AActivateActors&&); \
	NO_API AActivateActors(const AActivateActors&); \
public:


#define FPS_Source_FPS_Tasks_ActivateActors_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActivateActors(AActivateActors&&); \
	NO_API AActivateActors(const AActivateActors&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActivateActors); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActivateActors); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActivateActors)


#define FPS_Source_FPS_Tasks_ActivateActors_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ActorsToDisable() { return STRUCT_OFFSET(AActivateActors, m_ActorsToDisable); } \
	FORCEINLINE static uint32 __PPO__m_ActorsToEnable() { return STRUCT_OFFSET(AActivateActors, m_ActorsToEnable); }


#define FPS_Source_FPS_Tasks_ActivateActors_h_10_PROLOG
#define FPS_Source_FPS_Tasks_ActivateActors_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Tasks_ActivateActors_h_13_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Tasks_ActivateActors_h_13_RPC_WRAPPERS \
	FPS_Source_FPS_Tasks_ActivateActors_h_13_INCLASS \
	FPS_Source_FPS_Tasks_ActivateActors_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Tasks_ActivateActors_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Tasks_ActivateActors_h_13_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Tasks_ActivateActors_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Tasks_ActivateActors_h_13_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Tasks_ActivateActors_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Tasks_ActivateActors_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
