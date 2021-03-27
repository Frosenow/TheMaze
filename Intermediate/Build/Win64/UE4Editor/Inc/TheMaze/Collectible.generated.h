// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEMAZE_Collectible_generated_h
#error "Collectible.generated.h already included, missing '#pragma once' in Collectible.h"
#endif
#define THEMAZE_Collectible_generated_h

#define TheMaze_Source_TheMaze_Private_Collectible_h_10_SPARSE_DATA
#define TheMaze_Source_TheMaze_Private_Collectible_h_10_RPC_WRAPPERS
#define TheMaze_Source_TheMaze_Private_Collectible_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define TheMaze_Source_TheMaze_Private_Collectible_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectible(); \
	friend struct Z_Construct_UClass_ACollectible_Statics; \
public: \
	DECLARE_CLASS(ACollectible, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(ACollectible)


#define TheMaze_Source_TheMaze_Private_Collectible_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACollectible(); \
	friend struct Z_Construct_UClass_ACollectible_Statics; \
public: \
	DECLARE_CLASS(ACollectible, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(ACollectible)


#define TheMaze_Source_TheMaze_Private_Collectible_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectible(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectible) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectible); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectible); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectible(ACollectible&&); \
	NO_API ACollectible(const ACollectible&); \
public:


#define TheMaze_Source_TheMaze_Private_Collectible_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectible(ACollectible&&); \
	NO_API ACollectible(const ACollectible&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectible); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectible); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectible)


#define TheMaze_Source_TheMaze_Private_Collectible_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ACollectible, MeshComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ACollectible, SphereComp); } \
	FORCEINLINE static uint32 __PPO__PickupFX() { return STRUCT_OFFSET(ACollectible, PickupFX); }


#define TheMaze_Source_TheMaze_Private_Collectible_h_7_PROLOG
#define TheMaze_Source_TheMaze_Private_Collectible_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Private_Collectible_h_10_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Private_Collectible_h_10_SPARSE_DATA \
	TheMaze_Source_TheMaze_Private_Collectible_h_10_RPC_WRAPPERS \
	TheMaze_Source_TheMaze_Private_Collectible_h_10_INCLASS \
	TheMaze_Source_TheMaze_Private_Collectible_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheMaze_Source_TheMaze_Private_Collectible_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Private_Collectible_h_10_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Private_Collectible_h_10_SPARSE_DATA \
	TheMaze_Source_TheMaze_Private_Collectible_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Private_Collectible_h_10_INCLASS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Private_Collectible_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEMAZE_API UClass* StaticClass<class ACollectible>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheMaze_Source_TheMaze_Private_Collectible_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
