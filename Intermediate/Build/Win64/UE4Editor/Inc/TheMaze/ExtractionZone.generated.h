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
#ifdef THEMAZE_ExtractionZone_generated_h
#error "ExtractionZone.generated.h already included, missing '#pragma once' in ExtractionZone.h"
#endif
#define THEMAZE_ExtractionZone_generated_h

#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_SPARSE_DATA
#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExtractionZone(); \
	friend struct Z_Construct_UClass_AExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AExtractionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(AExtractionZone)


#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAExtractionZone(); \
	friend struct Z_Construct_UClass_AExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AExtractionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(AExtractionZone)


#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExtractionZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExtractionZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExtractionZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExtractionZone(AExtractionZone&&); \
	NO_API AExtractionZone(const AExtractionZone&); \
public:


#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExtractionZone(AExtractionZone&&); \
	NO_API AExtractionZone(const AExtractionZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExtractionZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExtractionZone)


#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverlapComp() { return STRUCT_OFFSET(AExtractionZone, OverlapComp); }


#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_7_PROLOG
#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_RPC_WRAPPERS \
	TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_INCLASS \
	TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_INCLASS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_ExtractionZone_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEMAZE_API UClass* StaticClass<class AExtractionZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheMaze_Source_TheMaze_Public_ExtractionZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
