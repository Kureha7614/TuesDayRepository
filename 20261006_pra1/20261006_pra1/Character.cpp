#include "Character.h"
#include"config.h"

#include<iostream>
#include<cstdlib>

using namespace std;
// コンストラクタ
Character::Character()
{
	hp = config::MAX_HP;

	attck = rand() % (config::MAX_STATUS - config::MIN_STATUS + 1) + config::MIN_STATUS;
	defense = rand() % (config::MAX_STATUS - config::MIN_STATUS + 1) + config::MIN_STATUS;
	evasion = rand() % (config::MAX_STATUS - config::MIN_STATUS + 1) + config::MIN_STATUS;
}
//ステータス表示
void Character::ShowStatus()
{
	cout << "HP:" << hp << endl;
	cout << "攻撃力:" << attck << endl;
	cout << "防御力:" << defense << endl;
	cout << "回避率:" << evasion << endl;
}
//攻撃
void Character::Attack(Character& target)
{
	//ランダムな攻撃値
	int randomValue = rand() % (config::MAX_RANDOM_VALUE - config::MIN_RANDOM_VALUE + 1) + config::MIN_RANDOM_VALUE;
	int attackValue = attck + randomValue;
	cout << "攻撃値は" << attackValue << endl;

	//回避判定
	if (attackValue <= target.evasion)
	{
		cout << "攻撃を回避された" << endl;
		return;
	}

	//ダメージ計算
	int damege = attackValue - target.defense;
	if (damege < 0)
	{
		damege = 0;
	}
	target.hp -= damege;
	cout << "攻撃成功！" <<"ダメージ:" << damege << "です" << endl;
	//生存判定
	if (target.hp < config::DEAD_HP)
	{
		target.hp = 0;
	}
}

void Character::Recovery()
{
	int randomValue = rand() % (config::MAX_RANDOM_VALUE - config::MIN_RANDOM_VALUE + 1) + config::MIN_RANDOM_VALUE;
	hp += randomValue;

	if (hp > config::MAX_HP)
	{
		hp = config::MAX_HP;
	}
	cout << "HPを" << randomValue << "回復した" <<"現在のHP：" << hp << endl;
}

bool Character::IsAlive()
{

	return hp > config::DEAD_HP;
}

int Character::GetHp()
{
	return hp;
}
