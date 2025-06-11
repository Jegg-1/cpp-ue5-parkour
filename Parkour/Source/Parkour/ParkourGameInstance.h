#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ParkourGameInstance.generated.h"

UCLASS()
class PARKOUR_API UParkourGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	void SetParkourTime(float Time);
	float GetParkourTime();
	bool IsTimeSet() const;

private:
	float ParkourTime = 0.0f;
	bool TimeSet = false;
};
