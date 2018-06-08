// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_HitAble_generated_h
#error "HitAble.generated.h already included, missing '#pragma once' in HitAble.h"
#endif
#define FPS_HitAble_generated_h

#define FPS_Source_FPS_Public_AI_HitAble_h_13_RPC_WRAPPERS
#define FPS_Source_FPS_Public_AI_HitAble_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Public_AI_HitAble_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPS_API UHitAble(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitAble) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPS_API, UHitAble); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitAble); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPS_API UHitAble(UHitAble&&); \
	FPS_API UHitAble(const UHitAble&); \
public:


#define FPS_Source_FPS_Public_AI_HitAble_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPS_API UHitAble(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPS_API UHitAble(UHitAble&&); \
	FPS_API UHitAble(const UHitAble&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPS_API, UHitAble); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitAble); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitAble)


#define FPS_Source_FPS_Public_AI_HitAble_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHitAble(); \
	friend FPS_API class UClass* Z_Construct_UClass_UHitAble(); \
public: \
	DECLARE_CLASS(UHitAble, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/FPS"), FPS_API) \
	DECLARE_SERIALIZER(UHitAble) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Public_AI_HitAble_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FPS_Source_FPS_Public_AI_HitAble_h_13_GENERATED_UINTERFACE_BODY() \
	FPS_Source_FPS_Public_AI_HitAble_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AI_HitAble_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FPS_Source_FPS_Public_AI_HitAble_h_13_GENERATED_UINTERFACE_BODY() \
	FPS_Source_FPS_Public_AI_HitAble_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AI_HitAble_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHitAble() {} \
public: \
	typedef UHitAble UClassType; \
	typedef IHitAble ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FPS_Source_FPS_Public_AI_HitAble_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IHitAble() {} \
public: \
	typedef UHitAble UClassType; \
	typedef IHitAble ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FPS_Source_FPS_Public_AI_HitAble_h_10_PROLOG
#define FPS_Source_FPS_Public_AI_HitAble_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AI_HitAble_h_13_RPC_WRAPPERS \
	FPS_Source_FPS_Public_AI_HitAble_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AI_HitAble_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AI_HitAble_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AI_HitAble_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_AI_HitAble_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
