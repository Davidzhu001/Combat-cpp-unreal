// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WarriorTypes/WarriorStructTypes.h"
#include "DataAssets/StartupData//DataAsset_StartPDataBase.h"
#include "DataAsset_HeroStartPData.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_API UDataAsset_HeroStartPData : public UDataAsset_StartPDataBase
{
	GENERATED_BODY()
public:
	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1) override;
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData", meta = (TitleProperty = "InputTag"))
	TArray<FwarriorHeroAbilitySet> HeroStartUpAbilitySets;
};
