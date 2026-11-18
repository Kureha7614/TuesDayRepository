#include "GameTask.h"
#include<iostream>
#include<limits>
#include"ConfigTask.h"
//Enemyをオブジェクトで生成する
void GameTask::Init()
{
	for (int i = 0; i < ConfigTask::ENEMY_COUNT; i++)
	{
		enemies.push_back(std::make_shared<EnemyTask>());
	}
}
//Enemysの配列にいれる
void GameTask::Draw() const
{
	std::cout << "敵:\n";
	for (int i = 0; i < enemies.size(); i++)
	{
		//敵のHPをひょうじ
		if (enemies[i] ->IsAlive())
		{
			std::cout << "敵" << i + 1 << "HP:" 
				<< enemies[i]->GetHp() << "\n";
		}
		//倒していた場合
		else
		{
			std::cout << "撃破済み\n";
		}
	}
}
//プレイヤーが攻撃対象を選ぶ
void GameTask::Attack()
{
	//プレイヤーが入力
	int target;
	std::cout << "攻撃する敵を選択してください。(1～3)\n";

	if (!(std::cin >> target))
	{
		std::cout << "数字を入力してください\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

		return;

	}
	//入力チェック
	if (target < 1 || target > ConfigTask::ENEMY_COUNT)
	{
		std::cout << "入力した数字は選択出来ません。再度入力してください。\n";
		return;
	}

	std::shared_ptr<EnemyTask> targetEnemy = enemies[target - 1];
	//倒されていたら
	if (!targetEnemy->IsAlive())
	{
		std::cout << "この敵はすでに倒されています。\n";
		return;
	}

	std::cout << "攻撃する敵は、" << target << "\n";
	//攻撃した敵にダメージを与える
	targetEnemy->Damage(ConfigTask::DAMEGE);
	std::cout << "敵" << target << "に戦闘ダメージ" 
		<< ConfigTask::DAMEGE << "を与えました。\n";

}
//プレイヤーが敵を全員倒したらクリアをTUREにする
bool GameTask::IsGameClear() const
{
	for ( const auto& enemy : enemies)
	{
		if (enemy->IsAlive())
		{
			return false;
		}
	}

	return true;
}
//ゲームループ
void GameTask::Run()
{
	Init();

	while (true)
	{
		Draw();
		Attack();
		if (IsGameClear())
		{
			std::cout << "GamerClear\n";
			break;
		}
	}
}