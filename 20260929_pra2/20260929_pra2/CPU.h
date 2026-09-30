#pragma once
#include "config.h"
class CPU
{
public:
	//コンストラクタ
	CPU();
	//CPUのランダムで手を取得する関数
	void GetCPUInput();
	//CPUの手を返す関数
	int GetHand();
private:
	//CPUの入力する手
	int CpuInput;
};

