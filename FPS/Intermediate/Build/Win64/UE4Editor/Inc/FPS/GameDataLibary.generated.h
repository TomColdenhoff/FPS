// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameData;
#ifdef FPS_GameDataLibary_generated_h
#error "GameDataLibary.generated.h already included, missing '#pragma once' in GameDataLibary.h"
#endif
#define FPS_GameDataLibary_generated_h

#define FPS_Source_FPS_Public_GameDataLibary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameData) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameData**)Z_Param__Result=UGameDataLibary::GetGameData(Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_Public_GameDataLibary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameData) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameData**)Z_Param__Result=UGameDataLibary::GetGameData(Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_Public_GameDataLibary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameDataLibary(); \
	friend FPS_API class UClass* Z_Construct_UClass_UGameDataLibary(); \
public: \
	DECLARE_CLASS(UGameDataLibary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGameDataLibary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Public_GameDataLibary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGameDataLibary(); \
	friend FPS_API class UClass* Z_Construct_UClass_UGameDataLibary(); \
public: \
	DECLARE_CLASS(UGameDataLibary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGameDataLibary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Public_GameDataLibary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameDataLibary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameDataLibary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameDataLibary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameDataLibary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameDataLibary(UGameDataLibary&&); \
	NO_API UGameDataLibary(const UGameDataLibary&); \
public:


#define FPS_Source_FPS_Public_GameDataLibary_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameDataLibary(UGameDataLibary&&); \
	NO_API UGameDataLibary(const UGameDataLibary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameDataLibary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameDataLibary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameDataLibary)


#define FPS_Source_FPS_Public_GameDataLibary_h_16_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_GameDataLibary_h_13_PROLOG
#define FPS_Source_FPS_Public_GameDataLibary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_GameDataLibary_h_16_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_GameDataLibary_h_16_RPC_WRAPPERS \
	FPS_Source_FPS_Public_GameDataLibary_h_16_INCLASS \
	FPS_Source_FPS_Public_GameDataLibary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_GameDataLibary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_GameDataLibary_h_16_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_GameDataLibary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_GameDataLibary_h_16_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_GameDataLibary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_GameDataLibary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
