// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_ActivateActor_generated_h
#error "ActivateActor.generated.h already included, missing '#pragma once' in ActivateActor.h"
#endif
#define FPS_ActivateActor_generated_h

#define FPS_Source_FPS_Level_ActivateActor_h_14_RPC_WRAPPERS
#define FPS_Source_FPS_Level_ActivateActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Level_ActivateActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActivateActor(); \
	friend FPS_API class UClass* Z_Construct_UClass_UActivateActor(); \
public: \
	DECLARE_CLASS(UActivateActor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UActivateActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UActivateActor*>(this); }


#define FPS_Source_FPS_Level_ActivateActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActivateActor(); \
	friend FPS_API class UClass* Z_Construct_UClass_UActivateActor(); \
public: \
	DECLARE_CLASS(UActivateActor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UActivateActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UActivateActor*>(this); }


#define FPS_Source_FPS_Level_ActivateActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivateActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivateActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivateActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivateActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivateActor(UActivateActor&&); \
	NO_API UActivateActor(const UActivateActor&); \
public:


#define FPS_Source_FPS_Level_ActivateActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivateActor(UActivateActor&&); \
	NO_API UActivateActor(const UActivateActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivateActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivateActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActivateActor)


#define FPS_Source_FPS_Level_ActivateActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__p_ActivateBehaviour() { return STRUCT_OFFSET(UActivateActor, p_ActivateBehaviour); }


#define FPS_Source_FPS_Level_ActivateActor_h_11_PROLOG
#define FPS_Source_FPS_Level_ActivateActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Level_ActivateActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Level_ActivateActor_h_14_RPC_WRAPPERS \
	FPS_Source_FPS_Level_ActivateActor_h_14_INCLASS \
	FPS_Source_FPS_Level_ActivateActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Level_ActivateActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Level_ActivateActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Level_ActivateActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Level_ActivateActor_h_14_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Level_ActivateActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Level_ActivateActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
