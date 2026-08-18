#include"20260818_pra2.h"
#include<iostream>

using namespace std;

void Damage(int *PlayerHp)
{
	*PlayerHp -= DAMAGE;
}

void Heal(int* PlayerHp)
{
	*PlayerHp += HEAL;
}

void Game()
{
	int PlayerHp = 100;
	int* php = &PlayerHp;

	cout << "あなたのHPは" << *php << "です。" << endl;
	cout << "敵から" << DAMAGE << "のダメージを受けました。" << endl;
	Damage(&PlayerHp);
	cout << "あなたは" << HEAL << "HP回復しました" << endl;
	Heal(&PlayerHp);
	cout << "あなたのHPは" << PlayerHp << "です";
}