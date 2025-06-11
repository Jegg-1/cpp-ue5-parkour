// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EndScreenGamemode.generated.h"

/**
 * 
 */
UCLASS()
class PARKOUR_API AEndScreenGamemode : public AGameModeBase
{
	GENERATED_BODY()
	
	void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<class UUserWidget> EndScreenWidgetClass;
};
