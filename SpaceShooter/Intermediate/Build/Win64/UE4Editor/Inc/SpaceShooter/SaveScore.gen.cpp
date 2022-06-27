// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShooter/SaveScore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveScore() {}
// Cross Module References
	SPACESHOOTER_API UClass* Z_Construct_UClass_USaveScore_NoRegister();
	SPACESHOOTER_API UClass* Z_Construct_UClass_USaveScore();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_SpaceShooter();
// End Cross Module References
	void USaveScore::StaticRegisterNativesUSaveScore()
	{
	}
	UClass* Z_Construct_UClass_USaveScore_NoRegister()
	{
		return USaveScore::StaticClass();
	}
	struct Z_Construct_UClass_USaveScore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_highScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_highScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveScore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveScore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveScore.h" },
		{ "ModuleRelativePath", "SaveScore.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveScore_Statics::NewProp_highScore_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "SaveScore.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USaveScore_Statics::NewProp_highScore = { "highScore", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveScore, highScore), METADATA_PARAMS(Z_Construct_UClass_USaveScore_Statics::NewProp_highScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveScore_Statics::NewProp_highScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveScore_Statics::NewProp_highScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveScore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveScore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveScore_Statics::ClassParams = {
		&USaveScore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveScore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveScore_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveScore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveScore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveScore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveScore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveScore, 3562214782);
	template<> SPACESHOOTER_API UClass* StaticClass<USaveScore>()
	{
		return USaveScore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveScore(Z_Construct_UClass_USaveScore, &USaveScore::StaticClass, TEXT("/Script/SpaceShooter"), TEXT("USaveScore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveScore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
