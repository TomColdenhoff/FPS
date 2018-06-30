// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AI/ChooseNextWaypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChooseNextWaypoint() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UChooseNextWaypoint_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UChooseNextWaypoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UChooseNextWaypoint::StaticRegisterNativesUChooseNextWaypoint()
	{
	}
	UClass* Z_Construct_UClass_UChooseNextWaypoint_NoRegister()
	{
		return UChooseNextWaypoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UChooseNextWaypoint()
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
				{ "IncludePath", "AI/ChooseNextWaypoint.h" },
				{ "ModuleRelativePath", "AI/ChooseNextWaypoint.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UChooseNextWaypoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UChooseNextWaypoint::StaticClass,
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
	IMPLEMENT_CLASS(UChooseNextWaypoint, 1027558430);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChooseNextWaypoint(Z_Construct_UClass_UChooseNextWaypoint, &UChooseNextWaypoint::StaticClass, TEXT("/Script/FPS"), TEXT("UChooseNextWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooseNextWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
