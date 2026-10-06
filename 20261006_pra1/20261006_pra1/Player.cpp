#include "Player.h"
#include"config.h"

#include<iostream>
using namespace std;

/// コンストラクタ
Player::Player() :Character()
{

}
/// ぷれいやーの行動選択
void Player::Action(Character& target)
{
	int choice;

	cout << "\n{ぷれいやーのターン}" << "1:攻撃\n 2:回復\n" << ">>" << endl;

	while (true)
	{
		cin >> choice;
		if(config::ACTION_ATTACK > choice || config::ACTION_RECOVERY < choice)
		{
			cout << "1か2を入力してください" << endl;
			continue;

		}
		else
		{
				break;
		}
    }

}
