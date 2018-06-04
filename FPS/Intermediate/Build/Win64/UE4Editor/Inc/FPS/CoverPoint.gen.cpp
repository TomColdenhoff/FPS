// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CoverPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoverPoint() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ACoverPoint_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ACoverPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ACoverPoint::StaticRegisterNativesACoverPoint()
	{
	}
	UClass* Z_Construct_UClass_ACoverPoint_NoRegister()
	{
		return ACoverPoint::StaticClass();
	}
	UClass* Z_Construct_UClass_ACoverPoint()
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
				{ "IncludePath", "CoverPoint.h" },
				{ "ModuleRelativePath", "Public/CoverPoint.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_Collider_MetaData[] = {
				{ "Category", "CoverPoint" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CoverPoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_Collider = { UE4CodeGen_Private::EPropertyClass::Object, "p_Collider", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ACoverPoint, p_Collider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_p_Collider_MetaData, ARRAY_COUNT(NewProp_p_Collider_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_Collider,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACoverPoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACoverPoint::StaticClass,
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
	IMPLEMENT_CLASS(ACoverPoint, 2719489390);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoverPoint(Z_Construct_UClass_ACoverPoint, &ACoverPoint::StaticClass, TEXT("/Script/FPS"), TEXT("ACoverPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoverPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
