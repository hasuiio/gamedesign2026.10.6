#include "MenuScene.h"
#include <iostream>

MenuScene::MenuScene()
{
}

void MenuScene::Input()
{
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
    std::cout << "３- タイトルへ\n";
}