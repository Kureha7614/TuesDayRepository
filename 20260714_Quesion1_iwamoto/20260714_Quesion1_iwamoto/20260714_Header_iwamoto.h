#pragma once

//定数
const int BATTLE_MAX = 7;
const int MIN = 1;
const int MAX = 10;

const int MAX_NUM = 51;

const int WIN_SCORE = 3;
const int DRAW_SCORE = 1;

//プロトタイプ宣言
void Game();
void CpuHand(int CpuNum[], int index);
void PlayerHand(int PlayerNum[], int index);
int InputCheck(int max, int min);