// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Level/ActivateActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivateActor() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UActivateActor_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UActivateActor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UInteractAble_NoRegister();
// End Cross Module References
	void UActivateActor::StaticRegisterNativesUActivateActor()
	{
	}
	UClass* Z_Construct_UClass_UActivateActor_NoRegister()
	{
		return UActivateActor::StaticClass();
	}
	UClass* Z_Construct_UClass_UActivateActor()
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
				{ "IncludePath", "Level/ActivateActor.h" },
				{ "ModuleRelativePath", "Level/ActivateActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_ActivateBehaviour_MetaData[] = {
				{ "Category", "ActivateActor" },
				{ "ModuleRelativePath", "Level/ActivateActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_ActivateBehaviour = { UE4CodeGen_Private::EPropertyClass::Object, "p_ActivateBehaviour", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UActivateActor, p_ActivateBehaviour), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_p_ActivateBehaviour_MetaData, ARRAY_COUNT(NewProp_p_ActivateBehaviour_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_ActivateBehaviour,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInteractAble_NoRegister, (int32)VTABLE_OFFSET(UActivateActor, IInteractAble), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UActivateActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UActivateActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivateActor, 3534776081);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivateActor(Z_Construct_UClass_UActivateActor, &UActivateActor::StaticClass, TEXT("/Script/FPS"), TEXT("UActivateActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivateActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
