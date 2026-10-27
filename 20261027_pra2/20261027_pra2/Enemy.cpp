#include "Enemy.h"
#include"Config.h"
#include<iostream>
using namespace std;
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

void Enemy::Damage(int damege)
{
	this->hp -= damege;
}

int Enemy::GetHp() const
{
	return this->hp;
}



