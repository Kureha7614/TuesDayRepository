#include "ScoreManager.h"
#include <iostream>
//コンストラクタ（初期化）
//デストラクト（終了時)
ScoreManager::ScoreManager()
{
	currentScore = 0;
	highScore = 0;
}
//スコアを加算する関数
void ScoreManager::addScore(int points)
{
	currentScore += points;
}
//スコアをリセットする関数
void ScoreManager::resetScore()
{
	currentScore = 0;
}
//ハイスコアを更新する関数
void ScoreManager::updateHighScore()
{
	if (currentScore > highScore)
	{
		highScore = currentScore;
	}
}
//スコアを表示する関数
void ScoreManager::displayScores()
{
	std::cout << "現在のスコア:" << currentScore << std::endl;
	std::cout << "ハイスコア: " << highScore << std::endl;
}
