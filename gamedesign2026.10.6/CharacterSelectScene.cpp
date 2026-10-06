#include "CharacterSelectScene.h"
#include <iostream>

CharacterSelectScene::CharacterSelectScene()
{
}

void CharacterSelectScene::Input()
{
    CharacterData characterData[] =
    {
        {"戦士", 100, 20, 15},
        {"魔法使い", 70, 30, 5},
        {"？？？", 80, 25, 10}
    };
}

void CharacterSelectScene::Update()
{
}

void CharacterSelectScene::Draw()
{
    std::cout << "====================\n";
    std::cout << "  キャラクター選択\n";
    std::cout << "====================\n";
    std::cout << "\n";
    std::cout << "１- 剣士\n";
    std::cout << "２- 魔法使い\n";
    std::cout << "３- ？？？\n";
}