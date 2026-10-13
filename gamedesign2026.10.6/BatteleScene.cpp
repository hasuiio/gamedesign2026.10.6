#include "BatteleScene.h"
#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>

BatteleScene::BatteleScene()
{
    nextScene = 0;

    // プレイヤーを初期化
    player = { "", 0, 0, 0 };

    // 敵を初期化
    enemy = { "", 0, 0, 0 };

    // 最初の一回だけ乱数調整
    srand((unsigned int)time(nullptr));
}

void BatteleScene::Initialize()
{
    nextScene = 0;

    // 敵を作る
    enemy = { "スライム", 80, 25, 5 };
}

void BatteleScene::SetPlayer(CharacterData::Data character)
{
    player = character;
}

void BatteleScene::Input()
{
    int input;

    std::cout << "コマンドを選択：";
    std::cin >> input;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (input == 1)
    {
        // 敵に与えるダメージ
        int damage = player.attack - enemy.defense;

        // ダメージが0以下にならないようにする
        if (damage < 1)
        {
            damage = 1;
        }

        // スライムがランダムで防御する
        int random = rand() % 100;

        if (random < 30)
        {
            // 防御成功
            damage /= 2;

            std::cout << enemy.name << "は防御した！\n";
        }
        else
        {
            std::cout << enemy.name << "は防御できなかった！\n";
        }

        // ダメージを与える
        enemy.hp -= damage;

        std::cout << "\n";
        std::cout << player.name << "の攻撃！\n";
        std::cout << enemy.name << "に"
            << damage << "ダメージ！\n";

        // 敵が倒れた
        if (enemy.hp <= 0)
        {
            enemy.hp = 0;

            std::cout << enemy.name << "を倒した！\n";

            // とりあえず結果画面へ
            nextScene = 5;
            return;
        }

        // 敵の攻撃
        int enemyDamage = enemy.attack - player.defense;

        // 最低1ダメージ
        if (enemyDamage < 1)
        {
            enemyDamage = 1;
        }

        player.hp -= enemyDamage;

        std::cout << player.name << "に"
            << enemyDamage << "ダメージ！\n";

        // 主人公が倒れた
        if (player.hp <= 0)
        {
            player.hp = 0;

            std::cout << player.name << "は倒れた...\n";

            nextScene = 5;
        }
    }
    else if (input == 2)
    {
        std::cout << "\n";
        std::cout << player.name << "は防御した！\n";
    }
}

void BatteleScene::Update()
{
}

void BatteleScene::Draw()
{
    std::cout << "====================\n";
    std::cout << "       バトル\n";
    std::cout << "====================\n";
    std::cout << "\n";

    // 主人公
    std::cout << player.name << "\n";
    std::cout << "HP : " << player.hp << "\n";

    std::cout << "\n";

    // 敵
    std::cout << enemy.name << "\n";
    std::cout << "HP : " << enemy.hp << "\n";

    std::cout << "\n";
    std::cout << "1 - 攻撃\n";
    std::cout << "2 - 防御\n";
}

int BatteleScene::GetNextScene()
{
    return nextScene;
}
