#include "Judge.h"
#include <iostream>

Judge::Judge()
{
}

//プレイヤーとCPUへのポインタを受け取り、選んだ手から勝敗を判定する
void Judge::JudgeResult(Player* player, CPU* cpu)
{
	//ポインタの指すオブジェクトの関数は -> で呼び出す
	const int playerHand = player->GetHand();
	const int cpuHand = cpu->GetHand();
	//手の番号（0:グー、1:チョキ、2:パー）に対応する表示名
	const char* handNames[] = { "グー", "チョキ", "パー" };

	std::cout << "プレイヤーの手: " << handNames[playerHand] << '\n';
	std::cout << "CPUの手: " << handNames[cpuHand] << '\n';

	//プレイヤーの手からCPUの手を引き、差で勝敗を判定する
	//0:グー、1:チョキ、2:パーでは、差が-1または2ならプレイヤーの勝ち
	//差が-2のグー対パーは負けなので、「差が0未満」では判定しない
	if (playerHand - cpuHand == -1 || playerHand - cpuHand == 2)
	{
		std::cout << "プレイヤーの勝ちです！\n";
	}
	else
	{
		//同じ手ならあいこ、それ以外ならCPUの勝ち
		if (playerHand == cpuHand)
		{
			std::cout << "あいこです。\n";
		}
		else
		{
			std::cout << "CPUの勝ちです！\n";
		}
	}
}
