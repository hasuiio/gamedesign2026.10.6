#include "ResultScene.h"
#include <iostream>

ResultScene::ResultScene()
{
    nextScene = 0;
}

void ResultScene::Initialize()
{
    nextScene = 0;
}

void ResultScene::Input()
{
    char input;

    std::cin.get(input);

    if (input == '\n')
    {
        // Enterでメニューへ
        nextScene = 2;
    }
}

void ResultScene::Update()
{
}

void ResultScene::Draw()
{
    std::cout << "====================\n";
    std::cout << "       結果\n";
    std::cout << "====================\n";

    if (isWin)
    {
        std::cout << "勝利！おめでとう！\n";
    }
    else
    {
        std::cout << "敗北...\n";
    }

    std::cout << "\n";
    std::cout << "Enterキーでメニューへ\n";
}

int ResultScene::GetNextScene()
{
    system("cls");
    return nextScene;
}

void ResultScene::SetResult(bool win)
{
    isWin = win;
}