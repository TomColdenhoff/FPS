// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FPSPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayer() {}
// Cross Module References
	FPS_API UFunction* Z_Construct_UDelegateFunction_AFPSPlayer_OnNewWeapon__DelegateSignature();
	FPS_API UClass* Z_Construct_UClass_AFPSPlayer();
	FPS_API UClass* Z_Construct_UClass_AFPSPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UFunction* Z_Construct_UFunction_AFPSPlayer_GetUIComponent();
	FPS_API UClass* Z_Construct_UClass_UUIComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UInteraction_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPS_API UClass* Z_Construct_UClass_UBaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UHitAble_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AFPSPlayer_OnNewWeapon__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayer, "OnNewWeapon__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void AFPSPlayer::StaticRegisterNativesAFPSPlayer()
	{
		UClass* Class = AFPSPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUIComponent", &AFPSPlayer::execGetUIComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AFPSPlayer_GetUIComponent()
	{
		struct FPSPlayer_eventGetUIComponent_Parms
		{
			UUIComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FPSPlayer_eventGetUIComponent_Parms, ReturnValue), Z_Construct_UClass_UUIComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayer, "GetUIComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FPSPlayer_eventGetUIComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSPlayer_NoRegister()
	{
		return AFPSPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AFPSPlayer_GetUIComponent, "GetUIComponent" }, // 1216462810
				{ &Z_Construct_UDelegateFunction_AFPSPlayer_OnNewWeapon__DelegateSignature, "OnNewWeapon__DelegateSignature" }, // 3685928248
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "FPSPlayer.h" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_UIComponent_MetaData[] = {
				{ "Category", "FPSPlayer" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_UIComponent = { UE4CodeGen_Private::EPropertyClass::Object, "p_UIComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AFPSPlayer, p_UIComponent), Z_Construct_UClass_UUIComponent_NoRegister, METADATA_PARAMS(NewProp_p_UIComponent_MetaData, ARRAY_COUNT(NewProp_p_UIComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_InteractionComponent_MetaData[] = {
				{ "Category", "FPSPlayer" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_InteractionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "p_InteractionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AFPSPlayer, p_InteractionComponent), Z_Construct_UClass_UInteraction_NoRegister, METADATA_PARAMS(NewProp_p_InteractionComponent_MetaData, ARRAY_COUNT(NewProp_p_InteractionComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentHUD_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CurrentHUD = { UE4CodeGen_Private::EPropertyClass::Object, "m_CurrentHUD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFPSPlayer, m_CurrentHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_m_CurrentHUD_MetaData, ARRAY_COUNT(NewProp_m_CurrentHUD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DefaultPlayerHUD_MetaData[] = {
				{ "Category", "HUD" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_DefaultPlayerHUD = { UE4CodeGen_Private::EPropertyClass::Class, "m_DefaultPlayerHUD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AFPSPlayer, m_DefaultPlayerHUD), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_m_DefaultPlayerHUD_MetaData, ARRAY_COUNT(NewProp_m_DefaultPlayerHUD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
				{ "Category", "Player" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AFPSPlayer, CurrentWeapon), Z_Construct_UClass_UBaseWeapon_NoRegister, METADATA_PARAMS(NewProp_CurrentWeapon_MetaData, ARRAY_COUNT(NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReloading_MetaData[] = {
				{ "Category", "Player State" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
			auto NewProp_IsReloading_SetBit = [](void* Obj){ ((AFPSPlayer*)Obj)->IsReloading = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReloading = { UE4CodeGen_Private::EPropertyClass::Bool, "IsReloading", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFPSPlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsReloading_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsReloading_MetaData, ARRAY_COUNT(NewProp_IsReloading_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponMesh_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeaponMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWeaponMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AFPSPlayer, CurrentWeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_CurrentWeaponMesh_MetaData, ARRAY_COUNT(NewProp_CurrentWeaponMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
				{ "Category", "FPSPlayer" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AFPSPlayer, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComponent_MetaData, ARRAY_COUNT(NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewWeaponUpdate_MetaData[] = {
				{ "ModuleRelativePath", "FPSPlayer.h" },
				{ "ToolTip", "Event when new weapon is attached to player" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewWeaponUpdate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "NewWeaponUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFPSPlayer, NewWeaponUpdate), Z_Construct_UDelegateFunction_AFPSPlayer_OnNewWeapon__DelegateSignature, METADATA_PARAMS(NewProp_NewWeaponUpdate_MetaData, ARRAY_COUNT(NewProp_NewWeaponUpdate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_UIComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_InteractionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_CurrentHUD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_DefaultPlayerHUD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsReloading,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWeaponMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewWeaponUpdate,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UHitAble_NoRegister, (int32)VTABLE_OFFSET(AFPSPlayer, IHitAble), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFPSPlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFPSPlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayer, 3137616178);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayer(Z_Construct_UClass_AFPSPlayer, &AFPSPlayer::StaticClass, TEXT("/Script/FPS"), TEXT("AFPSPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
