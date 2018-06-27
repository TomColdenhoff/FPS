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
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FCollum();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FSlotImage();
	FPS_API UClass* Z_Construct_UClass_UUIComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UUIComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_DropToIventory();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_GetInventoryItem();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_HideImageGrid();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_Initialize();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_IsAvailable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_RemoveFromInventory();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_ResetImage();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_SetImage();
	FPS_API UFunction* Z_Construct_UFunction_UUIComponent_SetSlotImage();
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
class UScriptStruct* FCollum::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPS_API uint32 Get_Z_Construct_UScriptStruct_FCollum_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollum, Z_Construct_UPackage__Script_FPS(), TEXT("Collum"), sizeof(FCollum), Get_Z_Construct_UScriptStruct_FCollum_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollum(FCollum::StaticStruct, TEXT("/Script/FPS"), TEXT("Collum"), false, nullptr, nullptr);
static struct FScriptStruct_FPS_StaticRegisterNativesFCollum
{
	FScriptStruct_FPS_StaticRegisterNativesFCollum()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Collum")),new UScriptStruct::TCppStructOps<FCollum>);
	}
} ScriptStruct_FPS_StaticRegisterNativesFCollum;
	UScriptStruct* Z_Construct_UScriptStruct_FCollum()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollum_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Collum"), sizeof(FCollum), Get_Z_Construct_UScriptStruct_FCollum_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
				{ "ToolTip", "Collum Struct to hold array of images in that collum" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollum>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollumImages_MetaData[] = {
				{ "Category", "Inventory" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollumImages = { UE4CodeGen_Private::EPropertyClass::Array, "CollumImages", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000800000000c, 1, nullptr, STRUCT_OFFSET(FCollum, CollumImages), METADATA_PARAMS(NewProp_CollumImages_MetaData, ARRAY_COUNT(NewProp_CollumImages_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollumImages_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CollumImages", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollumImages,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollumImages_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Collum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FCollum),
				alignof(FCollum),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollum_CRC() { return 3518269988U; }
class UScriptStruct* FSlotImage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPS_API uint32 Get_Z_Construct_UScriptStruct_FSlotImage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotImage, Z_Construct_UPackage__Script_FPS(), TEXT("SlotImage"), sizeof(FSlotImage), Get_Z_Construct_UScriptStruct_FSlotImage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlotImage(FSlotImage::StaticStruct, TEXT("/Script/FPS"), TEXT("SlotImage"), false, nullptr, nullptr);
static struct FScriptStruct_FPS_StaticRegisterNativesFSlotImage
{
	FScriptStruct_FPS_StaticRegisterNativesFSlotImage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlotImage")),new UScriptStruct::TCppStructOps<FSlotImage>);
	}
} ScriptStruct_FPS_StaticRegisterNativesFSlotImage;
	UScriptStruct* Z_Construct_UScriptStruct_FSlotImage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlotImage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlotImage"), sizeof(FSlotImage), Get_Z_Construct_UScriptStruct_FSlotImage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotImage>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
				{ "Category", "Inventory" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image = { UE4CodeGen_Private::EPropertyClass::Object, "Image", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(FSlotImage, Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_Image_MetaData, ARRAY_COUNT(NewProp_Image_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Image,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SlotImage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FSlotImage),
				alignof(FSlotImage),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlotImage_CRC() { return 3729018862U; }
	void UUIComponent::StaticRegisterNativesUUIComponent()
	{
		UClass* Class = UUIComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropToIventory", &UUIComponent::execDropToIventory },
			{ "GetInventoryItem", &UUIComponent::execGetInventoryItem },
			{ "HideImageGrid", &UUIComponent::execHideImageGrid },
			{ "Initialize", &UUIComponent::execInitialize },
			{ "IsAvailable", &UUIComponent::execIsAvailable },
			{ "RemoveFromInventory", &UUIComponent::execRemoveFromInventory },
			{ "ResetImage", &UUIComponent::execResetImage },
			{ "SetImage", &UUIComponent::execSetImage },
			{ "SetSlotImage", &UUIComponent::execSetSlotImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UUIComponent_DropToIventory()
	{
		struct UIComponent_eventDropToIventory_Parms
		{
			ABasicPickup* Pickup;
			int32 Row;
			int32 Collum;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Collum = { UE4CodeGen_Private::EPropertyClass::Int, "Collum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventDropToIventory_Parms, Collum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Row = { UE4CodeGen_Private::EPropertyClass::Int, "Row", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventDropToIventory_Parms, Row), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pickup = { UE4CodeGen_Private::EPropertyClass::Object, "Pickup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventDropToIventory_Parms, Pickup), Z_Construct_UClass_ABasicPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Row,
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
	UFunction* Z_Construct_UFunction_UUIComponent_GetInventoryItem()
	{
		struct UIComponent_eventGetInventoryItem_Parms
		{
			int32 Row;
			int32 Collum;
			ABasicPickup* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UIComponent_eventGetInventoryItem_Parms, ReturnValue), Z_Construct_UClass_ABasicPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Collum = { UE4CodeGen_Private::EPropertyClass::Int, "Collum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventGetInventoryItem_Parms, Collum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Row = { UE4CodeGen_Private::EPropertyClass::Int, "Row", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventGetInventoryItem_Parms, Row), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Row,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIComponent, "GetInventoryItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(UIComponent_eventGetInventoryItem_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUIComponent_HideImageGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
				{ "ToolTip", "Hides all the images in front of the inventory grid and put all images in a slotimage struct" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIComponent, "HideImageGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
	UFunction* Z_Construct_UFunction_UUIComponent_IsAvailable()
	{
		struct UIComponent_eventIsAvailable_Parms
		{
			int32 Row;
			int32 Collum;
			FVector2D GridSize;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((UIComponent_eventIsAvailable_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIComponent_eventIsAvailable_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridSize = { UE4CodeGen_Private::EPropertyClass::Struct, "GridSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventIsAvailable_Parms, GridSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Collum = { UE4CodeGen_Private::EPropertyClass::Int, "Collum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventIsAvailable_Parms, Collum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Row = { UE4CodeGen_Private::EPropertyClass::Int, "Row", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventIsAvailable_Parms, Row), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GridSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Row,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIComponent, "IsAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04840401, sizeof(UIComponent_eventIsAvailable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUIComponent_RemoveFromInventory()
	{
		struct UIComponent_eventRemoveFromInventory_Parms
		{
			ABasicPickup* Pickup;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pickup = { UE4CodeGen_Private::EPropertyClass::Object, "Pickup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventRemoveFromInventory_Parms, Pickup), Z_Construct_UClass_ABasicPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pickup,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIComponent, "RemoveFromInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UIComponent_eventRemoveFromInventory_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUIComponent_ResetImage()
	{
		struct UIComponent_eventResetImage_Parms
		{
			UTexture2D* Texture;
			int32 Row;
			int32 Collum;
			FVector2D GridSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridSize = { UE4CodeGen_Private::EPropertyClass::Struct, "GridSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventResetImage_Parms, GridSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Collum = { UE4CodeGen_Private::EPropertyClass::Int, "Collum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventResetImage_Parms, Collum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Row = { UE4CodeGen_Private::EPropertyClass::Int, "Row", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventResetImage_Parms, Row), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventResetImage_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GridSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Row,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIComponent, "ResetImage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04840401, sizeof(UIComponent_eventResetImage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUIComponent_SetImage()
	{
		struct UIComponent_eventSetImage_Parms
		{
			UTexture2D* Texture;
			int32 Row;
			int32 Collum;
			FVector2D GridSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridSize = { UE4CodeGen_Private::EPropertyClass::Struct, "GridSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventSetImage_Parms, GridSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Collum = { UE4CodeGen_Private::EPropertyClass::Int, "Collum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventSetImage_Parms, Collum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Row = { UE4CodeGen_Private::EPropertyClass::Int, "Row", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventSetImage_Parms, Row), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventSetImage_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GridSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Row,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIComponent, "SetImage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04840401, sizeof(UIComponent_eventSetImage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUIComponent_SetSlotImage()
	{
		struct UIComponent_eventSetSlotImage_Parms
		{
			int32 Row;
			int32 Collum;
			ABasicPickup* Pickup;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pickup = { UE4CodeGen_Private::EPropertyClass::Object, "Pickup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventSetSlotImage_Parms, Pickup), Z_Construct_UClass_ABasicPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Collum = { UE4CodeGen_Private::EPropertyClass::Int, "Collum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventSetSlotImage_Parms, Collum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Row = { UE4CodeGen_Private::EPropertyClass::Int, "Row", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UIComponent_eventSetSlotImage_Parms, Row), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pickup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Row,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIComponent, "SetSlotImage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(UIComponent_eventSetSlotImage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
				{ &Z_Construct_UFunction_UUIComponent_DropToIventory, "DropToIventory" }, // 608431982
				{ &Z_Construct_UFunction_UUIComponent_GetInventoryItem, "GetInventoryItem" }, // 1576998818
				{ &Z_Construct_UFunction_UUIComponent_HideImageGrid, "HideImageGrid" }, // 2133565422
				{ &Z_Construct_UFunction_UUIComponent_Initialize, "Initialize" }, // 2241902068
				{ &Z_Construct_UFunction_UUIComponent_IsAvailable, "IsAvailable" }, // 2215640864
				{ &Z_Construct_UFunction_UUIComponent_RemoveFromInventory, "RemoveFromInventory" }, // 349347206
				{ &Z_Construct_UFunction_UUIComponent_ResetImage, "ResetImage" }, // 1739280975
				{ &Z_Construct_UFunction_UUIComponent_SetImage, "SetImage" }, // 3001991290
				{ &Z_Construct_UFunction_UUIComponent_SetSlotImage, "SetSlotImage" }, // 649904209
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
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DefaultImage_MetaData[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DefaultImage = { UE4CodeGen_Private::EPropertyClass::Object, "m_DefaultImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UUIComponent, m_DefaultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_m_DefaultImage_MetaData, ARRAY_COUNT(NewProp_m_DefaultImage_MetaData)) };
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
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "Player/UIComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rows = { UE4CodeGen_Private::EPropertyClass::Array, "Rows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000005, 1, nullptr, STRUCT_OFFSET(UUIComponent, Rows), METADATA_PARAMS(NewProp_Rows_MetaData, ARRAY_COUNT(NewProp_Rows_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rows_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Rows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCollum, METADATA_PARAMS(nullptr, 0) };
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
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_DefaultImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_SearchDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rows_Inner,
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
	IMPLEMENT_CLASS(UUIComponent, 1684914233);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIComponent(Z_Construct_UClass_UUIComponent, &UUIComponent::StaticClass, TEXT("/Script/FPS"), TEXT("UUIComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
