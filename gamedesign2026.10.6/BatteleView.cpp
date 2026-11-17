#include"BatteleView.h"
#include<iostream>

void BatteleView::Draw()
{
    if (battleState == BATTLE_REWARD)
    {
        std::cout << "====================\n";
        std::cout << "      •ñV‘I‘ð\n";
        std::cout << "====================\n";
        std::cout << "1 - HP‚ð30‰ñ•œ\n";
        std::cout << "2 - UŒ‚—Í‚ð5ƒAƒbƒv\n";
        return;
    }

    std::cout << "====================\n";
    std::cout << "       ƒoƒgƒ‹\n";
    std::cout << "====================\n";
    std::cout << "\n";

    // ŽålŒö
    std::cout << player.name << "\n";
    std::cout << "HP : " << player.hp << "\n";

    std::cout << "\n";

    // “G
    std::cout << enemy.name << "\n";
    std::cout << "HP : " << enemy.hp << "\n";

    std::cout << "\n";
    std::cout << "1 - UŒ‚\n";
    std::cout << "2 - –hŒä\n";
}