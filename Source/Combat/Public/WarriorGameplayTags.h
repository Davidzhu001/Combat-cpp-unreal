// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NativeGameplayTags.h"

namespace WarriorGameplayTags
{
	// input tags
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipAxe);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipAxe);

	//Player Tag Tag
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);

	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Axe);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Axe);

}
