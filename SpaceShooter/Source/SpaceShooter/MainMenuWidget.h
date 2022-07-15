// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHOOTER_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	//button that will start the game
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* StartGameButton;

	//start a new game
	UFUNCTION()
		void OnStartGameClicked();

	//button that will exit the game
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* ExitGameButton;

	//button that will choose the next level
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* NextButton;

	//button that will choose the previous level
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* PreviousButton;

	//button that will show the howto widget
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* HowToButton;

	//button that will show the credits widget
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* creditsButton;

	//level name
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* LevelName;

	//show the name of the level
	void UpdateLevelName(FName name_);

	//start a new game
	UFUNCTION()
		void OnExitGameClicked();

	//choose the next level
	UFUNCTION()
		void OnNextLevelClicked();

	//choose the previous level
	UFUNCTION()
		void OnPreviousLevelClicked();

	//choose the how to widget
	UFUNCTION()
		void OnHowToClicked();

	//choose the credits widget
	UFUNCTION()
		void OnCreditsClicked();

	virtual void NativeConstruct() override;
	
	//level names
	FName levelNames[3] = { FName("OpenSpace"), FName("FourBoxes"), FName("Fortress") };

	int levelIndex = 0;

};
