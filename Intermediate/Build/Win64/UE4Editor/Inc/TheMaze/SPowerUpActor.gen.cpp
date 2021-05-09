// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheMaze/Public/SPowerUpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerUpActor() {}
// Cross Module References
	THEMAZE_API UClass* Z_Construct_UClass_ASPowerUpActor_NoRegister();
	THEMAZE_API UClass* Z_Construct_UClass_ASPowerUpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheMaze();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THEMAZE_API UClass* Z_Construct_UClass_ASPowerup_NoRegister();
// End Cross Module References
	void ASPowerUpActor::StaticRegisterNativesASPowerUpActor()
	{
	}
	UClass* Z_Construct_UClass_ASPowerUpActor_NoRegister()
	{
		return ASPowerUpActor::StaticClass();
	}
	struct Z_Construct_UClass_ASPowerUpActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PowerUpClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDownDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPowerUpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerUpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPowerUpActor.h" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerUpActor, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_DecalComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_DecalComp = { "DecalComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerUpActor, DecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_DecalComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_DecalComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_PowerUpClass_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_PowerUpClass = { "PowerUpClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerUpActor, PowerUpClass), Z_Construct_UClass_ASPowerup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_PowerUpClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_PowerUpClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_CoolDownDuration_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_CoolDownDuration = { "CoolDownDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerUpActor, CoolDownDuration), METADATA_PARAMS(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_CoolDownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_CoolDownDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPowerUpActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_SphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_DecalComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_PowerUpClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_CoolDownDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPowerUpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPowerUpActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPowerUpActor_Statics::ClassParams = {
		&ASPowerUpActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASPowerUpActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPowerUpActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPowerUpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPowerUpActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPowerUpActor, 503043492);
	template<> THEMAZE_API UClass* StaticClass<ASPowerUpActor>()
	{
		return ASPowerUpActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerUpActor(Z_Construct_UClass_ASPowerUpActor, &ASPowerUpActor::StaticClass, TEXT("/Script/TheMaze"), TEXT("ASPowerUpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerUpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
