// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIComponent;
#ifdef FPS_FPSPlayer_generated_h
#error "FPSPlayer.generated.h already included, missing '#pragma once' in FPSPlayer.h"
#endif
#define FPS_FPSPlayer_generated_h

#define FPS_Source_FPS_FPSPlayer_h_16_DELEGATE \
static inline void FOnNewWeapon_DelegateWrapper(const FMulticastScriptDelegate& OnNewWeapon) \
{ \
	OnNewWeapon.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FPS_Source_FPS_FPSPlayer_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearHands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearHands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUIComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUIComponent**)Z_Param__Result=P_THIS->GetUIComponent(); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_FPSPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearHands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearHands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUIComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUIComponent**)Z_Param__Result=P_THIS->GetUIComponent(); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_FPSPlayer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayer(); \
	friend FPS_API class UClass* Z_Construct_UClass_AFPSPlayer(); \
public: \
	DECLARE_CLASS(AFPSPlayer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AFPSPlayer*>(this); }


#define FPS_Source_FPS_FPSPlayer_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayer(); \
	friend FPS_API class UClass* Z_Construct_UClass_AFPSPlayer(); \
public: \
	DECLARE_CLASS(AFPSPlayer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AFPSPlayer*>(this); }


#define FPS_Source_FPS_FPSPlayer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayer(AFPSPlayer&&); \
	NO_API AFPSPlayer(const AFPSPlayer&); \
public:


#define FPS_Source_FPS_FPSPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayer(AFPSPlayer&&); \
	NO_API AFPSPlayer(const AFPSPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSPlayer)


#define FPS_Source_FPS_FPSPlayer_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_DefaultPlayerHUD() { return STRUCT_OFFSET(AFPSPlayer, m_DefaultPlayerHUD); } \
	FORCEINLINE static uint32 __PPO__m_CurrentHUD() { return STRUCT_OFFSET(AFPSPlayer, m_CurrentHUD); } \
	FORCEINLINE static uint32 __PPO__p_InteractionComponent() { return STRUCT_OFFSET(AFPSPlayer, p_InteractionComponent); } \
	FORCEINLINE static uint32 __PPO__p_UIComponent() { return STRUCT_OFFSET(AFPSPlayer, p_UIComponent); }


#define FPS_Source_FPS_FPSPlayer_h_11_PROLOG
#define FPS_Source_FPS_FPSPlayer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_FPSPlayer_h_14_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_FPSPlayer_h_14_RPC_WRAPPERS \
	FPS_Source_FPS_FPSPlayer_h_14_INCLASS \
	FPS_Source_FPS_FPSPlayer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_FPSPlayer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_FPSPlayer_h_14_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_FPSPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_FPSPlayer_h_14_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_FPSPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_FPSPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
