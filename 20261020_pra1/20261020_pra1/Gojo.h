#pragma once
#include"Sorcerer.h"
class Gojo:public Sorcerer
{
private:
	//HP
	int HP = 999;
	//呪力
	int CursedEnergy = 999;
public:
	//ステータス
	void ShowStatus()override;
	//攻撃
	void UseTechnique()override;
};

