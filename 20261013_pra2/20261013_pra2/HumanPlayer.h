#pragma once
#include "Player.h"

class HumanPlayer : public Player
{
public:
    HumanPlayer(int number);
    int ChooseAction(int card, int placedChips) override;
};
