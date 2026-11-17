#include"BatteleModle.h"
#include<iostream>


void BatteleModle::Initialize()
{
    // バトルの結果
    isWin = false;

    // 敵を3体用意
    enemies[0] = { "スライム", 50, 10, 5 };
    enemies[1] = { "ゴブリン", 80, 20, 10 };
    enemies[2] = { "ドラゴン", 150, 35, 20 };

    // 最初の敵
    enemyIndex = 0;
    enemy = enemies[enemyIndex];

    // バトル開始
    battleState = BATTLE_FIGHT;

    // 敵の登場メッセージ
    std::cout << enemy.name << "があらわれた！\n";
}

int BatteleModle::Input()
{
	int input;

	std::cin >> input;

	if (input == 1)
	{
		return 1;
	}
	else if (input == 2)
	{
		return 2;
	}
    else
    {
        return;
    }
}

int BatteleModle::StateManager(int battleState)
{
	switch (battleState)
	{
    case BATTLE_REWARD:		//	報酬選択
		RewardUpdate();
		break;
		
    case BATTLE_FIGHT:		//	戦闘
		BattleUpdate();
		break;
	}
}

void BatteleModle::CheckEnemy()
{
    // 次の敵がいるか確認
    enemyIndex++;

    if (enemyIndex >= 3)
    {
        std::cout << "すべての敵を倒した！\n";

        isWin = true;
        return;
    }
    else
    {
        // 次の敵を登場させる
        enemy = enemies[enemyIndex];

        std::cout << enemy.name << "が現れた！\n";

        battleState = BATTLE_FIGHT;
        return;
    }
}

void BatteleModle::RewardUpdate()
{
    std::cout << "報酬を選択：";

    int input = Input();
    std::cin.ignore(
        std::numeric_limits<std::streamsize>::max(), '\n');

    if (input == 1)
    {
        player.hp += 30;
        std::cout << "HPが30回復した！\n";
    }
    else if (input == 2)
    {
        player.attack += 5;
        std::cout << "攻撃力が5上がった！\n";
    }
    else
    {
        return; // 1か2を選ぶまで待つ
    }

}

void BatteleModle::BattleUpdate()
{
    int input = Input();

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

        // 敵が倒れたら報酬場面へ
        if (enemy.hp <= 0)
        {
            enemy.hp = 0;

            std::cout << enemy.name << "を倒した！\n";

            enemy = enemies[enemyIndex];

            std::cout << enemy.name << "があらわれた！\n";

            // 報酬選択へ
            battleState = BATTLE_REWARD;
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

        std::cout << enemy.name << "の攻撃！\n";
        std::cout << player.name << "に"
            << enemyDamage << "ダメージ！\n";

        // 主人公が倒れた
        if (player.hp <= 0)
        {
            player.hp = 0;

            std::cout << player.name << "は倒れた...\n";

            isWin = false;
        }
    }
    else if (input == 2)
    {
        std::cout << "\n";
        std::cout << player.name << "は防御した！\n";
    }
}

CharacterData::Data BatteleModle::GetPlayerData()
{
    return player;
}
CharacterData::Data BatteleModle::GetEnemyData()
{
    return enemy;
}