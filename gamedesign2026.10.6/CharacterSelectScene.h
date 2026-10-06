#pragma once
#include"SceneBase.h"

class CharacterSelectScene : public SceneBase
{
public:

    struct CharacterData
    {
        const char* name;
        int hp;
        int attack;
        int defense;
    };

    CharacterSelectScene();

    void Input() override;
    void Update() override;
    void Draw() override;
};