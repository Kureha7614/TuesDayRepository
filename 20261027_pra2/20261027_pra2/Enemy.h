#pragma once
class Enemy
{
private:
	//HP
	int hp;
public:
	//コンストラクタ＆デストラクタ
	Enemy(int hp);
	~Enemy();
	//ステータス表示
	void ShowStatus() const;
};

