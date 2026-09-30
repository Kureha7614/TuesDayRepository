#pragma once
#include"config.h"
#include"CPU.h"
#include"Player.h"
class Judge
{
public:
	//コンストラクタ
	Judge();
	//勝敗を判定する関数
	void JudgeResult(Player* player, CPU* cpu);
};

