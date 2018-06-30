// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Level/SMGPickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGPickUp() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ASMGPickUp_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ASMGPickUp();
	FPS_API UClass* Z_Construct_UClass_AHoldAblePickUp();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void ASMGPickUp::StaticRegisterNativesASMGPickUp()
	{
	}
	UClass* Z_Construct_UClass_ASMGPickUp_NoRegister()
	{
		return ASMGPickUp::StaticClass();
	}
	UClass* Z_Construct_UClass_ASMGPickUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHoldAblePickUp,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Level/SMGPickUp.h" },
				{ "ModuleRelativePath", "Level/SMGPickUp.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASMGPickUp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASMGPickUp::StaticClass,
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
	IMPLEMENT_CLASS(ASMGPickUp, 3228673679);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASMGPickUp(Z_Construct_UClass_ASMGPickUp, &ASMGPickUp::StaticClass, TEXT("/Script/FPS"), TEXT("ASMGPickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMGPickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
