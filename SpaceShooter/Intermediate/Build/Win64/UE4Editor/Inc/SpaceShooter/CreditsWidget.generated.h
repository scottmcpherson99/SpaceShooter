// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHOOTER_CreditsWidget_generated_h
#error "CreditsWidget.generated.h already included, missing '#pragma once' in CreditsWidget.h"
#endif
#define SPACESHOOTER_CreditsWidget_generated_h

#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBackButtonClicked);


#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBackButtonClicked);


#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreditsWidget(); \
	friend struct Z_Construct_UClass_UCreditsWidget_Statics; \
public: \
	DECLARE_CLASS(UCreditsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(UCreditsWidget)


#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCreditsWidget(); \
	friend struct Z_Construct_UClass_UCreditsWidget_Statics; \
public: \
	DECLARE_CLASS(UCreditsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(UCreditsWidget)


#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreditsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreditsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreditsWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreditsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreditsWidget(UCreditsWidget&&); \
	NO_API UCreditsWidget(const UCreditsWidget&); \
public:


#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreditsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreditsWidget(UCreditsWidget&&); \
	NO_API UCreditsWidget(const UCreditsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreditsWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreditsWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreditsWidget)


#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BackButton() { return STRUCT_OFFSET(UCreditsWidget, BackButton); }


#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_13_PROLOG
#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_INCLASS \
	SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_CreditsWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class UCreditsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_CreditsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
