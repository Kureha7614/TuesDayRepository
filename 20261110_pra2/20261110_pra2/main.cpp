#include<iostream>
#include<memory>
#include"Enemy.h"
using namespace std;

int main(void)
{
	std::unique_ptr<Enemy> enemies[3];
	//プレイヤー入力
	int choise;
	//Enemy作成
	for (int i = 0; i < 3; i++)
	{
		enemies[i] = make_unique<Enemy>();
	}

	while (enemies[0]->GetHp() > 0 || enemies[1]->GetHp() > 0 || enemies[2]->GetHp() > 0)
	{


		cout << "攻撃する相手を選んで" << endl;
		cin >> choise;
		while (true)
		{
			if (choise < 1 || choise > 3)
			{
				cout << "もう一度選んで" << endl;

				cin >> choise;
			}
			else if (enemies[choise - 1]->GetHp() == 0)
			{
				cout << "もう一度選んでください" << endl;
				cin >> choise;
			}
			else
			{
				break;
			}
		}

		enemies[choise - 1]->Damage(30);

		for (int i = 0; i < 3; i++)
		{
			enemies[i]->Showstatas();
		}

	}
	


	return 0;
}
