// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
#ifdef FPS_AssualtCharacter_generated_h
#error "AssualtCharacter.generated.h already included, missing '#pragma once' in AssualtCharacter.h"
#endif
#define FPS_AssualtCharacter_generated_h

#define FPS_Source_FPS_AssualtCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHearNoise) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHearNoise(Z_Param_Pawn,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSeePlayer) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSeePlayer(Z_Param_Pawn); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_AssualtCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHearNoise) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHearNoise(Z_Param_Pawn,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSeePlayer) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSeePlayer(Z_Param_Pawn); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_AssualtCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssualtCharacter(); \
	friend FPS_API class UClass* Z_Construct_UClass_AAssualtCharacter(); \
public: \
	DECLARE_CLASS(AAssualtCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AAssualtCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_AssualtCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAssualtCharacter(); \
	friend FPS_API class UClass* Z_Construct_UClass_AAssualtCharacter(); \
public: \
	DECLARE_CLASS(AAssualtCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AAssualtCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_AssualtCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAssualtCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAssualtCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssualtCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssualtCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssualtCharacter(AAssualtCharacter&&); \
	NO_API AAssualtCharacter(const AAssualtCharacter&); \
public:


#define FPS_Source_FPS_AssualtCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssualtCharacter(AAssualtCharacter&&); \
	NO_API AAssualtCharacter(const AAssualtCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssualtCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssualtCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssualtCharacter)


#define FPS_Source_FPS_AssualtCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComponent() { return STRUCT_OFFSET(AAssualtCharacter, PawnSensingComponent); } \
	FORCEINLINE static uint32 __PPO__m_FollowPath() { return STRUCT_OFFSET(AAssualtCharacter, m_FollowPath); }


#define FPS_Source_FPS_AssualtCharacter_h_9_PROLOG
#define FPS_Source_FPS_AssualtCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_AssualtCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_AssualtCharacter_h_12_RPC_WRAPPERS \
	FPS_Source_FPS_AssualtCharacter_h_12_INCLASS \
	FPS_Source_FPS_AssualtCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_AssualtCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_AssualtCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_AssualtCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_AssualtCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_AssualtCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_AssualtCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
