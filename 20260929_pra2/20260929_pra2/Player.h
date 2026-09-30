#pragma once
#include "config.h"
class Player
{
private:
	//ぷれいやーの入力する手
	int PlayerInput;
public:
	//コンストラクタ
	Player();
	//ぷれいやーの入力する手を取得する関数
	void GetPlayerInput();
	//ぷれいやーの手を返す関数
	int GetHand();
};

