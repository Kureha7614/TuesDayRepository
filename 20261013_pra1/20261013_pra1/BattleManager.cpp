#include "BattleManager.h"
#include<iostream>
void BattleManager::StartBattle(Character* character)
{
	std::cout << character->GetName() << std::endl;
	character->Attack();
}
