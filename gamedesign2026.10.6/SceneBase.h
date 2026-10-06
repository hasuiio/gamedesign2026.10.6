#pragma once

class SceneBase
{
public:
	virtual ~SceneBase() {}

	// “ü—Íˆ—
	virtual void Input() = 0;
	// XV
	virtual void Update() = 0;
	// •`‰æ
	virtual void Draw() = 0;

	SceneBase();
};