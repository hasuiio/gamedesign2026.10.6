#pragma once
#include"SceneBase.h"

class ResultScene : public SceneBase
{
private:
    int nextScene;
public:

    ResultScene();

    void Initialize() override;
    void Input() override;
    void Update() override;
    void Draw() override;

    int GetNextScene() override;
};