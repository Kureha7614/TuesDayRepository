#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include"Enemy.h"
using namespace std;

int main(void)
{
	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));

	vector<Enemy> enemies;
	//“G‚Ì¶¬
	enemies.push_back(Enemy(rand() % 70 + 30));
	enemies.push_back(Enemy(rand() % 70 + 30));
	enemies.push_back(Enemy(rand() % 70 + 30));

	//HPŠm”F
	for (const Enemy& enemy: enemies)
	{
		enemy.ShowStatus();
	}

	return 0;
}