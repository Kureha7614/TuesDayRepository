#pragma once
class EnemyTask
{
private:
	int hp;
public:
	EnemyTask();
	~EnemyTask();

	void Damage(int damage);

	int GetHp()const;

	bool IsAlive() const;
};

