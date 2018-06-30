// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AI/FindCoverPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindCoverPoint() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UFindCoverPoint_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UFindCoverPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_FPS();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UFindCoverPoint::StaticRegisterNativesUFindCoverPoint()
	{
	}
	UClass* Z_Construct_UClass_UFindCoverPoint_NoRegister()
	{
		return UFindCoverPoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UFindCoverPoint()
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
				{ "IncludePath", "AI/FindCoverPoint.h" },
				{ "ModuleRelativePath", "AI/FindCoverPoint.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DrawDebug_MetaData[] = {
				{ "Category", "AI Cover" },
				{ "ModuleRelativePath", "AI/FindCoverPoint.h" },
			};
#endif
			auto NewProp_m_DrawDebug_SetBit = [](void* Obj){ ((UFindCoverPoint*)Obj)->m_DrawDebug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_DrawDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "m_DrawDebug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFindCoverPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_m_DrawDebug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_m_DrawDebug_MetaData, ARRAY_COUNT(NewProp_m_DrawDebug_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SearchRadius_MetaData[] = {
				{ "Category", "AI Cover" },
				{ "ModuleRelativePath", "AI/FindCoverPoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_SearchRadius = { UE4CodeGen_Private::EPropertyClass::Float, "m_SearchRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFindCoverPoint, m_SearchRadius), METADATA_PARAMS(NewProp_m_SearchRadius_MetaData, ARRAY_COUNT(NewProp_m_SearchRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CoverPointKey_MetaData[] = {
				{ "Category", "AI Cover" },
				{ "ModuleRelativePath", "AI/FindCoverPoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CoverPointKey = { UE4CodeGen_Private::EPropertyClass::Struct, "m_CoverPointKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFindCoverPoint, m_CoverPointKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_m_CoverPointKey_MetaData, ARRAY_COUNT(NewProp_m_CoverPointKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TargetKey_MetaData[] = {
				{ "Category", "AI Cover" },
				{ "ModuleRelativePath", "AI/FindCoverPoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_TargetKey = { UE4CodeGen_Private::EPropertyClass::Struct, "m_TargetKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFindCoverPoint, m_TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_m_TargetKey_MetaData, ARRAY_COUNT(NewProp_m_TargetKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_DrawDebug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_SearchRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_CoverPointKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_TargetKey,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFindCoverPoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFindCoverPoint::StaticClass,
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
	IMPLEMENT_CLASS(UFindCoverPoint, 1573665008);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindCoverPoint(Z_Construct_UClass_UFindCoverPoint, &UFindCoverPoint::StaticClass, TEXT("/Script/FPS"), TEXT("UFindCoverPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindCoverPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
