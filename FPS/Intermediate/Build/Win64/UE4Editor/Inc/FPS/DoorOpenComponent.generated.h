// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_DoorOpenComponent_generated_h
#error "DoorOpenComponent.generated.h already included, missing '#pragma once' in DoorOpenComponent.h"
#endif
#define FPS_DoorOpenComponent_generated_h

#define FPS_Source_FPS_Level_DoorOpenComponent_h_14_RPC_WRAPPERS
#define FPS_Source_FPS_Level_DoorOpenComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Level_DoorOpenComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorOpenComponent(); \
	friend FPS_API class UClass* Z_Construct_UClass_UDoorOpenComponent(); \
public: \
	DECLARE_CLASS(UDoorOpenComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UDoorOpenComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDoorOpenComponent*>(this); }


#define FPS_Source_FPS_Level_DoorOpenComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDoorOpenComponent(); \
	friend FPS_API class UClass* Z_Construct_UClass_UDoorOpenComponent(); \
public: \
	DECLARE_CLASS(UDoorOpenComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UDoorOpenComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDoorOpenComponent*>(this); }


#define FPS_Source_FPS_Level_DoorOpenComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorOpenComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorOpenComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorOpenComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorOpenComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorOpenComponent(UDoorOpenComponent&&); \
	NO_API UDoorOpenComponent(const UDoorOpenComponent&); \
public:


#define FPS_Source_FPS_Level_DoorOpenComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorOpenComponent(UDoorOpenComponent&&); \
	NO_API UDoorOpenComponent(const UDoorOpenComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorOpenComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorOpenComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorOpenComponent)


#define FPS_Source_FPS_Level_DoorOpenComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_TargetOpenRotation() { return STRUCT_OFFSET(UDoorOpenComponent, m_TargetOpenRotation); } \
	FORCEINLINE static uint32 __PPO__m_OpenRate() { return STRUCT_OFFSET(UDoorOpenComponent, m_OpenRate); } \
	FORCEINLINE static uint32 __PPO__p_NeededActor() { return STRUCT_OFFSET(UDoorOpenComponent, p_NeededActor); }


#define FPS_Source_FPS_Level_DoorOpenComponent_h_11_PROLOG
#define FPS_Source_FPS_Level_DoorOpenComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Level_DoorOpenComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Level_DoorOpenComponent_h_14_RPC_WRAPPERS \
	FPS_Source_FPS_Level_DoorOpenComponent_h_14_INCLASS \
	FPS_Source_FPS_Level_DoorOpenComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Level_DoorOpenComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Level_DoorOpenComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Level_DoorOpenComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Level_DoorOpenComponent_h_14_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Level_DoorOpenComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Level_DoorOpenComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
