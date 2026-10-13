#include "TitleScene.h"
#include <iostream>
#include <limits>

TitleScene::TitleScene()
{
    nextScene = 0;
}

void TitleScene::Initialize()
{
    nextScene = 0;
}

void TitleScene::Input()
{
    char input;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cin.get(input);

    if (input == '\n')
    {
        // Enterでメニューへ
        nextScene = 2;
    }
}

void TitleScene::Update()
{
}

void TitleScene::Draw()
{
    std::cout << "====================\n";
    std::cout << "  なんちゃって RPG\n";
    std::cout << "====================\n";
    std::cout << "\n";
    std::cout << "Enterキーで開始\n";
}

int TitleScene::GetNextScene()
{
    system("cls");
    return nextScene;
}