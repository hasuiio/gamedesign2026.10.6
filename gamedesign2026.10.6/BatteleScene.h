#pragma once
#include"SceneBase.h"

class BatteleScene : public SceneBase
{
public:

    BatteleScene();

    void Input() override;
    void Update() override;
    void Draw() override;
};