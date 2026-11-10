#include<iostream>

class Character
{
private:
	int hp;
public:
	Character();
	void TakeDamage(int damage);
	void ShowStatas()const;
};

class Player:public Character
{

};

class Enemy :public Character
{

};



Character::Character():hp(100)
{
	
}

void Character::TakeDamage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}

void Character::ShowStatas() const
{
	std::cout << "HP:" << hp << std::endl;
}


int main(void)
{
	Player player;
	Enemy enemy;

	Character* target = &enemy;
	target->TakeDamage(30);

	enemy.ShowStatas();
	
	return 0;
}

