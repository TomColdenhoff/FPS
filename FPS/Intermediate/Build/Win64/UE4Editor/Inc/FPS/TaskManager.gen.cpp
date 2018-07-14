// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Tasks/TaskManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskManager() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ATaskManager_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ATaskManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ATaskManager::StaticRegisterNativesATaskManager()
	{
	}
	UClass* Z_Construct_UClass_ATaskManager_NoRegister()
	{
		return ATaskManager::StaticClass();
	}
	UClass* Z_Construct_UClass_ATaskManager()
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
				{ "IncludePath", "Tasks/TaskManager.h" },
				{ "ModuleRelativePath", "Tasks/TaskManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Tasks_MetaData[] = {
				{ "Category", "TaskManager" },
				{ "ModuleRelativePath", "Tasks/TaskManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_Tasks = { UE4CodeGen_Private::EPropertyClass::Array, "m_Tasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ATaskManager, m_Tasks), METADATA_PARAMS(NewProp_m_Tasks_MetaData, ARRAY_COUNT(NewProp_m_Tasks_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Tasks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "m_Tasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_Tasks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_Tasks_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATaskManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATaskManager::StaticClass,
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
	IMPLEMENT_CLASS(ATaskManager, 2585765903);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATaskManager(Z_Construct_UClass_ATaskManager, &ATaskManager::StaticClass, TEXT("/Script/FPS"), TEXT("ATaskManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATaskManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
