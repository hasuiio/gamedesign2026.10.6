#include "TitleScene.h"
#include <iostream>

TitleScene::TitleScene()
{
}

void TitleScene::Input()
{
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