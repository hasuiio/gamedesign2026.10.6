#pragma once
#include "CharacterData.h"


class BatteleModle
{
private:

    bool isWin;


    // 選んだキャラクター
    CharacterData::Data player;

    // 敵
    CharacterData::Data enemy;

    // 敵のデータ3体分
    CharacterData::Data enemies[3];

    // 現在戦っている敵の番号
    int enemyIndex;

    
    
    enum BattleState
    {
        BATTLE_FIGHT,   // バトル中
        BATTLE_REWARD   // 報酬選択中
    };

public:
    int battleState;

	void Initialize();
	int Input();
    int StateManager(int battleState);

    void CheckEnemy();

    void RewardUpdate();
    void BattleUpdate();

    CharacterData::Data GetPlayerData();
    CharacterData::Data GetEnemyData();

};
