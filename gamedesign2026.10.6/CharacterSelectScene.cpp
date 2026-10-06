#include "CharacterSelectScene.h"
#include <iostream>

CharacterSelectScene::CharacterSelectScene()
{
    nextScene = 0;
}

void CharacterSelectScene::Initialize()
{
    nextScene = 0;
}

// キャラクター選ぶ
void CharacterSelectScene::Input()
{
    int input;

    std::cin >> input;

    if (input >= 1 && input <= 3)
    {
        int index = input - 1;

        std::cout << "\n";
        std::cout << "名前 : "
            << character.characterData[index].name << "\n";

        std::cout << "HP : "
            << character.characterData[index].hp << "\n";

        std::cout << "攻撃 : "
            << character.characterData[index].attack << "\n";

        std::cout << "防御 : "
            << character.characterData[index].defense << "\n";

        nextScene = 4;
    }
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
    std::cout << "1 - " << character.characterData[0].name << "\n";
    std::cout << "2 - " << character.characterData[1].name << "\n";
    std::cout << "3 - " << character.characterData[2].name << "\n";
}

int CharacterSelectScene::GetNextScene()
{
    return nextScene;
}