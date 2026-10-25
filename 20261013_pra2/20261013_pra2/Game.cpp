#include "Game.h"
#include <iostream>
#include <cstdlib>

// 子クラスのオブジェクトを、親クラスのポインタ配列に登録する。
Game::Game() : human(1), cpu1(2), cpu2(3)
{
    players[0] = &human;
    players[1] = &cpu1;
    players[2] = &cpu2;
    nextCard = 0;
    currentPlayer = 0;
    revealedCard = 0;
    placedChips = 0;
    for (int i = 0; i < DECK_SIZE; i++)
    {
        deck[i] = 0;
    }
}

void Game::Initialize()
{
    for (int i = 0; i < PLAYER_COUNT; i++)
    {
        players[i]->Reset();
    }
    for (int i = 0; i < DECK_SIZE; i++)
    {
        deck[i] = i + MIN_CARD;
    }
    // 後ろから順に、ランダムに選んだ位置のカードと交換する。
    for (int i = DECK_SIZE - 1; i > 0; --i)
    {
        const int j = std::rand() % (i + 1);
        const int temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
    nextCard = 0;
    currentPlayer = 0;
    revealedCard = 0;
    placedChips = 0;
}

void Game::RevealCard()
{
    revealedCard = deck[nextCard];
    nextCard++;
    placedChips = 0;
    std::cout << "\n--- " << nextCard << " / " << USED_CARDS
              << " 枚目のカードを公開 ---\n";
}

void Game::ShowTable() const
{
    std::cout << '\n';
    for (int i = 0; i < PLAYER_COUNT; i++)
    {
        players[i]->ShowStatus();
    }
    std::cout << "公開カード: " << revealedCard << "  上のチップ: "
              << placedChips << "  山札の残り: " << USED_CARDS - nextCard << '\n';
}

void Game::Run()
{
    Initialize();
    std::cout << "=== ゲシェンク ===\n"
              << "プレイヤー1: あなた / プレイヤー2・3: CPU\n"
              << "得点が最も小さい人が勝者です。\n";
    while (nextCard < USED_CARDS)
    {
        RevealCard();
        while (true)
        {
            ShowTable();
            Player* player = players[currentPlayer];
            std::cout << "プレイヤー" << player->GetNumber() << "の手番\n";
            // 親クラスのポインタから共通の呼び出しを行う。
            int action = player->ChooseAction(revealedCard, placedChips);
            if (action == ACTION_QUIT)
            {
                std::cout << "入力が終了したため、ゲームを中断しました。\n";
                return;
            }
            if (action == ACTION_PASS && player->PayChip())
            {
                ++placedChips;
                std::cout << "チップを1枚払って回しました。\n";
                currentPlayer++;
                if (currentPlayer == PLAYER_COUNT)
                {
                    currentPlayer = 0;
                }
            }
            else
            {
                player->TakeCard(revealedCard, placedChips);
                std::cout << "カード " << revealedCard << " とチップ "
                          << placedChips << " 枚を獲得しました。\n";
                placedChips = 0;
                // 取ったプレイヤーが次のカードの最初の手番を担当する。
                break;
            }
        }
    }
    ShowResult();
}

void Game::ShowResult() const
{
    std::cout << "\n=== 最終結果 ===\n";
    int best = players[0]->CalculateScore();
    for (int i = 0; i < PLAYER_COUNT; ++i)
    {
        players[i]->ShowStatus();
        std::cout << "  カード点 " << players[i]->CalculateCardScore()
                  << " - チップ " << players[i]->GetChips()
                  << " = " << players[i]->CalculateScore() << '\n';
        if (players[i]->CalculateScore() < best)
        {
            best = players[i]->CalculateScore();
        }
    }
    std::cout << "勝者: ";
    for (int i = 0; i < PLAYER_COUNT; i++)
    {
        if (players[i]->CalculateScore() == best)
        {
            std::cout << "プレイヤー" << players[i]->GetNumber() << ' ';
        }
    }
    std::cout << "（" << best << "点。同点の場合は同点者全員が勝者）\n";
}
