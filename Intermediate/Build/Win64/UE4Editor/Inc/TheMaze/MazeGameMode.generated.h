// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef THEMAZE_MazeGameMode_generated_h
#error "MazeGameMode.generated.h already included, missing '#pragma once' in MazeGameMode.h"
#endif
#define THEMAZE_MazeGameMode_generated_h

#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_SPARSE_DATA
#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_RPC_WRAPPERS
#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_EVENT_PARMS \
	struct MazeGameMode_eventOnMissionCompleted_Parms \
	{ \
		APawn* MainPawn; \
	}; \
	struct MazeGameMode_eventOnMissionFailed_Parms \
	{ \
		APawn* MainPawn; \
	};


#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_CALLBACK_WRAPPERS
#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeGameMode(); \
	friend struct Z_Construct_UClass_AMazeGameMode_Statics; \
public: \
	DECLARE_CLASS(AMazeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(AMazeGameMode)


#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAMazeGameMode(); \
	friend struct Z_Construct_UClass_AMazeGameMode_Statics; \
public: \
	DECLARE_CLASS(AMazeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheMaze"), NO_API) \
	DECLARE_SERIALIZER(AMazeGameMode)


#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMazeGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMazeGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeGameMode(AMazeGameMode&&); \
	NO_API AMazeGameMode(const AMazeGameMode&); \
public:


#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMazeGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeGameMode(AMazeGameMode&&); \
	NO_API AMazeGameMode(const AMazeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMazeGameMode)


#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpectatingViewpointClass() { return STRUCT_OFFSET(AMazeGameMode, SpectatingViewpointClass); }


#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_8_PROLOG \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_EVENT_PARMS


#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_RPC_WRAPPERS \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_CALLBACK_WRAPPERS \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_INCLASS \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_PRIVATE_PROPERTY_OFFSET \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_CALLBACK_WRAPPERS \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_INCLASS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_MazeGameMode_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEMAZE_API UClass* StaticClass<class AMazeGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheMaze_Source_TheMaze_Public_MazeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
