// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Player/Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteraction() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UInteraction_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UInteraction();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UInteraction::StaticRegisterNativesUInteraction()
	{
	}
	UClass* Z_Construct_UClass_UInteraction_NoRegister()
	{
		return UInteraction::StaticClass();
	}
	UClass* Z_Construct_UClass_UInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Player/Interaction.h" },
				{ "ModuleRelativePath", "Player/Interaction.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Player/Interaction.h" },
			};
#endif
			auto NewProp_bDebug_SetBit = [](void* Obj){ ((UInteraction*)Obj)->bDebug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInteraction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebug_MetaData, ARRAY_COUNT(NewProp_bDebug_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_InteractionDistance_MetaData[] = {
				{ "Category", "Interacting" },
				{ "ModuleRelativePath", "Player/Interaction.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_InteractionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "m_InteractionDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UInteraction, m_InteractionDistance), METADATA_PARAMS(NewProp_m_InteractionDistance_MetaData, ARRAY_COUNT(NewProp_m_InteractionDistance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_InteractionDistance,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInteraction>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInteraction::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UInteraction, 3155922638);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteraction(Z_Construct_UClass_UInteraction, &UInteraction::StaticClass, TEXT("/Script/FPS"), TEXT("UInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
