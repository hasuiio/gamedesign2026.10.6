#include<iostream>
#include"SceneManager.h"

// ここはゲームを動かすだけ
int main()
{
    // マネジメントを呼びだす
    SceneManager manager;

    while (true)
    {
        manager.Draw();
        manager.Update();
    }

    return 0;
}