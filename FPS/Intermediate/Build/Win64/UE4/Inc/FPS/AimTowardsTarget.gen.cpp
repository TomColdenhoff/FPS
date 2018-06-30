// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AI/AimTowardsTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimTowardsTarget() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UAimTowardsTarget_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UAimTowardsTarget();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_FPS();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UAimTowardsTarget::StaticRegisterNativesUAimTowardsTarget()
	{
	}
	UClass* Z_Construct_UClass_UAimTowardsTarget_NoRegister()
	{
		return UAimTowardsTarget::StaticClass();
	}
	UClass* Z_Construct_UClass_UAimTowardsTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/AimTowardsTarget.h" },
				{ "ModuleRelativePath", "AI/AimTowardsTarget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Target_MetaData[] = {
				{ "Category", "AimTowardsTarget" },
				{ "ModuleRelativePath", "AI/AimTowardsTarget.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_Target = { UE4CodeGen_Private::EPropertyClass::Struct, "m_Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UAimTowardsTarget, m_Target), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_m_Target_MetaData, ARRAY_COUNT(NewProp_m_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_Target,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAimTowardsTarget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAimTowardsTarget::StaticClass,
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
	IMPLEMENT_CLASS(UAimTowardsTarget, 157649312);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimTowardsTarget(Z_Construct_UClass_UAimTowardsTarget, &UAimTowardsTarget::StaticClass, TEXT("/Script/FPS"), TEXT("UAimTowardsTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimTowardsTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
