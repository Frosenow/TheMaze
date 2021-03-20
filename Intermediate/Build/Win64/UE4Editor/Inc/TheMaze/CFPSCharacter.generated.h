// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEMAZE_CFPSCharacter_generated_h
#error "CFPSCharacter.generated.h already included, missing '#pragma once' in CFPSCharacter.h"
#endif
#define THEMAZE_CFPSCharacter_generated_h

#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_SPARSE_DATA
#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_RPC_WRAPPERS
#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACFPSCharacter(); \
	friend struct Z_Construct_UClass_ACFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ACFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(ACFPSCharacter)


#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACFPSCharacter(); \
	friend struct Z_Construct_UClass_ACFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ACFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(ACFPSCharacter)


#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACFPSCharacter(ACFPSCharacter&&); \
	NO_API ACFPSCharacter(const ACFPSCharacter&); \
public:


#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACFPSCharacter(ACFPSCharacter&&); \
	NO_API ACFPSCharacter(const ACFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACFPSCharacter)


#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(ACFPSCharacter, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(ACFPSCharacter, BaseLookUpRate); }


#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_10_PROLOG
#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_RPC_WRAPPERS \
	TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_INCLASS \
	TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_INCLASS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEMAZE_API UClass* StaticClass<class ACFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheMaze_Source_TheMaze_Public_Characters_CFPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
