#include "Turn.h"

#include <iostream>
// コンストラクタ
Turn::Turn(Player* p, Enemy* e)
{
	player = p;
	enemy = e;
}

void Turn::Excute()
{
	player->Action(*enemy);
	
	if (!enemy->IsAlive())
	{
		return;
	}

	enemy->Action(*player);
}
