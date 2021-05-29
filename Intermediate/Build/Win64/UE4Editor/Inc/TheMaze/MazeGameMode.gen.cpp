// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheMaze/Public/MazeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeGameMode() {}
// Cross Module References
	THEMAZE_API UClass* Z_Construct_UClass_AMazeGameMode_NoRegister();
	THEMAZE_API UClass* Z_Construct_UClass_AMazeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheMaze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_AMazeGameMode_OnMissionCompleted = FName(TEXT("OnMissionCompleted"));
	void AMazeGameMode::OnMissionCompleted(APawn* MainPawn)
	{
		MazeGameMode_eventOnMissionCompleted_Parms Parms;
		Parms.MainPawn=MainPawn;
		ProcessEvent(FindFunctionChecked(NAME_AMazeGameMode_OnMissionCompleted),&Parms);
	}
	static FName NAME_AMazeGameMode_OnMissionFailed = FName(TEXT("OnMissionFailed"));
	void AMazeGameMode::OnMissionFailed(APawn* MainPawn)
	{
		MazeGameMode_eventOnMissionFailed_Parms Parms;
		Parms.MainPawn=MainPawn;
		ProcessEvent(FindFunctionChecked(NAME_AMazeGameMode_OnMissionFailed),&Parms);
	}
	void AMazeGameMode::StaticRegisterNativesAMazeGameMode()
	{
	}
	struct Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics::NewProp_MainPawn = { "MainPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeGameMode_eventOnMissionCompleted_Parms, MainPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics::NewProp_MainPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/MazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeGameMode, nullptr, "OnMissionCompleted", nullptr, nullptr, sizeof(MazeGameMode_eventOnMissionCompleted_Parms), Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics::NewProp_MainPawn = { "MainPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeGameMode_eventOnMissionFailed_Parms, MainPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics::NewProp_MainPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/MazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeGameMode, nullptr, "OnMissionFailed", nullptr, nullptr, sizeof(MazeGameMode_eventOnMissionFailed_Parms), Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeGameMode_OnMissionFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeGameMode_OnMissionFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMazeGameMode_NoRegister()
	{
		return AMazeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMazeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatingViewpointClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpectatingViewpointClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMazeGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMazeGameMode_OnMissionCompleted, "OnMissionCompleted" }, // 3245880262
		{ &Z_Construct_UFunction_AMazeGameMode_OnMissionFailed, "OnMissionFailed" }, // 3492589543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MazeGameMode.h" },
		{ "ModuleRelativePath", "Public/MazeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameMode_Statics::NewProp_SpectatingViewpointClass_MetaData[] = {
		{ "Category", "Spectating" },
		{ "ModuleRelativePath", "Public/MazeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeGameMode_Statics::NewProp_SpectatingViewpointClass = { "SpectatingViewpointClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeGameMode, SpectatingViewpointClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_SpectatingViewpointClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_SpectatingViewpointClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGameMode_Statics::NewProp_SpectatingViewpointClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazeGameMode_Statics::ClassParams = {
		&AMazeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMazeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMazeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeGameMode, 1166126277);
	template<> THEMAZE_API UClass* StaticClass<AMazeGameMode>()
	{
		return AMazeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeGameMode(Z_Construct_UClass_AMazeGameMode, &AMazeGameMode::StaticClass, TEXT("/Script/TheMaze"), TEXT("AMazeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
