#pragma once
#include "Config.h"

// プレイヤーに共通する情報と処理をまとめた親クラス
class Player
{
private:
    int chips;       // 持っているチップの枚数
    bool cards[CARD_ARRAY_SIZE];  // cards[数字] が true なら、そのカードを持っている
    int number;      // プレイヤー番号

public:
    Player(int playerNumber);
    virtual ~Player();

    // 1: 取る、2: 回す、0: 入力終了
    // 子クラスで、それぞれの行動の決め方を作る。
    virtual int ChooseAction(int card, int placedChips) = 0;

    void Reset();
    int GetNumber() const;
    int GetChips() const;
    bool HasCard(int card) const;
    bool PayChip();
    bool TakeCard(int card, int placedChips);
    int CalculateCardScore() const;
    int CalculateScore() const;
    int CalculateScoreIncrease(int card) const;
    void ShowStatus() const;
};