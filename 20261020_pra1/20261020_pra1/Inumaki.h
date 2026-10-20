#pragma once
#include"Sorcerer.h"
class Inumaki: public Sorcerer
{
private:
	//HP
	int HP = 90;
	//呪力
	int CursedEnergy = 70;
public:
	//ステータス
	void ShowStatus()override;
	//攻撃
	void UseTechnique()override;
};

