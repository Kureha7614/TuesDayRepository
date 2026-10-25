#pragma once
#include "Config.h"
#include "HumanPlayer.h"
#include "CPUPlayer.h"

class Game
{
private:
    HumanPlayer human;
    CPUPlayer cpu1;
    CPUPlayer cpu2;
    Player* players[PLAYER_COUNT];
    int deck[DECK_SIZE];
    int nextCard;
    int currentPlayer;
    int revealedCard;
    int placedChips;

    void Initialize();
    void RevealCard();
    void ShowTable() const;
    void ShowResult() const;

public:
    Game();
    Game(const Game&) = delete;
    Game& operator=(const Game&) = delete;
    void Run();
};
