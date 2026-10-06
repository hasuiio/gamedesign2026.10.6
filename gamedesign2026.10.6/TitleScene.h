#pragma once
#include"SceneBase.h"

class TitleScene : public SceneBase
{
private:
    int nextScene;
public:

    TitleScene();

    void Initialize() override;
    void Input() override;
    void Update() override;
    void Draw() override;

    int GetNextScene() override;
};