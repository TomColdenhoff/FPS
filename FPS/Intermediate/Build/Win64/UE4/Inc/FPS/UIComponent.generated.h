// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABasicPickup;
struct FVector2D;
class UTexture2D;
class AHoldAblePickUp;
class UWidget;
#ifdef FPS_UIComponent_generated_h
#error "UIComponent.generated.h already included, missing '#pragma once' in UIComponent.h"
#endif
#define FPS_UIComponent_generated_h

#define FPS_Source_FPS_Player_UIComponent_h_36_GENERATED_BODY \
	friend FPS_API class UScriptStruct* Z_Construct_UScriptStruct_FCollum(); \
	FPS_API static class UScriptStruct* StaticStruct();


#define FPS_Source_FPS_Player_UIComponent_h_20_GENERATED_BODY \
	friend FPS_API class UScriptStruct* Z_Construct_UScriptStruct_FSlotImage(); \
	FPS_API static class UScriptStruct* StaticStruct();


#define FPS_Source_FPS_Player_UIComponent_h_45_DELEGATE \
static inline void FClearHandSlot_DelegateWrapper(const FMulticastScriptDelegate& ClearHandSlot) \
{ \
	ClearHandSlot.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FPS_Source_FPS_Player_UIComponent_h_44_DELEGATE \
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


#define FPS_Source_FPS_Player_UIComponent_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInventoryItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABasicPickup**)Z_Param__Result=P_THIS->GetInventoryItem(Z_Param_Row,Z_Param_Collum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAvailable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_GET_STRUCT(FVector2D,Z_Param_GridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAvailable(Z_Param_Row,Z_Param_Collum,Z_Param_GridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetImage) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_GET_STRUCT(FVector2D,Z_Param_GridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetImage(Z_Param_Texture,Z_Param_Row,Z_Param_Collum,Z_Param_GridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlotImage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_GET_OBJECT(ABasicPickup,Z_Param_Pickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSlotImage(Z_Param_Row,Z_Param_Collum,Z_Param_Pickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetImage) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_GET_STRUCT(FVector2D,Z_Param_GridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetImage(Z_Param_Texture,Z_Param_Row,Z_Param_Collum,Z_Param_GridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideImageGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideImageGrid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropItem) \
	{ \
		P_GET_OBJECT(ABasicPickup,Z_Param_Pickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropItem(Z_Param_Pickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromInventory) \
	{ \
		P_GET_OBJECT(ABasicPickup,Z_Param_Pickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromInventory(Z_Param_Pickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropToHands) \
	{ \
		P_GET_OBJECT(AHoldAblePickUp,Z_Param_Pickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropToHands(Z_Param_Pickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropToIventory) \
	{ \
		P_GET_OBJECT(ABasicPickup,Z_Param_Pickup); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropToIventory(Z_Param_Pickup,Z_Param_Row,Z_Param_Collum); \
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


#define FPS_Source_FPS_Player_UIComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventoryItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABasicPickup**)Z_Param__Result=P_THIS->GetInventoryItem(Z_Param_Row,Z_Param_Collum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAvailable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_GET_STRUCT(FVector2D,Z_Param_GridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAvailable(Z_Param_Row,Z_Param_Collum,Z_Param_GridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetImage) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_GET_STRUCT(FVector2D,Z_Param_GridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetImage(Z_Param_Texture,Z_Param_Row,Z_Param_Collum,Z_Param_GridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlotImage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_GET_OBJECT(ABasicPickup,Z_Param_Pickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSlotImage(Z_Param_Row,Z_Param_Collum,Z_Param_Pickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetImage) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_GET_STRUCT(FVector2D,Z_Param_GridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetImage(Z_Param_Texture,Z_Param_Row,Z_Param_Collum,Z_Param_GridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideImageGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideImageGrid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropItem) \
	{ \
		P_GET_OBJECT(ABasicPickup,Z_Param_Pickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropItem(Z_Param_Pickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromInventory) \
	{ \
		P_GET_OBJECT(ABasicPickup,Z_Param_Pickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromInventory(Z_Param_Pickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropToHands) \
	{ \
		P_GET_OBJECT(AHoldAblePickUp,Z_Param_Pickup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropToHands(Z_Param_Pickup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropToIventory) \
	{ \
		P_GET_OBJECT(ABasicPickup,Z_Param_Pickup); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Row); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Collum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropToIventory(Z_Param_Pickup,Z_Param_Row,Z_Param_Collum); \
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


#define FPS_Source_FPS_Player_UIComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIComponent(); \
	friend FPS_API class UClass* Z_Construct_UClass_UUIComponent(); \
public: \
	DECLARE_CLASS(UUIComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UUIComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Player_UIComponent_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUUIComponent(); \
	friend FPS_API class UClass* Z_Construct_UClass_UUIComponent(); \
public: \
	DECLARE_CLASS(UUIComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UUIComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_Player_UIComponent_h_51_STANDARD_CONSTRUCTORS \
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


#define FPS_Source_FPS_Player_UIComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIComponent(UUIComponent&&); \
	NO_API UUIComponent(const UUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIComponent)


#define FPS_Source_FPS_Player_UIComponent_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(UUIComponent, bDebug); } \
	FORCEINLINE static uint32 __PPO__m_SearchDistance() { return STRUCT_OFFSET(UUIComponent, m_SearchDistance); } \
	FORCEINLINE static uint32 __PPO__m_DefaultImage() { return STRUCT_OFFSET(UUIComponent, m_DefaultImage); }


#define FPS_Source_FPS_Player_UIComponent_h_48_PROLOG
#define FPS_Source_FPS_Player_UIComponent_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Player_UIComponent_h_51_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Player_UIComponent_h_51_RPC_WRAPPERS \
	FPS_Source_FPS_Player_UIComponent_h_51_INCLASS \
	FPS_Source_FPS_Player_UIComponent_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Player_UIComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Player_UIComponent_h_51_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Player_UIComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Player_UIComponent_h_51_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Player_UIComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Player_UIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
