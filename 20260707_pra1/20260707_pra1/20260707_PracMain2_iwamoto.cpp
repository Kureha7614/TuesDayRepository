#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_iwamoto.h"

using namespace std;

void Game()
{
	//変数の宣言
	int PlayerNum[3], CpuNum[3];
	int player[3], Cpu[3];
	int PlayerWin = false;
	int CpuWin = false;
	//乱数の初期化
	srand((unsigned int)time(NULL));
	//ゲームスタート
	cout << "数字あてゲームだよ" << endl;
	//CPUとプレイヤーの手を決める
	PlayerHand(PlayerNum, 3);
	CpuHand(CpuNum, 3);
	//whailで回す
	while (PlayerWin == false && CpuWin == false)
	{
		//自分の数字確認
		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << "個めの数字は" << PlayerNum[i] << "です" << endl;
		}
		//CPUの手札を予想
		PlayerThink(player, 3);
		//CPUの手札とあっているか
		for (int i = 0; i < HAND_MAX; i++)
		{
			if (player[i] == CpuNum[i])
			{
				cout << i + 1 << "個めの数字はHIT" << endl;
			}
			else
			{
				cout << i + 1 << "個めの数字はMISS" << endl;
			}
		}

		//CPUの予想


	}

}



/// <summary>
/// 入力チェックの関数
/// </summary>
/// <param name="MIN"></param>
/// <param name="MAX"></param>
/// <returns></returns>
int InputCheck(int MIN, int MAX)
{
	int Input;
	while (true)
	{
		cout << "数字を入力してね" << endl;
		cin >> Input;
		if (Input < MIN || Input > MAX)
		{
			cout << "範囲外ですもう一度入力してください" << endl;
			cin >> Input;
		}
		else
		{
			break;
		}
	}
}


/// <summary>
/// //プレイヤーの手札を決める関数
/// </summary>
/// <param name="PlayerNum"></param>
/// <param name="index"></param>
/// <returns></returns>
int PlayerHand(int PlayerNum[], int index)
{
	int shufflNum;
	for (int i = INDEX - 1; i > 0; i--)
	{
		shufflNum = rand() % (1 + 1);
		int tmp = PlayerNum[i];
		PlayerNum[i] = PlayerNum[shufflNum];
		PlayerNum[shufflNum] = tmp;
	}
	for (int i = 0; i < HAND_MAX; i++)
	{
		PlayerNum[i] = PlayerNum[shufflNum];
	}
}
/// <summary>
/// Cpuの手札を決める関数
/// </summary>
/// <param name="CpuNum"></param>
/// <param name="index"></param>
/// <returns></returns>
int CpuHand(int CpuNum[], int index)
{
	int shufflNum;
	for (int i = INDEX - 1; i > 0; i--)
	{
		shufflNum = rand() % (1 + 1);
		int tmp = CpuNum[i];
		CpuNum[i] = CpuNum[shufflNum];
		CpuNum[shufflNum] = tmp;
	}
	for (int i = 0; i < HAND_MAX; i++)
	{
		CpuNum[i] = CpuNum[shufflNum];
	}
}
/// <summary>
/// CPUの数を予想する関数
/// </summary>
/// <param name="Player"></param>
/// <param name="index"></param>
/// <returns></returns>
int PlayerThink(int Player[], int index)
{
	cout << "あなたの番です" << endl;
	cout << "相手の数字を予想してね" << endl;
	for (int i = 0; i < HAND_MAX; i++)
	{
		cout << i + 1 << "個めの数字を予想してね" << endl;
		InputCheck(MIN, MAX);
	}
}

int CpuThink(int Cpu[], int index)
{

}


