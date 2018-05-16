// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_BaseWeapon_generated_h
#error "BaseWeapon.generated.h already included, missing '#pragma once' in BaseWeapon.h"
#endif
#define FPS_BaseWeapon_generated_h

#define FPS_Source_FPS_BaseWeapon_h_24_DELEGATE \
struct BaseWeapon_eventAmmoChanged_Parms \
{ \
	int32 AmmoInClip; \
	int32 AmmoOutOfClip; \
}; \
static inline void FAmmoChanged_DelegateWrapper(const FMulticastScriptDelegate& AmmoChanged, int32 AmmoInClip, int32 AmmoOutOfClip) \
{ \
	BaseWeapon_eventAmmoChanged_Parms Parms; \
	Parms.AmmoInClip=AmmoInClip; \
	Parms.AmmoOutOfClip=AmmoOutOfClip; \
	AmmoChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FPS_Source_FPS_BaseWeapon_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAmmoUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAmmoUpdate(); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_BaseWeapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAmmoUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAmmoUpdate(); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_BaseWeapon_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseWeapon(); \
	friend FPS_API class UClass* Z_Construct_UClass_UBaseWeapon(); \
public: \
	DECLARE_CLASS(UBaseWeapon, USkeletalMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UBaseWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_BaseWeapon_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBaseWeapon(); \
	friend FPS_API class UClass* Z_Construct_UClass_UBaseWeapon(); \
public: \
	DECLARE_CLASS(UBaseWeapon, USkeletalMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UBaseWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_BaseWeapon_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseWeapon(UBaseWeapon&&); \
	NO_API UBaseWeapon(const UBaseWeapon&); \
public:


#define FPS_Source_FPS_BaseWeapon_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseWeapon(UBaseWeapon&&); \
	NO_API UBaseWeapon(const UBaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseWeapon)


#define FPS_Source_FPS_BaseWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnAmmoChange() { return STRUCT_OFFSET(UBaseWeapon, OnAmmoChange); }


#define FPS_Source_FPS_BaseWeapon_h_19_PROLOG
#define FPS_Source_FPS_BaseWeapon_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_BaseWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_BaseWeapon_h_22_RPC_WRAPPERS \
	FPS_Source_FPS_BaseWeapon_h_22_INCLASS \
	FPS_Source_FPS_BaseWeapon_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_BaseWeapon_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_BaseWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_BaseWeapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_BaseWeapon_h_22_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_BaseWeapon_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_BaseWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
