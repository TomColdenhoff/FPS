// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define FPS_OpenDoor_generated_h

#define FPS_Source_FPS_Tasks_OpenDoor_h_13_RPC_WRAPPERS
#define FPS_Source_FPS_Tasks_OpenDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Tasks_OpenDoor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOpenDoor(); \
	friend FPS_API class UClass* Z_Construct_UClass_AOpenDoor(); \
public: \
	DECLARE_CLASS(AOpenDoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AOpenDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AOpenDoor*>(this); }


#define FPS_Source_FPS_Tasks_OpenDoor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAOpenDoor(); \
	friend FPS_API class UClass* Z_Construct_UClass_AOpenDoor(); \
public: \
	DECLARE_CLASS(AOpenDoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AOpenDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AOpenDoor*>(this); }


#define FPS_Source_FPS_Tasks_OpenDoor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenDoor(AOpenDoor&&); \
	NO_API AOpenDoor(const AOpenDoor&); \
public:


#define FPS_Source_FPS_Tasks_OpenDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenDoor(AOpenDoor&&); \
	NO_API AOpenDoor(const AOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOpenDoor)


#define FPS_Source_FPS_Tasks_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__p_DoorToOpen() { return STRUCT_OFFSET(AOpenDoor, p_DoorToOpen); }


#define FPS_Source_FPS_Tasks_OpenDoor_h_10_PROLOG
#define FPS_Source_FPS_Tasks_OpenDoor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Tasks_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Tasks_OpenDoor_h_13_RPC_WRAPPERS \
	FPS_Source_FPS_Tasks_OpenDoor_h_13_INCLASS \
	FPS_Source_FPS_Tasks_OpenDoor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Tasks_OpenDoor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Tasks_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Tasks_OpenDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Tasks_OpenDoor_h_13_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Tasks_OpenDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Tasks_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
