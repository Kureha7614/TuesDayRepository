#include "CPUPlayer.h"

CPUPlayer::CPUPlayer(int number) : Player(number)
{
}

int CPUPlayer::ChooseAction(int card, int placedChips)
{
    if (GetChips() == 0)
    {
        return ACTION_TAKE;
    }

    // カードの点数の増減から、もらえるチップの数を引く。
    int cost = CalculateScoreIncrease(card) - placedChips;
    int limit = CPU_NORMAL_LIMIT;

    // チップが少なくなったら、少し点数が高くても取る。
    if (GetChips() <= CPU_LOW_CHIPS)
    {
        limit = CPU_LOW_CHIPS_LIMIT;
    }
    if (cost <= limit)
    {
        return ACTION_TAKE;
    }
    return ACTION_PASS;
}