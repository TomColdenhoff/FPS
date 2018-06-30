// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Level/BasicPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicPickup() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ABasicPickup_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ABasicPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABasicPickup::StaticRegisterNativesABasicPickup()
	{
	}
	UClass* Z_Construct_UClass_ABasicPickup_NoRegister()
	{
		return ABasicPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_ABasicPickup()
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
				{ "IncludePath", "Level/BasicPickup.h" },
				{ "ModuleRelativePath", "Level/BasicPickup.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotSize_MetaData[] = {
				{ "Category", "Pickup" },
				{ "ModuleRelativePath", "Level/BasicPickup.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotSize = { UE4CodeGen_Private::EPropertyClass::Struct, "SlotSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABasicPickup, SlotSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_SlotSize_MetaData, ARRAY_COUNT(NewProp_SlotSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvetoryImage_MetaData[] = {
				{ "Category", "Pickup" },
				{ "ModuleRelativePath", "Level/BasicPickup.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvetoryImage = { UE4CodeGen_Private::EPropertyClass::Object, "InvetoryImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABasicPickup, InvetoryImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_InvetoryImage_MetaData, ARRAY_COUNT(NewProp_InvetoryImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragImage_MetaData[] = {
				{ "Category", "Pickup" },
				{ "ModuleRelativePath", "Level/BasicPickup.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DragImage = { UE4CodeGen_Private::EPropertyClass::Object, "DragImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABasicPickup, DragImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_DragImage_MetaData, ARRAY_COUNT(NewProp_DragImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
				{ "Category", "Pickup" },
				{ "ModuleRelativePath", "Level/BasicPickup.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image = { UE4CodeGen_Private::EPropertyClass::Object, "Image", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABasicPickup, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_Image_MetaData, ARRAY_COUNT(NewProp_Image_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Pickup" },
				{ "ModuleRelativePath", "Level/BasicPickup.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABasicPickup, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_StaticMeshComponent_MetaData[] = {
				{ "Category", "BasicPickup" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Level/BasicPickup.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "p_StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABasicPickup, p_StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_p_StaticMeshComponent_MetaData, ARRAY_COUNT(NewProp_p_StaticMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InvetoryImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DragImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Image,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_StaticMeshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABasicPickup>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABasicPickup::StaticClass,
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
	IMPLEMENT_CLASS(ABasicPickup, 3040274459);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicPickup(Z_Construct_UClass_ABasicPickup, &ABasicPickup::StaticClass, TEXT("/Script/FPS"), TEXT("ABasicPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
