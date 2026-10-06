#pragma once
#include"SceneBase.h"

class MenuScene : public SceneBase
{
private:
    int nextScene;

public:
    MenuScene();

    void Initialize() override;
    void Input() override;
    void Update() override;
    void Draw() override;

    int GetNextScene() override;
};
