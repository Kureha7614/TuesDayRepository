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
	enemies.push_back(Enemy(rand() % 71 + 30));
	enemies.push_back(Enemy(rand() % 71 + 30));
	enemies.push_back(Enemy(rand() % 71 + 30));

	//HPŠm”F
	for (const Enemy& enemy: enemies)
	{
		enemy.ShowStatus();
	}

	//“G‚Ìíœ
	enemies.erase(enemies.begin() + 0);
	cout << "ˆê‘Ì”rœ‚µ‚Ü‚µ‚½" << endl;
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}
	cout << "“G‚Ì”‚Í" << enemies.size() << endl;

	return 0;
}