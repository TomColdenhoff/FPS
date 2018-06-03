// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PluginExporterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginExporterGameModeBase() {}
// Cross Module References
	PLUGINEXPORTER_API UClass* Z_Construct_UClass_APluginExporterGameModeBase_NoRegister();
	PLUGINEXPORTER_API UClass* Z_Construct_UClass_APluginExporterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PluginExporter();
// End Cross Module References
	void APluginExporterGameModeBase::StaticRegisterNativesAPluginExporterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APluginExporterGameModeBase_NoRegister()
	{
		return APluginExporterGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_APluginExporterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_PluginExporter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PluginExporterGameModeBase.h" },
				{ "ModuleRelativePath", "PluginExporterGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APluginExporterGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APluginExporterGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(APluginExporterGameModeBase, 4250930754);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APluginExporterGameModeBase(Z_Construct_UClass_APluginExporterGameModeBase, &APluginExporterGameModeBase::StaticClass, TEXT("/Script/PluginExporter"), TEXT("APluginExporterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APluginExporterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
