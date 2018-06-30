// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_InteractAble_generated_h
#error "InteractAble.generated.h already included, missing '#pragma once' in InteractAble.h"
#endif
#define FPS_InteractAble_generated_h

#define FPS_Source_FPS_Level_InteractAble_h_13_RPC_WRAPPERS
#define FPS_Source_FPS_Level_InteractAble_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Level_InteractAble_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPS_API UInteractAble(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractAble) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPS_API, UInteractAble); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractAble); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPS_API UInteractAble(UInteractAble&&); \
	FPS_API UInteractAble(const UInteractAble&); \
public:


#define FPS_Source_FPS_Level_InteractAble_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPS_API UInteractAble(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPS_API UInteractAble(UInteractAble&&); \
	FPS_API UInteractAble(const UInteractAble&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPS_API, UInteractAble); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractAble); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractAble)


#define FPS_Source_FPS_Level_InteractAble_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractAble(); \
	friend FPS_API class UClass* Z_Construct_UClass_UInteractAble(); \
public: \
	DECLARE_CLASS(UInteractAble, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/FPS"), FPS_API) \
	DECLARE_SERIALIZER(UInteractAble) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Level_InteractAble_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FPS_Source_FPS_Level_InteractAble_h_13_GENERATED_UINTERFACE_BODY() \
	FPS_Source_FPS_Level_InteractAble_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Level_InteractAble_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FPS_Source_FPS_Level_InteractAble_h_13_GENERATED_UINTERFACE_BODY() \
	FPS_Source_FPS_Level_InteractAble_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Level_InteractAble_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractAble() {} \
public: \
	typedef UInteractAble UClassType; \
	typedef IInteractAble ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FPS_Source_FPS_Level_InteractAble_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractAble() {} \
public: \
	typedef UInteractAble UClassType; \
	typedef IInteractAble ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FPS_Source_FPS_Level_InteractAble_h_10_PROLOG
#define FPS_Source_FPS_Level_InteractAble_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Level_InteractAble_h_13_RPC_WRAPPERS \
	FPS_Source_FPS_Level_InteractAble_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Level_InteractAble_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Level_InteractAble_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Level_InteractAble_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Level_InteractAble_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
