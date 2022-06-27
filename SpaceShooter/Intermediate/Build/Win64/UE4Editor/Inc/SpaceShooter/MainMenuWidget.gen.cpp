// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShooter/MainMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}
// Cross Module References
	SPACESHOOTER_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
	SPACESHOOTER_API UClass* Z_Construct_UClass_UMainMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SpaceShooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenuWidget::execOnExitGameClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitGameClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnStartGameClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartGameClicked();
		P_NATIVE_END;
	}
	void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
	{
		UClass* Class = UMainMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExitGameClicked", &UMainMenuWidget::execOnExitGameClicked },
			{ "OnStartGameClicked", &UMainMenuWidget::execOnStartGameClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//start a new game\n" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "start a new game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnExitGameClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//start a new game\n" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "start a new game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnStartGameClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
	{
		return UMainMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartGameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartGameButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitGameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitGameButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked, "OnExitGameClicked" }, // 1362970368
		{ &Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked, "OnStartGameClicked" }, // 3115972476
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainMenuWidget.h" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "//button that will start the game\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "button that will start the game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartGameButton = { "StartGameButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, StartGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartGameButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ExitGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "//button that will exit the game\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "button that will exit the game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ExitGameButton = { "ExitGameButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, ExitGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ExitGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ExitGameButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartGameButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ExitGameButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
		&UMainMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenuWidget, 320391485);
	template<> SPACESHOOTER_API UClass* StaticClass<UMainMenuWidget>()
	{
		return UMainMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenuWidget(Z_Construct_UClass_UMainMenuWidget, &UMainMenuWidget::StaticClass, TEXT("/Script/SpaceShooter"), TEXT("UMainMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
