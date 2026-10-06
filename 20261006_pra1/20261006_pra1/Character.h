#pragma once
class Character
{
protected:
	int hp;
	int attck;
	int defense;
	int evasion;
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Character();

	/// <summary>
	/// ステータス表示
	/// </summary>
	void ShowStatus();
	/// <summary>
	/// 攻撃
	/// </summary>
	/// <param name="target"></param>
	void Attack(Character &target);
	/// <summary>
	/// 攻撃
	/// </summary>
	void Recovery();
	/// <summary>
	/// 生存判定
	/// </summary>
	/// <returns></returns>
	bool IsAlive();
	/// <summary>
	/// HP取得
	/// </summary>
	/// <returns></returns>
	int GetHp();
};

