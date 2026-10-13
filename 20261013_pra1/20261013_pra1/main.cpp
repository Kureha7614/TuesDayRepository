#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
#include"Wizard.h"
#include"BattleManager.h"
int main(void)
{
	//コンストラクタ
	Player player("やる気のない勇者");
	Enemy enemy("やる気のないスライム");
	Boss boss("やる気のないボス");
	Wizard wizard("やる気のない魔法使い");
	BattleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);
	manager.StartBattle(&wizard);


	return 0;
}
