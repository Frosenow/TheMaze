// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef THEMAZE_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define THEMAZE_InteractInterface_generated_h

#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_SPARSE_DATA
#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_RPC_WRAPPERS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_EVENT_PARMS \
	struct InteractInterface_eventOnInteract_Parms \
	{ \
		AActor* Caller; \
	};


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_CALLBACK_WRAPPERS
#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THEMAZE_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THEMAZE_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	THEMAZE_API UInteractInterface(UInteractInterface&&); \
	THEMAZE_API UInteractInterface(const UInteractInterface&); \
public:


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THEMAZE_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	THEMAZE_API UInteractInterface(UInteractInterface&&); \
	THEMAZE_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THEMAZE_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TheMaze"), THEMAZE_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_GENERATED_UINTERFACE_BODY() \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_GENERATED_UINTERFACE_BODY() \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_9_PROLOG \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_EVENT_PARMS


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_RPC_WRAPPERS \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_CALLBACK_WRAPPERS \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheMaze_Source_TheMaze_Public_InteractInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_SPARSE_DATA \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_CALLBACK_WRAPPERS \
	TheMaze_Source_TheMaze_Public_InteractInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEMAZE_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheMaze_Source_TheMaze_Public_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
