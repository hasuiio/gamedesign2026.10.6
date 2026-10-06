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