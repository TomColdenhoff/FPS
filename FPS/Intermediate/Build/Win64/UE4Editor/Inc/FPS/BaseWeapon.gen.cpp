// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BaseWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWeapon() {}
// Cross Module References
	FPS_API UFunction* Z_Construct_UDelegateFunction_UBaseWeapon_AmmoChanged__DelegateSignature();
	FPS_API UClass* Z_Construct_UClass_UBaseWeapon();
	FPS_API UClass* Z_Construct_UClass_UBaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UBaseWeapon_AmmoChanged__DelegateSignature()
	{
		struct BaseWeapon_eventAmmoChanged_Parms
		{
			int32 AmmoInClip;
			int32 AmmoOutOfClip;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoOutOfClip = { UE4CodeGen_Private::EPropertyClass::Int, "AmmoOutOfClip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseWeapon_eventAmmoChanged_Parms, AmmoOutOfClip), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoInClip = { UE4CodeGen_Private::EPropertyClass::Int, "AmmoInClip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseWeapon_eventAmmoChanged_Parms, AmmoInClip), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmmoOutOfClip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmmoInClip,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseWeapon, "AmmoChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(BaseWeapon_eventAmmoChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UBaseWeapon::StaticRegisterNativesUBaseWeapon()
	{
	}
	UClass* Z_Construct_UClass_UBaseWeapon_NoRegister()
	{
		return UBaseWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_UBaseWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_EDITOR
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UDelegateFunction_UBaseWeapon_AmmoChanged__DelegateSignature, "AmmoChanged__DelegateSignature" }, // 3244354047
			};
#endif //WITH_EDITOR
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object Object Mobility Trigger" },
				{ "IncludePath", "BaseWeapon.h" },
				{ "ModuleRelativePath", "BaseWeapon.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAmmoChange_MetaData[] = {
				{ "ModuleRelativePath", "BaseWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmmoChange = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAmmoChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UBaseWeapon, OnAmmoChange), Z_Construct_UDelegateFunction_UBaseWeapon_AmmoChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnAmmoChange_MetaData, ARRAY_COUNT(NewProp_OnAmmoChange_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnAmmoChange,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBaseWeapon>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBaseWeapon::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				IF_WITH_EDITOR(FuncInfo, nullptr), IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
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
	IMPLEMENT_CLASS(UBaseWeapon, 1931612262);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseWeapon(Z_Construct_UClass_UBaseWeapon, &UBaseWeapon::StaticClass, TEXT("/Script/FPS"), TEXT("UBaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
