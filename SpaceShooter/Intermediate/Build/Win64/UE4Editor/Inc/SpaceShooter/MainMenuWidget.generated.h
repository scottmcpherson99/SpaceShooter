// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHOOTER_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define SPACESHOOTER_MainMenuWidget_generated_h

#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExitGameClicked); \
	DECLARE_FUNCTION(execOnStartGameClicked);


#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExitGameClicked); \
	DECLARE_FUNCTION(execOnStartGameClicked);


#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public:


#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget)


#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartGameButton() { return STRUCT_OFFSET(UMainMenuWidget, StartGameButton); } \
	FORCEINLINE static uint32 __PPO__ExitGameButton() { return STRUCT_OFFSET(UMainMenuWidget, ExitGameButton); }


#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_13_PROLOG
#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_INCLASS \
	SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_MainMenuWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class UMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_MainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
