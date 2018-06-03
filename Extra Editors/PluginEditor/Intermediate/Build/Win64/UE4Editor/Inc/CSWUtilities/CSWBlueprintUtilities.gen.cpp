// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CSWBlueprintUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSWBlueprintUtilities() {}
// Cross Module References
	CSWUTILITIES_API UClass* Z_Construct_UClass_UCSWBlueprintUtilities_NoRegister();
	CSWUTILITIES_API UClass* Z_Construct_UClass_UCSWBlueprintUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CSWUtilities();
	CSWUTILITIES_API UFunction* Z_Construct_UFunction_UCSWBlueprintUtilities_GetAllActorsWithComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UCSWBlueprintUtilities::StaticRegisterNativesUCSWBlueprintUtilities()
	{
		UClass* Class = UCSWBlueprintUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllActorsWithComponent", &UCSWBlueprintUtilities::execGetAllActorsWithComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCSWBlueprintUtilities_GetAllActorsWithComponent()
	{
		struct CSWBlueprintUtilities_eventGetAllActorsWithComponent_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<UActorComponent>  Component;
			TArray<AActor*> OutActors;
			TArray<UActorComponent*> OutActorComponents;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutActorComponents_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActorComponents = { UE4CodeGen_Private::EPropertyClass::Array, "OutActorComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000180, 1, nullptr, STRUCT_OFFSET(CSWBlueprintUtilities_eventGetAllActorsWithComponent_Parms, OutActorComponents), METADATA_PARAMS(NewProp_OutActorComponents_MetaData, ARRAY_COUNT(NewProp_OutActorComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActorComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActorComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors = { UE4CodeGen_Private::EPropertyClass::Array, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CSWBlueprintUtilities_eventGetAllActorsWithComponent_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Class, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000082, 1, nullptr, STRUCT_OFFSET(CSWBlueprintUtilities_eventGetAllActorsWithComponent_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CSWBlueprintUtilities_eventGetAllActorsWithComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActorComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActorComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CSW|Utilities::BlueprintLibary" },
				{ "DeterminesOutputType", "Component" },
				{ "DisplayName", "CSW::Get All Actors With Component" },
				{ "DynamicOutputParam", "OutActorComponents" },
				{ "ModuleRelativePath", "Public/CSWBlueprintUtilities.h" },
				{ "ToolTip", "* Find all Actors in the world with the specified component\n* This is a slow operation, use with caution e.g. do not use every frame" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSWBlueprintUtilities, "GetAllActorsWithComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(CSWBlueprintUtilities_eventGetAllActorsWithComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCSWBlueprintUtilities_NoRegister()
	{
		return UCSWBlueprintUtilities::StaticClass();
	}
	UClass* Z_Construct_UClass_UCSWBlueprintUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_CSWUtilities,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCSWBlueprintUtilities_GetAllActorsWithComponent, "GetAllActorsWithComponent" }, // 360880339
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CSWBlueprintUtilities.h" },
				{ "ModuleRelativePath", "Public/CSWBlueprintUtilities.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCSWBlueprintUtilities>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCSWBlueprintUtilities::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UCSWBlueprintUtilities, 3328347417);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSWBlueprintUtilities(Z_Construct_UClass_UCSWBlueprintUtilities, &UCSWBlueprintUtilities::StaticClass, TEXT("/Script/CSWUtilities"), TEXT("UCSWBlueprintUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSWBlueprintUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
