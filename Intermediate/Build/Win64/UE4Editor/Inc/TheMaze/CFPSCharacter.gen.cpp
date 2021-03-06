// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheMaze/Public/Characters/CFPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCFPSCharacter() {}
// Cross Module References
	THEMAZE_API UClass* Z_Construct_UClass_ACFPSCharacter_NoRegister();
	THEMAZE_API UClass* Z_Construct_UClass_ACFPSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TheMaze();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(ACFPSCharacter::execTimerPowerup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimerPowerup(Z_Param_TimeAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACFPSCharacter::execTraceForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TraceForward_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACFPSCharacter_TraceForward = FName(TEXT("TraceForward"));
	void ACFPSCharacter::TraceForward()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACFPSCharacter_TraceForward),NULL);
	}
	void ACFPSCharacter::StaticRegisterNativesACFPSCharacter()
	{
		UClass* Class = ACFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TimerPowerup", &ACFPSCharacter::execTimerPowerup },
			{ "TraceForward", &ACFPSCharacter::execTraceForward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics
	{
		struct CFPSCharacter_eventTimerPowerup_Parms
		{
			int32 TimeAmount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TimeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics::NewProp_TimeAmount = { "TimeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CFPSCharacter_eventTimerPowerup_Parms, TimeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics::NewProp_TimeAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeComponents" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACFPSCharacter, nullptr, "TimerPowerup", nullptr, nullptr, sizeof(CFPSCharacter_eventTimerPowerup_Parms), Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACFPSCharacter_TimerPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACFPSCharacter_TimerPowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACFPSCharacter_TraceForward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACFPSCharacter_TraceForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACFPSCharacter_TraceForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACFPSCharacter, nullptr, "TraceForward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACFPSCharacter_TraceForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACFPSCharacter_TraceForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACFPSCharacter_TraceForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACFPSCharacter_TraceForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACFPSCharacter_NoRegister()
	{
		return ACFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCarryingObjective_MetaData[];
#endif
		static void NewProp_bIsCarryingObjective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCarryingObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iMinutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iMinutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FTimerHandle_Countdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FTimerHandle_Countdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TheMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACFPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACFPSCharacter_TimerPowerup, "TimerPowerup" }, // 290936310
		{ &Z_Construct_UFunction_ACFPSCharacter_TraceForward, "TraceForward" }, // 404003032
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CFPSCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Play" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_bIsCarryingObjective_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Tell if actor overlap with CollectibleSphere\n" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
		{ "ToolTip", "Tell if actor overlap with CollectibleSphere" },
	};
#endif
	void Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_bIsCarryingObjective_SetBit(void* Obj)
	{
		((ACFPSCharacter*)Obj)->bIsCarryingObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_bIsCarryingObjective = { "bIsCarryingObjective", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFPSCharacter), &Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_bIsCarryingObjective_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_bIsCarryingObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_bIsCarryingObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iScore_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iScore = { "iScore", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, iScore), METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iSeconds_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iSeconds = { "iSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, iSeconds), METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iMinutes_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iMinutes = { "iMinutes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, iMinutes), METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iMinutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iMinutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_FTimerHandle_Countdown_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_FTimerHandle_Countdown = { "FTimerHandle_Countdown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, FTimerHandle_Countdown), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_FTimerHandle_Countdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_FTimerHandle_Countdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_TimerRatio_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_TimerRatio = { "TimerRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, TimerRatio), METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_TimerRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_TimerRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Characters/CFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPSCharacter, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_TraceDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACFPSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_SpringArmComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_bIsCarryingObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_iMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_FTimerHandle_Countdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_TimerRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACFPSCharacter_Statics::NewProp_TraceDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACFPSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACFPSCharacter_Statics::ClassParams = {
		&ACFPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACFPSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACFPSCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACFPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACFPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACFPSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACFPSCharacter, 91942230);
	template<> THEMAZE_API UClass* StaticClass<ACFPSCharacter>()
	{
		return ACFPSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACFPSCharacter(Z_Construct_UClass_ACFPSCharacter, &ACFPSCharacter::StaticClass, TEXT("/Script/TheMaze"), TEXT("ACFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
