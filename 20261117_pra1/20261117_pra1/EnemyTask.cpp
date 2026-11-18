#include "EnemyTask.h"
#include "ConfigTask.h"

EnemyTask::EnemyTask() :hp(ConfigTask::ENEMY_HP) {}
EnemyTask::~EnemyTask(){}

//ダメージを与える処理
void EnemyTask::Damage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}
//HPを返す関数
int EnemyTask::GetHp() const
{
	return hp;
}
//HPがあるならfalseで返す
bool EnemyTask::IsAlive() const
{
	return hp > 0;
}