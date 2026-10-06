#pragma once
#include"SceneBase.h"
#include "CharacterData.h"

class CharacterSelectScene : public SceneBase
{
private:
    // キャラクターデータ
    CharacterData character;

    int nextScene;
public:
    CharacterSelectScene();

    void Initialize() override;
    void Input() override;
    void Update() override;
    void Draw() override;

    int GetNextScene() override;
};