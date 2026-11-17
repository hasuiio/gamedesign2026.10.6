#pragma once
#include"BatteleModle.h"
#include"BatteleView.h"

class BatteleContlor
{
private:

	BatteleModle model;
	BatteleView view;

	int nextScene;

	bool IsInitialize;

	enum BattleState
	{
		BATTLE_FIGHT,   // ƒoƒgƒ‹’†
		BATTLE_REWARD   // •ñV‘I‘ğ’†
	};

public:

	void Updata();
	void IsItWin(bool win);
};