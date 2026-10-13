#include"CharacterData.h"

CharacterData::CharacterData()
{
    characterData[0] = { "戦士", 100, 20, 10 };
    characterData[1] = { "魔法使い", 70, 30, 5 };
    characterData[2] = { "？？？", 80, 25, 10 };
}


void CharacterData::MonsterData()
{
    // モンスター1：弱い
    characterData[0] = { "スライム", 50, 10, 5 };

    // モンスター2：普通
    characterData[1] = { "ゴブリン", 40, 18, 10 };

    // モンスター3：強い
    characterData[2] = { "ドラゴン", 130, 20, 15 };
}