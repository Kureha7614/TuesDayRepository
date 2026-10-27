#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include"Enemy.h"
#include"Config.h"
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

	int Choice;

	cin >> Choice;
	while (true)
	{
		if (Choice > MAX || Choice < MIN)
		{
			cout << "‚à‚¤ˆê‰ñ“ü—Í‚µ‚Ä‚Ë" << endl;
			cin >> Choice;
		}
		else
		{
			break;
		}
	}
	cout << "‚ ‚È‚½‚Í" << Choice << "”Ô‚Ì“G‚ÉUŒ‚‚µ‚Ü‚µ‚½" << endl;

	//UŒ‚‚Ì’lŒˆ’è
	int damage = rand() % Max_Num + Min_Num;

	//Damage‚ğ—^‚¦‚é
	enemies[Choice].Damage(damage);
	enemies[Choice].GetHp();
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}
	cout << "\n" << endl;
	//‚à‚µUŒ‚‚Å0ˆÈ‰º‚É‚È‚Á‚½‚ç
	if (enemies[Choice].GetHp() <= MIN)
	{
		enemies.erase(enemies.begin() + Choice);
		for (const Enemy& enemy : enemies)
		{
			enemy.ShowStatus();
		}
		cout << "“G‚Ì”‚Í" << enemies.size() << endl;
	}
	

	return 0;
}