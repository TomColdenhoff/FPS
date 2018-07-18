// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_ReachPosition_generated_h
#error "ReachPosition.generated.h already included, missing '#pragma once' in ReachPosition.h"
#endif
#define FPS_ReachPosition_generated_h

#define FPS_Source_FPS_Tasks_ReachPosition_h_13_RPC_WRAPPERS
#define FPS_Source_FPS_Tasks_ReachPosition_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Tasks_ReachPosition_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReachPosition(); \
	friend FPS_API class UClass* Z_Construct_UClass_AReachPosition(); \
public: \
	DECLARE_CLASS(AReachPosition, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AReachPosition) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AReachPosition*>(this); }


#define FPS_Source_FPS_Tasks_ReachPosition_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAReachPosition(); \
	friend FPS_API class UClass* Z_Construct_UClass_AReachPosition(); \
public: \
	DECLARE_CLASS(AReachPosition, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AReachPosition) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AReachPosition*>(this); }


#define FPS_Source_FPS_Tasks_ReachPosition_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReachPosition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReachPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReachPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReachPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReachPosition(AReachPosition&&); \
	NO_API AReachPosition(const AReachPosition&); \
public:


#define FPS_Source_FPS_Tasks_ReachPosition_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReachPosition(AReachPosition&&); \
	NO_API AReachPosition(const AReachPosition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReachPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReachPosition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReachPosition)


#define FPS_Source_FPS_Tasks_ReachPosition_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__p_BeginBehaviour() { return STRUCT_OFFSET(AReachPosition, p_BeginBehaviour); } \
	FORCEINLINE static uint32 __PPO__p_EndBehaviour() { return STRUCT_OFFSET(AReachPosition, p_EndBehaviour); } \
	FORCEINLINE static uint32 __PPO__m_TaskText() { return STRUCT_OFFSET(AReachPosition, m_TaskText); } \
	FORCEINLINE static uint32 __PPO__p_Destination() { return STRUCT_OFFSET(AReachPosition, p_Destination); } \
	FORCEINLINE static uint32 __PPO__m_AcceptanceDistance() { return STRUCT_OFFSET(AReachPosition, m_AcceptanceDistance); }


#define FPS_Source_FPS_Tasks_ReachPosition_h_10_PROLOG
#define FPS_Source_FPS_Tasks_ReachPosition_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Tasks_ReachPosition_h_13_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Tasks_ReachPosition_h_13_RPC_WRAPPERS \
	FPS_Source_FPS_Tasks_ReachPosition_h_13_INCLASS \
	FPS_Source_FPS_Tasks_ReachPosition_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Tasks_ReachPosition_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Tasks_ReachPosition_h_13_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Tasks_ReachPosition_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Tasks_ReachPosition_h_13_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Tasks_ReachPosition_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Tasks_ReachPosition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
