// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UActorComponent;
class AActor;
#ifdef CSWUTILITIES_CSWBlueprintUtilities_generated_h
#error "CSWBlueprintUtilities.generated.h already included, missing '#pragma once' in CSWBlueprintUtilities.h"
#endif
#define CSWUTILITIES_CSWBlueprintUtilities_generated_h

#define PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllActorsWithComponent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Component); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_OutActorComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCSWBlueprintUtilities::GetAllActorsWithComponent(Z_Param_WorldContextObject,Z_Param_Component,Z_Param_Out_OutActors,Z_Param_Out_OutActorComponents); \
		P_NATIVE_END; \
	}


#define PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllActorsWithComponent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Component); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_OutActorComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCSWBlueprintUtilities::GetAllActorsWithComponent(Z_Param_WorldContextObject,Z_Param_Component,Z_Param_Out_OutActors,Z_Param_Out_OutActorComponents); \
		P_NATIVE_END; \
	}


#define PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSWBlueprintUtilities(); \
	friend CSWUTILITIES_API class UClass* Z_Construct_UClass_UCSWBlueprintUtilities(); \
public: \
	DECLARE_CLASS(UCSWBlueprintUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CSWUtilities"), NO_API) \
	DECLARE_SERIALIZER(UCSWBlueprintUtilities) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCSWBlueprintUtilities(); \
	friend CSWUTILITIES_API class UClass* Z_Construct_UClass_UCSWBlueprintUtilities(); \
public: \
	DECLARE_CLASS(UCSWBlueprintUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CSWUtilities"), NO_API) \
	DECLARE_SERIALIZER(UCSWBlueprintUtilities) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSWBlueprintUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSWBlueprintUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSWBlueprintUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSWBlueprintUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSWBlueprintUtilities(UCSWBlueprintUtilities&&); \
	NO_API UCSWBlueprintUtilities(const UCSWBlueprintUtilities&); \
public:


#define PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSWBlueprintUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSWBlueprintUtilities(UCSWBlueprintUtilities&&); \
	NO_API UCSWBlueprintUtilities(const UCSWBlueprintUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSWBlueprintUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSWBlueprintUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSWBlueprintUtilities)


#define PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_PRIVATE_PROPERTY_OFFSET
#define PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_12_PROLOG
#define PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_PRIVATE_PROPERTY_OFFSET \
	PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_RPC_WRAPPERS \
	PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_INCLASS \
	PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_PRIVATE_PROPERTY_OFFSET \
	PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_INCLASS_NO_PURE_DECLS \
	PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginEditor_Source_CSWUtilities_Public_CSWBlueprintUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
