#include "Enemy.h"
#include<iostream>

Enemy::Enemy(std::string name):Character(name)
{
}

void Enemy::Attack()
{
	std::cout << "‚©‚Ý‚Â‚«UŒ‚‚ð‚·‚é" << std::endl;
}
