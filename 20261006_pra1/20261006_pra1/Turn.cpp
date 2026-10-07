#include "Turn.h"
#include<iostream>
using namespace std;
Turn::Turn(Player* p, Enemy* e)
    : player(p), enemy(e)
{
}

void Turn::Execute()
{
	
    if (!player->IsAlive() || !enemy->IsAlive())
    {
        return;
    }

    player->Action(*enemy);
	cout << "enemyƒ^[ƒ“" << endl;
	
    if (enemy->IsAlive())
    {
        enemy->Action(*player);
    }
}
