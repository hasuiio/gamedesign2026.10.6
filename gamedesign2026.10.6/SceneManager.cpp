#include "SceneManager.h"
#include <iostream>

SceneManager::SceneManager()
{
	currentScene = &title;


	currentScene->Initialize();
}

void SceneManager::ChangeScene(SceneBase* scene)
{
	// scene ‚É“ü‚Á‚½ƒV[ƒ“‚É‘ã‚í‚é
	currentScene = scene;

	currentScene->Initialize();
}

void SceneManager::Initialize()
{
	
}

void SceneManager::Update()
{
    if (currentScene == nullptr)
    {
        return;
    }

    // ¡‚¢‚éScene‚É“ü—Í‚³‚¹‚é
    currentScene->Input();

    // ¡‚¢‚éScene‚©‚çŽŸ‚ÌScene”Ô†‚ð‚à‚ç‚¤
    int nextScene = currentScene->GetNextScene();

    // Scene”Ô†‚É‚æ‚Á‚ÄŽÀÛ‚É•ÏX‚·‚é
    if (nextScene == 1)
    {
        ChangeScene(&title);
    }
    else if (nextScene == 2)
    {
        ChangeScene(&menu);
    }
    else if (nextScene == 3)
    {
        ChangeScene(&characterSelect);
    }
    else if (nextScene == 4)
    {
        battele.SetPlayer(characterSelect.GetSelectedCharacter());
        ChangeScene(&battele);
    }
    else if (nextScene == 5)
    {
        ChangeScene(&result);
    }
    else if (nextScene == 99)
    {
        exit(0);
    }

    currentScene->Update();
}

void SceneManager::Draw()
{
	// •`‰æ
	if (currentScene != nullptr)
	{
		currentScene->Draw();
	}
}