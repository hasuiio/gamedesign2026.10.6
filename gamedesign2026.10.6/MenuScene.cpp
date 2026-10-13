#include "MenuScene.h"
#include <iostream>

MenuScene::MenuScene()
{
    nextScene = 0;
}

void MenuScene::Initialize()
{
    nextScene = 0;
}

void MenuScene::Input()
{
    int input;

    std::cin >> input;


    if (input == 1)
    {
        nextScene = 3;  // キャラクター選択
    }
    else if (input == 2)
    {
        nextScene = 99; // ゲーム終了
    }
    else if (input == 3)
    {
        nextScene = 1;  // タイトル
    }
}

void MenuScene::Update()
{
}

void MenuScene::Draw()
{
    std::cout << "====================\n";
    std::cout << "  　　メニュー\n";
    std::cout << "====================\n";
    std::cout << "\n";
    std::cout << "１- キャラクター選択\n";
    std::cout << "２- ゲーム終了\n";
    std::cout << "３ - タイトルへ\n";
}

int MenuScene::GetNextScene()
{
    system("cls");
    return nextScene;
}