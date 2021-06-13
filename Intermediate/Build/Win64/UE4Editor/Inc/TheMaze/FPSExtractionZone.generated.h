// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef THEMAZE_FPSExtractionZone_generated_h
#error "FPSExtractionZone.generated.h already included, missing '#pragma once' in FPSExtractionZone.h"
#endif
#define THEMAZE_FPSExtractionZone_generated_h

#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_SPARSE_DATA
#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSExtractionZone(); \
	friend struct Z_Construct_UClass_AFPSExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AFPSExtractionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractionZone)


#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSExtractionZone(); \
	friend struct Z_Construct_UClass_AFPSExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AFPSExtractionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractionZone)


#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSExtractionZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSExtractionZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractionZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractionZone(AFPSExtractionZone&&); \
	NO_API AFPSExtractionZone(const AFPSExtractionZone&); \
public:


#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractionZone(AFPSExtractionZone&&); \
	NO_API AFPSExtractionZone(const AFPSExtractionZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractionZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSExtractionZone)


#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(AFPSExtractionZone, DecalComp); }


#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_11_PROLOG
#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_RPC_WRAPPERS \
	TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_INCLASS \
	TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_INCLASS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_FPSExtractionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEMAZE_API UClass* StaticClass<class AFPSExtractionZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheMaze_Source_TheMaze_Public_FPSExtractionZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
