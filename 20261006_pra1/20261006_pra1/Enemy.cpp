#include "Enemy.h"
#include "Config.h"
#include <iostream>
using namespace std;


//コンストラクタ
Enemy::Enemy() :Character()
{
}

//敵の行動
void Enemy::Action(Character& target)
{
	int choice;

	choice = rand() % 1 + 1;
	if (choice == Config::ACTION_ATTACK)
	{
		Attack(target);
	}
	else if (choice == Config::ACTION_RECOVERY)
	{
		Recovery();
	}
}
