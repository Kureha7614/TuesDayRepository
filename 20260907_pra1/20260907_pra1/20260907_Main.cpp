#include<iostream>
#include "ScoreManager.h"

int main()
{
	// ScoreManagerクラスのインスタンス(オブジェクト化）を作成
	ScoreManager scoreManager;

	std::cout << "ゲームスタート！" << std::endl;

	scoreManager.displayScores();

	//100ポイント獲得
	std::cout << "100ポイント獲得！" << std::endl;
	
	scoreManager.addScore(100);
	scoreManager.updateHighScore();

	//50ポイント獲得
	scoreManager.addScore(50);
	scoreManager.updateHighScore();
	//ハイスコア更新
	std::cout << std::endl;
	std::cout << "ハイスコア更新！" << std::endl;

	scoreManager.updateHighScore();
	scoreManager.displayScores();

	std::cout << std::endl;
	std::cout << "ゲーム終了！" << std::endl;

	scoreManager.resetScore();
	scoreManager.displayScores();

	return 0;
}