#pragma once
#include "SceneBase.h"
#include "CharacterData.h"

class BatteleScene : public SceneBase
{
private:
    int nextScene;

    // 選んだキャラクター
    CharacterData::Data player;

    // 敵
    CharacterData::Data enemy;

    // 敵のデータ3体分
    CharacterData::Data enemies[3];

    // 現在戦っている敵の番号
    int enemyIndex;

    // バトル中か、報酬選択中か
    int battleState;

    //今の状態
    enum BattleState
    {
        BATTLE_FIGHT,   // バトル中
        BATTLE_REWARD   // 報酬選択中
    };

public:

    BatteleScene();

    void Initialize() override;
    void Input() override;
    void Update() override;
    void Draw() override;

    int GetNextScene() override;

    // キャラクターを受け取る
    void SetPlayer(CharacterData::Data character);
};