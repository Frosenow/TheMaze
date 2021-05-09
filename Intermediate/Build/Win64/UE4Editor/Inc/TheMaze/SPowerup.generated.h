// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEMAZE_SPowerup_generated_h
#error "SPowerup.generated.h already included, missing '#pragma once' in SPowerup.h"
#endif
#define THEMAZE_SPowerup_generated_h

#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_SPARSE_DATA
#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTickPowerup);


#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTickPowerup);


#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_EVENT_PARMS
#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_CALLBACK_WRAPPERS
#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPowerup(); \
	friend struct Z_Construct_UClass_ASPowerup_Statics; \
public: \
	DECLARE_CLASS(ASPowerup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(ASPowerup)


#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASPowerup(); \
	friend struct Z_Construct_UClass_ASPowerup_Statics; \
public: \
	DECLARE_CLASS(ASPowerup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(ASPowerup)


#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPowerup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPowerup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerup(ASPowerup&&); \
	NO_API ASPowerup(const ASPowerup&); \
public:


#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerup(ASPowerup&&); \
	NO_API ASPowerup(const ASPowerup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPowerup)


#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PowerupInterval() { return STRUCT_OFFSET(ASPowerup, PowerupInterval); } \
	FORCEINLINE static uint32 __PPO__TotalNrOfTicks() { return STRUCT_OFFSET(ASPowerup, TotalNrOfTicks); }


#define TheMaze_Source_TheMaze_Public_SPowerup_h_9_PROLOG \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_EVENT_PARMS


#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_RPC_WRAPPERS \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_CALLBACK_WRAPPERS \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_INCLASS \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheMaze_Source_TheMaze_Public_SPowerup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_CALLBACK_WRAPPERS \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_INCLASS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_SPowerup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEMAZE_API UClass* StaticClass<class ASPowerup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheMaze_Source_TheMaze_Public_SPowerup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
