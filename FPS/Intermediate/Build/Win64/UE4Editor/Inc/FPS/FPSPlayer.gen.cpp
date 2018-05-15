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
	FPS_API UClass* Z_Construct_UClass_AFPSPlayer_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFPSPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AFPSPlayer::StaticRegisterNativesAFPSPlayer()
	{
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "FPSPlayer.h" },
				{ "ModuleRelativePath", "FPSPlayer.h" },
			};
#endif
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
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsReloading,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWeaponMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFPSPlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFPSPlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayer, 928030046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayer(Z_Construct_UClass_AFPSPlayer, &AFPSPlayer::StaticClass, TEXT("/Script/FPS"), TEXT("AFPSPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
