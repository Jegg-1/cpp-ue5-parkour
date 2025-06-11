#pragma once

#include "CoreMinimal.h"
#include "ParkourGameInstance.h"
#include "FPSCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/GameModeBase.h"
#include "ParkourGamemode.generated.h"


UCLASS()
class PARKOUR_API AParkourGamemode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AParkourGamemode();

	void BeginPlay() override;
	void StartParkour();
	void EndParkour();
	float GetParkourTime() const;

protected:

	virtual void SetupInput();

	UFUNCTION()
	void OnEscapePressed();

private:
	float StartTime = 0.0f;
	float EndTime = 0.0f;
};
