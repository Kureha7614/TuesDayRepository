#include "Game.h"
#include "Turn.h"
#include "Config.h"
#include "Character.h"
#include<iostream>
using namespace std;
//コンストラクタ
Game::Game()
{
	player = new Player();
	enemy = new Enemy();
}
//ゲームの開始
void Game::Start()
{
	//プレイヤーと敵のステータス表示
	cout << "playerのステータス" << endl;
	player->ShowStatus();
	cout << "enemyのステータス" << endl;
	enemy->ShowStatus();

	//ターンの実行
	while (player->IsAlive() && enemy->IsAlive())
	{
		Turn turn(player, enemy);
		turn.Execute();
	}

	//勝敗判定
	if (player->IsAlive())
	{
		cout << "プレイヤーの勝利です" << endl;
	}
	else
	{
		cout << "敵の勝利です" << endl;
	}

}
