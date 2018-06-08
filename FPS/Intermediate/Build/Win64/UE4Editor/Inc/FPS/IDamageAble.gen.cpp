// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/IDamageAble.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDamageAble() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UIDamageAble_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UIDamageAble();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UIDamageAble::StaticRegisterNativesUIDamageAble()
	{
	}
	UClass* Z_Construct_UClass_UIDamageAble_NoRegister()
	{
		return UIDamageAble::StaticClass();
	}
	UClass* Z_Construct_UClass_UIDamageAble()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/IDamageAble.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IIDamageAble>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UIDamageAble::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00084081u,
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
	IMPLEMENT_CLASS(UIDamageAble, 3497375931);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIDamageAble(Z_Construct_UClass_UIDamageAble, &UIDamageAble::StaticClass, TEXT("/Script/FPS"), TEXT("UIDamageAble"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIDamageAble);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
