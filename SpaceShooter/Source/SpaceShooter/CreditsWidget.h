// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "CreditsWidget.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHOOTER_API UCreditsWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
		//button that will sreturn the user back to the main menu widget
		UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* BackButton;

	//return to main menu widget
	UFUNCTION()
		void OnBackButtonClicked();

	virtual void NativeConstruct() override;
};
