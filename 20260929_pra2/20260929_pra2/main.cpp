#include<iostream>
#include<cstdlib>
#include<ctime>
#include "Player.h"
#include "CPU.h"
#include "Judge.h"

int main()
{
	//乱数の初期化はゲーム開始時に一度だけ行う
	srand(static_cast<unsigned int>(time(nullptr)));

	//各クラスのオブジェクトを作る
	Player player;
	CPU cpu;
	Judge judge;

	//オブジェクトのアドレスをポインタに保存する
	Player* playerPtr = &player;
	CPU* cpuPtr = &cpu;
	Judge* judgePtr = &judge;

	//プレイヤーの入力を受け付ける
	playerPtr->GetPlayerInput();
	//入力が終了した場合は勝敗判定をせずに終了する
	if (!std::cin)
	{
		return 0;
	}
	//CPUの手を決め、双方のポインタをJudgeに渡す
	cpuPtr->GetCPUInput();
	judgePtr->JudgeResult(playerPtr, cpuPtr);
	return 0;
}