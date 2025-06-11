#pragma once

#include <Components/TextBlock.h>
#include <Components/Button.h>
#include "ParkourGameInstance.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Kismet/GameplayStatics.h>
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EndScreenWidget.generated.h"

UCLASS()
class PARKOUR_API UEndScreenWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    virtual void NativeConstruct() override;

protected:
    UPROPERTY(meta = (BindWidget))
    UTextBlock* TimeText;

    UPROPERTY(meta = (BindWidget))
    UButton* RestartButton;

    UPROPERTY(meta = (BindWidget))
    UButton* ExitButton;

    UFUNCTION()
    void OnRestartClicked();

    UFUNCTION()
    void OnExitClicked();
};
