// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_GameData_generated_h
#error "GameData.generated.h already included, missing '#pragma once' in GameData.h"
#endif
#define FPS_GameData_generated_h

#define FPS_Source_FPS_Public_GameData_h_16_RPC_WRAPPERS
#define FPS_Source_FPS_Public_GameData_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Public_GameData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameData(); \
	friend FPS_API class UClass* Z_Construct_UClass_UGameData(); \
public: \
	DECLARE_CLASS(UGameData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGameData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Public_GameData_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGameData(); \
	friend FPS_API class UClass* Z_Construct_UClass_UGameData(); \
public: \
	DECLARE_CLASS(UGameData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGameData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Public_GameData_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameData(UGameData&&); \
	NO_API UGameData(const UGameData&); \
public:


#define FPS_Source_FPS_Public_GameData_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameData(UGameData&&); \
	NO_API UGameData(const UGameData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameData)


#define FPS_Source_FPS_Public_GameData_h_16_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_GameData_h_13_PROLOG
#define FPS_Source_FPS_Public_GameData_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_GameData_h_16_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_GameData_h_16_RPC_WRAPPERS \
	FPS_Source_FPS_Public_GameData_h_16_INCLASS \
	FPS_Source_FPS_Public_GameData_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_GameData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_GameData_h_16_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_GameData_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_GameData_h_16_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_GameData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_GameData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
