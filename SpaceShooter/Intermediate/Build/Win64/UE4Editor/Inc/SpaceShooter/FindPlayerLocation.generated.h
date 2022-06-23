// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHOOTER_FindPlayerLocation_generated_h
#error "FindPlayerLocation.generated.h already included, missing '#pragma once' in FindPlayerLocation.h"
#endif
#define SPACESHOOTER_FindPlayerLocation_generated_h

#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_RPC_WRAPPERS
#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFindPlayerLocation(); \
	friend struct Z_Construct_UClass_UFindPlayerLocation_Statics; \
public: \
	DECLARE_CLASS(UFindPlayerLocation, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(UFindPlayerLocation)


#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFindPlayerLocation(); \
	friend struct Z_Construct_UClass_UFindPlayerLocation_Statics; \
public: \
	DECLARE_CLASS(UFindPlayerLocation, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(UFindPlayerLocation)


#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFindPlayerLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindPlayerLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFindPlayerLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindPlayerLocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFindPlayerLocation(UFindPlayerLocation&&); \
	NO_API UFindPlayerLocation(const UFindPlayerLocation&); \
public:


#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFindPlayerLocation(UFindPlayerLocation&&); \
	NO_API UFindPlayerLocation(const UFindPlayerLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFindPlayerLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindPlayerLocation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindPlayerLocation)


#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__search_random() { return STRUCT_OFFSET(UFindPlayerLocation, search_random); } \
	FORCEINLINE static uint32 __PPO__search_radius() { return STRUCT_OFFSET(UFindPlayerLocation, search_radius); }


#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_13_PROLOG
#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_INCLASS \
	SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class UFindPlayerLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_FindPlayerLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
