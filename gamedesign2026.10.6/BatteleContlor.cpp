#include"BatteleContlor.h"
#include"characterData.h"
#include<iostream>

void BatteleContlor::Updata()
{
	if (!IsInitialize)
	{
		model.Initialize();
	}
	else
	{
		CharacterData::Data player = model.GetPlayerData();
		CharacterData::Data enemy = model.GetEnemyData();

		switch (model.StateManager(model.battleState))
		{
		case BATTLE_FIGHT:
			view.DrawBattle(player, enemy);
			model.BattleUpdate();
			break;

		case BATTLE_REWARD:
			view.DrawReward();
			model.RewardUpdate();
			break;
		}
	}
}

void BatteleContlor::IsItWin(bool win)
{
	if (win)
	{
		nextScene = 5;
	}
}