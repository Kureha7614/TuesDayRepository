#include "Enemy.h"
#include<iostream>
Enemy::Enemy(int hp)
{
	this->hp = hp;
}

Enemy::~Enemy()
{
}

void Enemy::ShowStatus()const
{
	std::cout << "EnemyHPF" << hp << std::endl;
}
