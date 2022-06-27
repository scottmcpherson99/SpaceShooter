// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
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

	//start a new game
	UFUNCTION()
		void OnExitGameClicked();

	virtual void NativeConstruct() override;
};
