// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShooter/HowTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo() {}
// Cross Module References
	SPACESHOOTER_API UClass* Z_Construct_UClass_UHowTo_NoRegister();
	SPACESHOOTER_API UClass* Z_Construct_UClass_UHowTo();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SpaceShooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHowTo::execOnBackButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonClicked();
		P_NATIVE_END;
	}
	void UHowTo::StaticRegisterNativesUHowTo()
	{
		UClass* Class = UHowTo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackButtonClicked", &UHowTo::execOnBackButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHowTo_OnBackButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHowTo_OnBackButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//return to main menu widget\n" },
		{ "ModuleRelativePath", "HowTo.h" },
		{ "ToolTip", "return to main menu widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHowTo_OnBackButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHowTo, nullptr, "OnBackButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHowTo_OnBackButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHowTo_OnBackButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHowTo_OnBackButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHowTo_OnBackButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHowTo_NoRegister()
	{
		return UHowTo::StaticClass();
	}
	struct Z_Construct_UClass_UHowTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHowTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHowTo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHowTo_OnBackButtonClicked, "OnBackButtonClicked" }, // 3491287838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHowTo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HowTo.h" },
		{ "ModuleRelativePath", "HowTo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHowTo_Statics::NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HowTo" },
		{ "Comment", "//button that will sreturn the user back to the main menu widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HowTo.h" },
		{ "ToolTip", "button that will sreturn the user back to the main menu widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHowTo_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHowTo, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHowTo_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHowTo_Statics::NewProp_BackButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHowTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHowTo_Statics::NewProp_BackButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHowTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHowTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHowTo_Statics::ClassParams = {
		&UHowTo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHowTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHowTo_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHowTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHowTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHowTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHowTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHowTo, 2289648465);
	template<> SPACESHOOTER_API UClass* StaticClass<UHowTo>()
	{
		return UHowTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHowTo(Z_Construct_UClass_UHowTo, &UHowTo::StaticClass, TEXT("/Script/SpaceShooter"), TEXT("UHowTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHowTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
