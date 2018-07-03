// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_CollectItem_generated_h
#error "CollectItem.generated.h already included, missing '#pragma once' in CollectItem.h"
#endif
#define FPS_CollectItem_generated_h

#define FPS_Source_FPS_Tasks_CollectItem_h_16_RPC_WRAPPERS
#define FPS_Source_FPS_Tasks_CollectItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Tasks_CollectItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollectItem(); \
	friend FPS_API class UClass* Z_Construct_UClass_UCollectItem(); \
public: \
	DECLARE_CLASS(UCollectItem, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UCollectItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCollectItem*>(this); }


#define FPS_Source_FPS_Tasks_CollectItem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCollectItem(); \
	friend FPS_API class UClass* Z_Construct_UClass_UCollectItem(); \
public: \
	DECLARE_CLASS(UCollectItem, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UCollectItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCollectItem*>(this); }


#define FPS_Source_FPS_Tasks_CollectItem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollectItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollectItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollectItem(UCollectItem&&); \
	NO_API UCollectItem(const UCollectItem&); \
public:


#define FPS_Source_FPS_Tasks_CollectItem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollectItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollectItem(UCollectItem&&); \
	NO_API UCollectItem(const UCollectItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollectItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectItem)


#define FPS_Source_FPS_Tasks_CollectItem_h_16_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Tasks_CollectItem_h_13_PROLOG
#define FPS_Source_FPS_Tasks_CollectItem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Tasks_CollectItem_h_16_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Tasks_CollectItem_h_16_RPC_WRAPPERS \
	FPS_Source_FPS_Tasks_CollectItem_h_16_INCLASS \
	FPS_Source_FPS_Tasks_CollectItem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Tasks_CollectItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Tasks_CollectItem_h_16_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Tasks_CollectItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Tasks_CollectItem_h_16_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Tasks_CollectItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Tasks_CollectItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
