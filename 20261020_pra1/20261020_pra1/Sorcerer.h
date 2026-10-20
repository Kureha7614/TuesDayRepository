#pragma once
class Sorcerer
{
public:
	int HP;
	int CursedEnergy;
	virtual void ShowStatus();
	virtual void UseTechnique() = 0;
};

