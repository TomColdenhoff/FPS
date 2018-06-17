// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Player/UIComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIComponent() {}
// Cross Module References
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_UpdateOnGroundDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_ABasicPickup_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UUIComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UUIComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_DropToIventory();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_Initialize();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_FPS_UpdateOnGroundDelegate__DelegateSignature()
	{
		struct _Script_FPS_eventUpdateOnGroundDelegate_Parms
		{
			TArray<ABasicPickup*> Items;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_FPS_eventUpdateOnGroundDelegate_Parms, Items), METADATA_PARAMS(NewProp_Items_MetaData, ARRAY_COUNT(NewProp_Items_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ABasicPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPS, "UpdateOnGroundDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FPS_eventUpdateOnGroundDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UUIComponent::StaticRegisterNativesUUIComponent()
	{
		UClass* Class = UUIComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropToIventory", &UUIComponent::execDropToIventory },
			{ "Initialize", &UUIComponent::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UUIComponent_DropToIventory()
	{
		struct UIComponent_eventDropToIventory_Parms
		{
			ABasicPickup* Pickup;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pickup = { UE4CodeGen_Private::EPropertyClass::Object, "Pickup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventDropToIventory_Parms, Pickup), Z_Construct_UClass_ABasicPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pickup,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIComponent, "DropToIventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UIComponent_eventDropToIventory_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUIComponent_Initialize()
	{
		struct UIComponent_eventInitialize_Parms
		{
			TArray<UWidget*> GameUI;
			TArray<UWidget*> PauseUI;
			TArray<UWidget*> InventoryUI;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryUI_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryUI = { UE4CodeGen_Private::EPropertyClass::Array, "InventoryUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventInitialize_Parms, InventoryUI), METADATA_PARAMS(NewProp_InventoryUI_MetaData, ARRAY_COUNT(NewProp_InventoryUI_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryUI_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InventoryUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseUI_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PauseUI = { UE4CodeGen_Private::EPropertyClass::Array, "PauseUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventInitialize_Parms, PauseUI), METADATA_PARAMS(NewProp_PauseUI_MetaData, ARRAY_COUNT(NewProp_PauseUI_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseUI_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PauseUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameUI_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameUI = { UE4CodeGen_Private::EPropertyClass::Array, "GameUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventInitialize_Parms, GameUI), METADATA_PARAMS(NewProp_GameUI_MetaData, ARRAY_COUNT(NewProp_GameUI_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameUI_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "GameUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InventoryUI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InventoryUI_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PauseUI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PauseUI_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameUI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameUI_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
				{ "ToolTip", "Initializes the UI Component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIComponent, "Initialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UIComponent_eventInitialize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIComponent_NoRegister()
	{
		return UUIComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UUIComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UUIComponent_DropToIventory, "DropToIventory" }, // 2088746195
				{ &Z_Construct_UFunction_UUIComponent_Initialize, "Initialize" }, // 2241902068
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Player/UIComponent.h" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SearchDistance_MetaData[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_SearchDistance = { UE4CodeGen_Private::EPropertyClass::Float, "m_SearchDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UUIComponent, m_SearchDistance), METADATA_PARAMS(NewProp_m_SearchDistance_MetaData, ARRAY_COUNT(NewProp_m_SearchDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			auto NewProp_bDebug_SetBit = [](void* Obj){ ((UUIComponent*)Obj)->bDebug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UUIComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebug_MetaData, ARRAY_COUNT(NewProp_bDebug_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdateInventorySlots_MetaData[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateInventorySlots = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnUpdateInventorySlots", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UUIComponent, OnUpdateInventorySlots), Z_Construct_UDelegateFunction_FPS_UpdateOnGroundDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnUpdateInventorySlots_MetaData, ARRAY_COUNT(NewProp_OnUpdateInventorySlots_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdateInventory_MetaData[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateInventory = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnUpdateInventory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UUIComponent, OnUpdateInventory), Z_Construct_UDelegateFunction_FPS_UpdateOnGroundDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnUpdateInventory_MetaData, ARRAY_COUNT(NewProp_OnUpdateInventory_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_SearchDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnUpdateInventorySlots,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnUpdateInventory,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUIComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUIComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UUIComponent, 813415404);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIComponent(Z_Construct_UClass_UUIComponent, &UUIComponent::StaticClass, TEXT("/Script/FPS"), TEXT("UUIComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
