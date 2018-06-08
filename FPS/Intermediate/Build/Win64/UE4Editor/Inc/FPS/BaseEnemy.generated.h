// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define FPS_BaseEnemy_generated_h

#define FPS_Source_FPS_Public_AI_BaseEnemy_h_15_DELEGATE \
static inline void FGunFireDelegate_DelegateWrapper(const FMulticastScriptDelegate& GunFireDelegate) \
{ \
	GunFireDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FPS_Source_FPS_Public_AI_BaseEnemy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsAiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsAiming(); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_Public_AI_BaseEnemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsAiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsAiming(); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_Public_AI_BaseEnemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend FPS_API class UClass* Z_Construct_UClass_ABaseEnemy(); \
public: \
	DECLARE_CLASS(ABaseEnemy, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ABaseEnemy*>(this); }


#define FPS_Source_FPS_Public_AI_BaseEnemy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend FPS_API class UClass* Z_Construct_UClass_ABaseEnemy(); \
public: \
	DECLARE_CLASS(ABaseEnemy, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ABaseEnemy*>(this); }


#define FPS_Source_FPS_Public_AI_BaseEnemy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public:


#define FPS_Source_FPS_Public_AI_BaseEnemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy)


#define FPS_Source_FPS_Public_AI_BaseEnemy_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ABaseEnemy, Health); } \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(ABaseEnemy, FireRate); } \
	FORCEINLINE static uint32 __PPO__BulletDamage() { return STRUCT_OFFSET(ABaseEnemy, BulletDamage); } \
	FORCEINLINE static uint32 __PPO__bFollowsWaypointPath() { return STRUCT_OFFSET(ABaseEnemy, bFollowsWaypointPath); } \
	FORCEINLINE static uint32 __PPO__PawnSensingComponent() { return STRUCT_OFFSET(ABaseEnemy, PawnSensingComponent); } \
	FORCEINLINE static uint32 __PPO__BehaviourTree() { return STRUCT_OFFSET(ABaseEnemy, BehaviourTree); } \
	FORCEINLINE static uint32 __PPO__Blackboard() { return STRUCT_OFFSET(ABaseEnemy, Blackboard); } \
	FORCEINLINE static uint32 __PPO__p_AudioComponent() { return STRUCT_OFFSET(ABaseEnemy, p_AudioComponent); }


#define FPS_Source_FPS_Public_AI_BaseEnemy_h_10_PROLOG
#define FPS_Source_FPS_Public_AI_BaseEnemy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AI_BaseEnemy_h_13_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AI_BaseEnemy_h_13_RPC_WRAPPERS \
	FPS_Source_FPS_Public_AI_BaseEnemy_h_13_INCLASS \
	FPS_Source_FPS_Public_AI_BaseEnemy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AI_BaseEnemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AI_BaseEnemy_h_13_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AI_BaseEnemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AI_BaseEnemy_h_13_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AI_BaseEnemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_AI_BaseEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
