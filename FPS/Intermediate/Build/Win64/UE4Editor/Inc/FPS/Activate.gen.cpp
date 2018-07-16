// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Tasks/Activate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivate() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AActivate_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AActivate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UTask_NoRegister();
// End Cross Module References
	void AActivate::StaticRegisterNativesAActivate()
	{
	}
	UClass* Z_Construct_UClass_AActivate_NoRegister()
	{
		return AActivate::StaticClass();
	}
	UClass* Z_Construct_UClass_AActivate()
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
				{ "IncludePath", "Tasks/Activate.h" },
				{ "ModuleRelativePath", "Tasks/Activate.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_ActorToActivate_MetaData[] = {
				{ "Category", "Activate" },
				{ "ModuleRelativePath", "Tasks/Activate.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_ActorToActivate = { UE4CodeGen_Private::EPropertyClass::Object, "p_ActorToActivate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AActivate, p_ActorToActivate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_p_ActorToActivate_MetaData, ARRAY_COUNT(NewProp_p_ActorToActivate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TaskText_MetaData[] = {
				{ "Category", "Activate" },
				{ "ModuleRelativePath", "Tasks/Activate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_TaskText = { UE4CodeGen_Private::EPropertyClass::Str, "m_TaskText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AActivate, m_TaskText), METADATA_PARAMS(NewProp_m_TaskText_MetaData, ARRAY_COUNT(NewProp_m_TaskText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_ActorToActivate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_TaskText,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UTask_NoRegister, (int32)VTABLE_OFFSET(AActivate, ITask), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AActivate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AActivate::StaticClass,
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
	IMPLEMENT_CLASS(AActivate, 2921230400);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActivate(Z_Construct_UClass_AActivate, &AActivate::StaticClass, TEXT("/Script/FPS"), TEXT("AActivate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActivate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
