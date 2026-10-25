#pragma once
#include "Player.h"

class CPUPlayer : public Player
{
public:
    CPUPlayer(int number);
    int ChooseAction(int card, int placedChips) override;
};
