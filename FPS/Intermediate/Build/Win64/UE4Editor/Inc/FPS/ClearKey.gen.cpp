// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AI/ClearKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClearKey() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UClearKey_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UClearKey();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_FPS();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UClearKey::StaticRegisterNativesUClearKey()
	{
	}
	UClass* Z_Construct_UClass_UClearKey_NoRegister()
	{
		return UClearKey::StaticClass();
	}
	UClass* Z_Construct_UClass_UClearKey()
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
				{ "IncludePath", "AI/ClearKey.h" },
				{ "ModuleRelativePath", "AI/ClearKey.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_KeyToClear_MetaData[] = {
				{ "Category", "ClearKey" },
				{ "ModuleRelativePath", "AI/ClearKey.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_KeyToClear = { UE4CodeGen_Private::EPropertyClass::Struct, "m_KeyToClear", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UClearKey, m_KeyToClear), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_m_KeyToClear_MetaData, ARRAY_COUNT(NewProp_m_KeyToClear_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_KeyToClear,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UClearKey>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UClearKey::StaticClass,
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
	IMPLEMENT_CLASS(UClearKey, 551821677);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClearKey(Z_Construct_UClass_UClearKey, &UClearKey::StaticClass, TEXT("/Script/FPS"), TEXT("UClearKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClearKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
