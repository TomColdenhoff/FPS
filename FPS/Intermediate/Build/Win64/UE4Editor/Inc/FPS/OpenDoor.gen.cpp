// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Tasks/OpenDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoor() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AOpenDoor_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AOpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UTask_NoRegister();
// End Cross Module References
	void AOpenDoor::StaticRegisterNativesAOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_AOpenDoor_NoRegister()
	{
		return AOpenDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_AOpenDoor()
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
				{ "IncludePath", "Tasks/OpenDoor.h" },
				{ "ModuleRelativePath", "Tasks/OpenDoor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_DoorToOpen_MetaData[] = {
				{ "Category", "OpenDoor" },
				{ "ModuleRelativePath", "Tasks/OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_DoorToOpen = { UE4CodeGen_Private::EPropertyClass::Object, "p_DoorToOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AOpenDoor, p_DoorToOpen), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_p_DoorToOpen_MetaData, ARRAY_COUNT(NewProp_p_DoorToOpen_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_DoorToOpen,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UTask_NoRegister, (int32)VTABLE_OFFSET(AOpenDoor, ITask), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AOpenDoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AOpenDoor::StaticClass,
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
	IMPLEMENT_CLASS(AOpenDoor, 3025156302);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOpenDoor(Z_Construct_UClass_AOpenDoor, &AOpenDoor::StaticClass, TEXT("/Script/FPS"), TEXT("AOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
