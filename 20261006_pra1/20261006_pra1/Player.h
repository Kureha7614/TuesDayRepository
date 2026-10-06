#pragma once
#include "Character.h"
class Player : public Character
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Player();

	/// <summary>
	/// ぷれいやーの行動選択
	/// </summary>
	/// <param name="target">対象キャラクター</param>
	void Action(Character& target);
};

