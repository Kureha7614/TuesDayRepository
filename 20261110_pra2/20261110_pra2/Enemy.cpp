#include "Enemy.h"
#include<iostream>
Enemy::Enemy()
{
	Hp = 100;
}
void Enemy::Damage(int damage)
{
	 Hp -= damage;
	if (Hp < 0)
	{
		Hp = 0;
	}
}

int Enemy::GetHp()
{
	return Hp;
}

void Enemy::Showstatas()
{
	std::cout << "HP:" << Hp << std::endl;
}
