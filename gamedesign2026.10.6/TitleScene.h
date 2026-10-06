#pragma once
#include"SceneBase.h"

class TitleScene : public SceneBase
{
public:

    TitleScene();

    void Input() override;
    void Update() override;
    void Draw() override;
};