// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Tasks/CollectItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectItem() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ACollectItem_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ACollectItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UTask_NoRegister();
// End Cross Module References
	void ACollectItem::StaticRegisterNativesACollectItem()
	{
	}
	UClass* Z_Construct_UClass_ACollectItem_NoRegister()
	{
		return ACollectItem::StaticClass();
	}
	UClass* Z_Construct_UClass_ACollectItem()
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
				{ "IncludePath", "Tasks/CollectItem.h" },
				{ "ModuleRelativePath", "Tasks/CollectItem.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToCollect_MetaData[] = {
				{ "Category", "CollectItem" },
				{ "ModuleRelativePath", "Tasks/CollectItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToCollect = { UE4CodeGen_Private::EPropertyClass::Object, "ActorToCollect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ACollectItem, ActorToCollect), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ActorToCollect_MetaData, ARRAY_COUNT(NewProp_ActorToCollect_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorToCollect,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UTask_NoRegister, (int32)VTABLE_OFFSET(ACollectItem, ITask), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACollectItem>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACollectItem::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ACollectItem, 1420124783);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollectItem(Z_Construct_UClass_ACollectItem, &ACollectItem::StaticClass, TEXT("/Script/FPS"), TEXT("ACollectItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
