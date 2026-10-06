#pragma once
#include"SceneBase.h"

class MenuScene : public SceneBase
{
public:

    MenuScene();

    void Input() override;
    void Update() override;
    void Draw() override;
};
