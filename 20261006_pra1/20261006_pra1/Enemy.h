#pragma once
#include"Character.h"
class Enemy :public Character
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Enemy();
	/// <summary>
	/// 敵の行動選択
	/// </summary>
	/// <param name="target"></param>
	void Action(Character& target);
};

