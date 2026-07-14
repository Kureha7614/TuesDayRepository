#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_iwamoto.h"
using namespace std;

/// <summary>
/// 入力チェックの関数
/// </summary>
/// <param name="max"></param>
/// <param name="min"></param>
/// <returns></returns>
int InputCheck(int max, int min)
{
	//変数
	int input;
	cin >> input;
	//入力範囲外違うとき
	while (true)
	{
		if (input < MIN || input > MAX)
		{
			cout << "入力範囲外です" << endl;
			cin >> input;
		}
		else
		{
			break;
		}
	}
	return input;
}
/// <summary>
/// プレイヤーの手札
/// </summary>
/// <param name="PlayerNum"></param>
/// <param name="imdex"></param>
void PlayerHand(int PlayerNum[], int index)
{
	for (int i = 0; i < MAX; i++)
	{
		PlayerNum[i] = rand() % 51;
	}
}


/// <summary>
/// CPUの手札
/// </summary>
/// <param name="PlayerNum"></param>
/// <param name="imdex"></param>
void CpuHand(int CpuNum[], int index)
{
	for (int i = 0; i < MAX; i++)
	{
		CpuNum[i] = rand() % 51;
	}
}
/// <summary>
/// 勝敗の関数
/// </summary>
/// <param name="playerPoint"></param>
/// <param name="CPUPoint"></param>
/// <returns></returns>
int Juge(int playerPoint, int CPUPoint)
{
	if (playerPoint > CPUPoint)
	{
		cout << "あなたの勝ちです" << endl;
	}
	else if (playerPoint == CPUPoint)
	{
		cout << "引き分けです" << endl;
	}
	else
	{
		cout << "あなたの負けです" << endl;
	}
	return 0;
}


void Game()
{
	//変数
	int player;
	int CPU;
	int playerPoint;
	int CPUPoint;
	int select;
	int PlayerNum[MAX];
	int CpuNum[MAX];
	//乱数の初期化
	srand((unsigned int)time(NULL));
	cout << "プレイヤーとCPUの手札を作成します" << endl;
	//手札を作成
	PlayerHand(PlayerNum, MAX);
	CpuHand(CpuNum, MAX);
	//手札を確認する
	cout << "プレイヤーの手札は" << endl;
	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << "個め" << PlayerNum[i] << "\n";
	}
	cout << "CPUの手札は" << endl;
	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << "個め" <<"???" << "\n";
	}

	//ゲーム開始
	for (int i = 0; i < BATTLE_MAX; i++)
	{
		cout << "あなたのカードを選んでください" << endl;
		PlayerNum[select] = true;







		if (PlayerNum < CpuNum)
		{
			cout << "CPUの勝ち" << endl;
			CPUPoint = CPUPoint + WIN_SCORE;
		}
		else if (PlayerNum == CpuNum)
		{
			cout << "引き分けです" << endl;
			CPUPoint = CPUPoint + DRAW_SCORE;
			playerPoint = playerPoint + DRAW_SCORE;
		}
		else
		{
			cout << "playerの勝ち" << endl;
			playerPoint = playerPoint + WIN_SCORE;

		}
	}
	Juge(playerPoint, CPUPoint);
}