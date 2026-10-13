#pragma once

class SceneBase
{
public:
	virtual ~SceneBase() = default;

	// 一回だけ
	virtual void Initialize() = 0;
	// 入力処理
	virtual void Input() = 0;
	// 更新
	virtual void Update() = 0;
	// 描画
	virtual void Draw() = 0;

	// 次のシーン番号
	virtual int GetNextScene() = 0;
};