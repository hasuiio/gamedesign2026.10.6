#pragma once
#include "CharacterData.h"

class BatteleView
{
private:

    enum BattleState
    {
        BATTLE_FIGHT,   // ƒoƒgƒ‹’†
        BATTLE_REWARD   // •ñV‘I‘ğ’†
    };

public:

	void DrawReward();
    void DrawBattle(CharacterData::Data player, CharacterData::Data enemy);
};