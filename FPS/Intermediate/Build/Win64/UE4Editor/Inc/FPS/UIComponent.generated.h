// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABasicPickup;
class UWidget;
#ifdef FPS_UIComponent_generated_h
#error "UIComponent.generated.h already included, missing '#pragma once' in UIComponent.h"
#endif
#define FPS_UIComponent_generated_h

#define FPS_Source_FPS_Player_UIComponent_h_16_DELEGATE \
struct _Script_FPS_eventUpdateOnGroundDelegate_Parms \
{ \
	TArray<ABasicPickup*> Items; \
}; \
static inline void FUpdateOnGroundDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateOnGroundDelegate, TArray<ABasicPickup*> const& Items) \
{ \
	_Script_FPS_eventUpdateOnGroundDelegate_Parms Parms; \
	Parms.Items=Items; \
	UpdateOnGroundDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FPS_Source_FPS_Player_UIComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDropToIventory) \
	{ \
		P_GET_OBJECT(ABasicPickup,Z_Param_Pickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropToIventory(Z_Param_Pickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_GET_TARRAY(UWidget*,Z_Param_GameUI); \
		P_GET_TARRAY(UWidget*,Z_Param_PauseUI); \
		P_GET_TARRAY(UWidget*,Z_Param_InventoryUI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialize(Z_Param_GameUI,Z_Param_PauseUI,Z_Param_InventoryUI); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_Player_UIComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDropToIventory) \
	{ \
		P_GET_OBJECT(ABasicPickup,Z_Param_Pickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropToIventory(Z_Param_Pickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_GET_TARRAY(UWidget*,Z_Param_GameUI); \
		P_GET_TARRAY(UWidget*,Z_Param_PauseUI); \
		P_GET_TARRAY(UWidget*,Z_Param_InventoryUI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialize(Z_Param_GameUI,Z_Param_PauseUI,Z_Param_InventoryUI); \
		P_NATIVE_END; \
	}


#define FPS_Source_FPS_Player_UIComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIComponent(); \
	friend FPS_API class UClass* Z_Construct_UClass_UUIComponent(); \
public: \
	DECLARE_CLASS(UUIComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UUIComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Player_UIComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUUIComponent(); \
	friend FPS_API class UClass* Z_Construct_UClass_UUIComponent(); \
public: \
	DECLARE_CLASS(UUIComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UUIComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Player_UIComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIComponent(UUIComponent&&); \
	NO_API UUIComponent(const UUIComponent&); \
public:


#define FPS_Source_FPS_Player_UIComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIComponent(UUIComponent&&); \
	NO_API UUIComponent(const UUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIComponent)


#define FPS_Source_FPS_Player_UIComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(UUIComponent, bDebug); } \
	FORCEINLINE static uint32 __PPO__m_SearchDistance() { return STRUCT_OFFSET(UUIComponent, m_SearchDistance); }


#define FPS_Source_FPS_Player_UIComponent_h_19_PROLOG
#define FPS_Source_FPS_Player_UIComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Player_UIComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Player_UIComponent_h_22_RPC_WRAPPERS \
	FPS_Source_FPS_Player_UIComponent_h_22_INCLASS \
	FPS_Source_FPS_Player_UIComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Player_UIComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Player_UIComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Player_UIComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Player_UIComponent_h_22_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Player_UIComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Player_UIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
