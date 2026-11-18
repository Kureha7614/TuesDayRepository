#pragma once
#include <memory>
#include<vector>
#include "EnemyTask.h"
#include "ConfigTask.h"
class GameTask
{
private:
	std::vector<std::shared_ptr<EnemyTask>> enemies;
	
	void Init();

	void Draw()const;

	void Attack();

	bool IsGameClear() const;

public:
	void Run();
};

