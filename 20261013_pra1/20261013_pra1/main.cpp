#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"

int main(void)
{
	//コンストラクタ
	Player player;
	Enemy enemy;
	Boss boss;
	
	Character* character;

	character = &player;
	character->Attack();
	character = &enemy;
	character->Attack();
	character = &boss;
	character->Attack();

	return 0;
}
