#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
#include"BattleManager.h"
int main(void)
{
	//コンストラクタ
	Player player;
	Enemy enemy;
	Boss boss;
	BattleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);


	return 0;
}
