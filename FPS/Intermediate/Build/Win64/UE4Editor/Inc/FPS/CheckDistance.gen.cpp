// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AI/CheckDistance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckDistance() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UCheckDistance_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UCheckDistance();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_FPS();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UCheckDistance::StaticRegisterNativesUCheckDistance()
	{
	}
	UClass* Z_Construct_UClass_UCheckDistance_NoRegister()
	{
		return UCheckDistance::StaticClass();
	}
	UClass* Z_Construct_UClass_UCheckDistance()
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
				{ "IncludePath", "AI/CheckDistance.h" },
				{ "ModuleRelativePath", "AI/CheckDistance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ToCloseKey_MetaData[] = {
				{ "Category", "CheckDistance" },
				{ "ModuleRelativePath", "AI/CheckDistance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ToCloseKey = { UE4CodeGen_Private::EPropertyClass::Struct, "m_ToCloseKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UCheckDistance, m_ToCloseKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_m_ToCloseKey_MetaData, ARRAY_COUNT(NewProp_m_ToCloseKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ToFarKey_MetaData[] = {
				{ "Category", "CheckDistance" },
				{ "ModuleRelativePath", "AI/CheckDistance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ToFarKey = { UE4CodeGen_Private::EPropertyClass::Struct, "m_ToFarKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UCheckDistance, m_ToFarKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_m_ToFarKey_MetaData, ARRAY_COUNT(NewProp_m_ToFarKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TargetKey_MetaData[] = {
				{ "Category", "CheckDistance" },
				{ "ModuleRelativePath", "AI/CheckDistance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_TargetKey = { UE4CodeGen_Private::EPropertyClass::Struct, "m_TargetKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UCheckDistance, m_TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_m_TargetKey_MetaData, ARRAY_COUNT(NewProp_m_TargetKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_ToCloseKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_ToFarKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_TargetKey,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCheckDistance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCheckDistance::StaticClass,
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
	IMPLEMENT_CLASS(UCheckDistance, 221211622);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckDistance(Z_Construct_UClass_UCheckDistance, &UCheckDistance::StaticClass, TEXT("/Script/FPS"), TEXT("UCheckDistance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckDistance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
