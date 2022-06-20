// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShooter/PlayerBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBullet() {}
// Cross Module References
	SPACESHOOTER_API UClass* Z_Construct_UClass_APlayerBullet_NoRegister();
	SPACESHOOTER_API UClass* Z_Construct_UClass_APlayerBullet();
	SPACESHOOTER_API UClass* Z_Construct_UClass_ABullet();
	UPackage* Z_Construct_UPackage__Script_SpaceShooter();
// End Cross Module References
	void APlayerBullet::StaticRegisterNativesAPlayerBullet()
	{
	}
	UClass* Z_Construct_UClass_APlayerBullet_NoRegister()
	{
		return APlayerBullet::StaticClass();
	}
	struct Z_Construct_UClass_APlayerBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABullet,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBullet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerBullet.h" },
		{ "ModuleRelativePath", "PlayerBullet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerBullet_Statics::ClassParams = {
		&APlayerBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerBullet, 4289846320);
	template<> SPACESHOOTER_API UClass* StaticClass<APlayerBullet>()
	{
		return APlayerBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerBullet(Z_Construct_UClass_APlayerBullet, &APlayerBullet::StaticClass, TEXT("/Script/SpaceShooter"), TEXT("APlayerBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
