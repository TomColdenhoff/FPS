// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Tasks/ActivateActors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivateActors() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AActivateActors_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AActivateActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UStartBehaviour_NoRegister();
// End Cross Module References
	void AActivateActors::StaticRegisterNativesAActivateActors()
	{
	}
	UClass* Z_Construct_UClass_AActivateActors_NoRegister()
	{
		return AActivateActors::StaticClass();
	}
	UClass* Z_Construct_UClass_AActivateActors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tasks/ActivateActors.h" },
				{ "ModuleRelativePath", "Tasks/ActivateActors.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ActorsToEnable_MetaData[] = {
				{ "Category", "ActivateActors" },
				{ "ModuleRelativePath", "Tasks/ActivateActors.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ActorsToEnable = { UE4CodeGen_Private::EPropertyClass::Array, "m_ActorsToEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AActivateActors, m_ActorsToEnable), METADATA_PARAMS(NewProp_m_ActorsToEnable_MetaData, ARRAY_COUNT(NewProp_m_ActorsToEnable_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ActorsToEnable_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "m_ActorsToEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ActorsToDisable_MetaData[] = {
				{ "Category", "ActivateActors" },
				{ "ModuleRelativePath", "Tasks/ActivateActors.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ActorsToDisable = { UE4CodeGen_Private::EPropertyClass::Array, "m_ActorsToDisable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AActivateActors, m_ActorsToDisable), METADATA_PARAMS(NewProp_m_ActorsToDisable_MetaData, ARRAY_COUNT(NewProp_m_ActorsToDisable_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ActorsToDisable_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "m_ActorsToDisable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_ActorsToEnable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_ActorsToEnable_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_ActorsToDisable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_ActorsToDisable_Inner,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UStartBehaviour_NoRegister, (int32)VTABLE_OFFSET(AActivateActors, IStartBehaviour), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AActivateActors>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AActivateActors::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AActivateActors, 2564688922);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActivateActors(Z_Construct_UClass_AActivateActors, &AActivateActors::StaticClass, TEXT("/Script/FPS"), TEXT("AActivateActors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActivateActors);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
