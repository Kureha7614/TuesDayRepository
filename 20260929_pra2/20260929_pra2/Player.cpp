#include "Player.h"
#include<iostream>
#include <sstream>
#include <string>

Player::Player()
{
	//入力前の手をグーで初期化する
	PlayerInput = 0;
}
//ぷれいやーの入力する手を取得する関数
void Player::GetPlayerInput()
{
	std::cout << "じゃんけんの手を入力してください(0:グー, 1:チョキ, 2:パー): ";
	//入力が0,1,2以外の場合は再度入力を促す
	while (true)
	{
		//一行ずつ読み取り、文字や小数が混ざった入力も確認する
		std::string line;
		//入力が終了したら呼び出し元に戻る
		if (!std::getline(std::cin, line))
		{
			return;
		}
		std::istringstream input(line);
		int hand;
		char extra;
		//整数が一つだけ入力され、0から2の範囲内なら採用する
		if ((input >> hand) && !(input >> extra) && hand >= MIN && hand <= MAX)
		{
			PlayerInput = hand;
			break;
		}
		else
		{
			std::cout << "無効な入力です。再度入力してください: ";
		}
	}
}

//保存済みの手を返す（ここでは再入力しない）
int Player::GetHand()
{
	return PlayerInput;
}