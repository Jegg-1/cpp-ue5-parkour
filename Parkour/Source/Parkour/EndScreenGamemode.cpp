// Fill out your copyright notice in the Description page of Project Settings.

#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "EndScreenGamemode.h"

void AEndScreenGamemode::BeginPlay()
{
    Super::BeginPlay();

    if (EndScreenWidgetClass)
    {
        UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), EndScreenWidgetClass);
        if (Widget)
        {
            Widget->AddToViewport();
            APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
            if (PC)
            {
                PC->SetShowMouseCursor(true);
                PC->SetInputMode(FInputModeUIOnly());
            }
        }
    }
}