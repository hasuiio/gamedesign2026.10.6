#pragma once
#include <string>

class CharacterData
{
public:

    struct Data
    {
        std::string name;

        int hp;
        int attack;
        int defense;
    };

    Data characterData[3];

    Data monsterData[3];

    // キャラクターデータ
    CharacterData();

    // モンスターデータ
    void MonsterData();
};