#pragma once
#include "Player.h"
#include "Enemy.h"
class Game
{
private:
	Player* player;
	Enemy* enemy;
public:
	Game();
	/// <summary>
	/// ゲームの開始
	/// </summary>
	void Start();
};

