#pragma once
#include"Sorcerer.h"
class Megumi:public Sorcerer
{
private:
	//HP
	int HP = 100;
	//呪力
	int CursedEnergy = 80;
public:
	//ステータス
	void ShowStatus()override;
	//攻撃
	void UseTechnique()override;
};

