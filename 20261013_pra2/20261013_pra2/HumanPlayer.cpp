#include "HumanPlayer.h"
#include <iostream>

HumanPlayer::HumanPlayer(int number) : Player(number)
{
}

int HumanPlayer::ChooseAction(int card, int placedChips)
{
    if (GetChips() == 0)
    {
        std::cout << "チップがないため、カードを取ります。\n";
        return ACTION_TAKE;
    }

    std::cout << "このカードを取った場合の得点変化: "
              << CalculateScoreIncrease(card) - placedChips << '\n';

    while (true)
    {
        std::cout << ACTION_TAKE << ": カードを取る / " << ACTION_PASS << ": チップを1枚払って回す > ";

        // 1文字ずつ調べて、1か2だけが入力されたか確認する。
        char choice = ' ';
        char ch;
        int count = 0;
        while (std::cin.get(ch))
        {
            if (ch == '\n')
            {
                break;
            }
            if (ch != ' ' && ch != '\t' && ch != '\r')
            {
                choice = ch;
                // 2文字以上はすべて入力ミスとして扱う。
                if (count < 2)
                {
                    count++;
                }
            }
        }
        if (!std::cin)
        {
            return ACTION_QUIT;
        }
        if (count == 1 && choice - '0' == ACTION_TAKE)
        {
            return ACTION_TAKE;
        }
        if (count == 1 && choice - '0' == ACTION_PASS)
        {
            return ACTION_PASS;
        }
        std::cout << ACTION_TAKE << " または " << ACTION_PASS << " を入力してください。\n";
    }
}