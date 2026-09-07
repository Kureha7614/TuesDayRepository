#pragma once
class ScoreManager
{
private:
	//メンバー変数
	int currentScore; //現在のスコア
	int highScore;    //ハイスコア
public:
	//コンストラクタ
	ScoreManager();

	//メンバ関数
	void addScore(int points);//スコアを加算する関数
	void resetScore();      //スコアをリセットする関数
	void updateHighScore(); //ハイスコアを更新する関数
	void displayScores();   //スコアを表示する関数
};

