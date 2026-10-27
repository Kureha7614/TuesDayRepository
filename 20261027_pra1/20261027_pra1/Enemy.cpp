#include "Enemy.h"
#include <iostream>

Enemy::Enemy(int hp)
{
	this->hp = hp;
}

Enemy::~Enemy()
{
}

void Enemy::ShowStatus() const
{
	std::cout << "EenmyHPF" << hp << std::endl;
}
