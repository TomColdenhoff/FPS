// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AI/AssaultIdleUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssaultIdleUpdate() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UAssaultIdleUpdate_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UAssaultIdleUpdate();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UAssaultIdleUpdate::StaticRegisterNativesUAssaultIdleUpdate()
	{
	}
	UClass* Z_Construct_UClass_UAssaultIdleUpdate_NoRegister()
	{
		return UAssaultIdleUpdate::StaticClass();
	}
	UClass* Z_Construct_UClass_UAssaultIdleUpdate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTService,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/AssaultIdleUpdate.h" },
				{ "ModuleRelativePath", "AI/AssaultIdleUpdate.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AcceptenceDistance_MetaData[] = {
				{ "Category", "AssaultIdleUpdate" },
				{ "ModuleRelativePath", "AI/AssaultIdleUpdate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_AcceptenceDistance = { UE4CodeGen_Private::EPropertyClass::Float, "m_AcceptenceDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UAssaultIdleUpdate, m_AcceptenceDistance), METADATA_PARAMS(NewProp_m_AcceptenceDistance_MetaData, ARRAY_COUNT(NewProp_m_AcceptenceDistance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_AcceptenceDistance,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAssaultIdleUpdate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAssaultIdleUpdate::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UAssaultIdleUpdate, 2981726440);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssaultIdleUpdate(Z_Construct_UClass_UAssaultIdleUpdate, &UAssaultIdleUpdate::StaticClass, TEXT("/Script/FPS"), TEXT("UAssaultIdleUpdate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssaultIdleUpdate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
