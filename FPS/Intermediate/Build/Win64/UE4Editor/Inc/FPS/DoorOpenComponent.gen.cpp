// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Level/DoorOpenComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorOpenComponent() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UDoorOpenComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UDoorOpenComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_ABasicPickup_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UInteractAble_NoRegister();
// End Cross Module References
	void UDoorOpenComponent::StaticRegisterNativesUDoorOpenComponent()
	{
	}
	UClass* Z_Construct_UClass_UDoorOpenComponent_NoRegister()
	{
		return UDoorOpenComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UDoorOpenComponent()
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
				{ "IncludePath", "Level/DoorOpenComponent.h" },
				{ "ModuleRelativePath", "Level/DoorOpenComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_NeededActor_MetaData[] = {
				{ "Category", "DoorOpenComponent" },
				{ "ModuleRelativePath", "Level/DoorOpenComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_NeededActor = { UE4CodeGen_Private::EPropertyClass::Object, "p_NeededActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDoorOpenComponent, p_NeededActor), Z_Construct_UClass_ABasicPickup_NoRegister, METADATA_PARAMS(NewProp_p_NeededActor_MetaData, ARRAY_COUNT(NewProp_p_NeededActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_OpenRate_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Level/DoorOpenComponent.h" },
				{ "ToolTip", "The speed the door should open" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_OpenRate = { UE4CodeGen_Private::EPropertyClass::Float, "m_OpenRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDoorOpenComponent, m_OpenRate), METADATA_PARAMS(NewProp_m_OpenRate_MetaData, ARRAY_COUNT(NewProp_m_OpenRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TargetOpenRotation_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Level/DoorOpenComponent.h" },
				{ "ToolTip", "The rotation the door should aim for" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_TargetOpenRotation = { UE4CodeGen_Private::EPropertyClass::Float, "m_TargetOpenRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDoorOpenComponent, m_TargetOpenRotation), METADATA_PARAMS(NewProp_m_TargetOpenRotation_MetaData, ARRAY_COUNT(NewProp_m_TargetOpenRotation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_NeededActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_OpenRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_TargetOpenRotation,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInteractAble_NoRegister, (int32)VTABLE_OFFSET(UDoorOpenComponent, IInteractAble), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDoorOpenComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDoorOpenComponent::StaticClass,
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
	IMPLEMENT_CLASS(UDoorOpenComponent, 987525337);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorOpenComponent(Z_Construct_UClass_UDoorOpenComponent, &UDoorOpenComponent::StaticClass, TEXT("/Script/FPS"), TEXT("UDoorOpenComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorOpenComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
