// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AI/ChangeSpeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeSpeed() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UChangeSpeed_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UChangeSpeed();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UChangeSpeed::StaticRegisterNativesUChangeSpeed()
	{
	}
	UClass* Z_Construct_UClass_UChangeSpeed_NoRegister()
	{
		return UChangeSpeed::StaticClass();
	}
	UClass* Z_Construct_UClass_UChangeSpeed()
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
				{ "IncludePath", "AI/ChangeSpeed.h" },
				{ "ModuleRelativePath", "AI/ChangeSpeed.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NewAISpeed_MetaData[] = {
				{ "Category", "ChangeSpeed" },
				{ "ModuleRelativePath", "AI/ChangeSpeed.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_NewAISpeed = { UE4CodeGen_Private::EPropertyClass::Float, "m_NewAISpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UChangeSpeed, m_NewAISpeed), METADATA_PARAMS(NewProp_m_NewAISpeed_MetaData, ARRAY_COUNT(NewProp_m_NewAISpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_NewAISpeed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UChangeSpeed>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UChangeSpeed::StaticClass,
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
	IMPLEMENT_CLASS(UChangeSpeed, 3036891841);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChangeSpeed(Z_Construct_UClass_UChangeSpeed, &UChangeSpeed::StaticClass, TEXT("/Script/FPS"), TEXT("UChangeSpeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChangeSpeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
