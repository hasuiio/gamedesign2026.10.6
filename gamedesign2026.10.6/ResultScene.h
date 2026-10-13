#pragma once
#include"SceneBase.h"

class ResultScene : public SceneBase
{
private:
    int nextScene;

    // Ÿ”s‚ğ•Û‘¶‚·‚é
    bool isWin;
public:

    ResultScene();

    void SetResult(bool win);

    void Initialize() override;
    void Input() override;
    void Update() override;
    void Draw() override;

    int GetNextScene() override;
};