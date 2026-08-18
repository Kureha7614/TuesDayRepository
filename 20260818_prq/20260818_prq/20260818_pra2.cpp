#include"20260818_pra2.h"
#include<iostream>

using namespace std;
//ダメージを減らす関数
void Damage(int *PlayerHp)
{
	*PlayerHp -= DAMAGE;
}
//ヒールして回復関数
void Heal(int* PlayerHp)
{
	*PlayerHp += HEAL;
}

void Game()
{
	//変数
	int PlayerHp = 100;
	//playerHPを渡す
	int* php = &PlayerHp;
	//アドレスからダメージを引く
	cout << "あなたのHPは" << *php << "です。" << endl;
	cout << "敵から" << DAMAGE << "のダメージを受けました。" << endl;
	Damage(&PlayerHp);
	//回復
	cout << "あなたは" << HEAL << "HP回復しました" << endl;
	Heal(&PlayerHp);
	//自分のHPを表示
	cout << "あなたのHPは" << PlayerHp << "です";
}