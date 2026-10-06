#pragma once
#include "SceneBase.h"

// 全部のシーンを持たせる
#include"TitleScene.h"
#include"MenuScene.h"
#include"CharacterSelectScene.h"
#include"BatteleScene.h"
#include"ResultScene.h"

class SceneManager
{
private:
    // 今どのシーンか
    SceneBase* currentScene;

    // シーンのコンストラクター
    TitleScene title;
    MenuScene menu;
    CharacterSelectScene characterSelect;
    BatteleScene battele;
    ResultScene result;

public:
    SceneManager();

   // これで今のシーンから別のシーンに変更する
    void ChangeScene(SceneBase* scene);

    void Initialize();
    void Update();
    void Draw();
};
