// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AI/AssaultEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssaultEnemy() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AAssaultEnemy_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AAssaultEnemy();
	FPS_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AAssaultEnemy::StaticRegisterNativesAAssaultEnemy()
	{
	}
	UClass* Z_Construct_UClass_AAssaultEnemy_NoRegister()
	{
		return AAssaultEnemy::StaticClass();
	}
	UClass* Z_Construct_UClass_AAssaultEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "AI/AssaultEnemy.h" },
				{ "ModuleRelativePath", "Public/AI/AssaultEnemy.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAssaultEnemy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAssaultEnemy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAssaultEnemy, 3468485324);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssaultEnemy(Z_Construct_UClass_AAssaultEnemy, &AAssaultEnemy::StaticClass, TEXT("/Script/FPS"), TEXT("AAssaultEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssaultEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
