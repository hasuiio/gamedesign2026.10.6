#pragma once
#include"SceneBase.h"

class ResultScene : public SceneBase
{
public:

    ResultScene();

    void Input() override;
    void Update() override;
    void Draw() override;
};