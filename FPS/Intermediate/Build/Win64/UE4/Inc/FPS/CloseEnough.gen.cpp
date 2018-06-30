// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CloseEnough.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloseEnough() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UCloseEnough_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UCloseEnough();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UCloseEnough::StaticRegisterNativesUCloseEnough()
	{
	}
	UClass* Z_Construct_UClass_UCloseEnough_NoRegister()
	{
		return UCloseEnough::StaticClass();
	}
	UClass* Z_Construct_UClass_UCloseEnough()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTDecorator,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CloseEnough.h" },
				{ "ModuleRelativePath", "CloseEnough.h" },
				{ "ToolTip", "Close enough for AI" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCloseEnough>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCloseEnough::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UCloseEnough, 564015207);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCloseEnough(Z_Construct_UClass_UCloseEnough, &UCloseEnough::StaticClass, TEXT("/Script/FPS"), TEXT("UCloseEnough"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCloseEnough);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
