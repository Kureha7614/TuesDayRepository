#include "Player.h"
#include <iostream>

Player::Player(int playerNumber)
{
    number = playerNumber;
    Reset();
}

Player::~Player()
{
}

void Player::Reset()
{
    chips = INITIAL_CHIPS;
    for (int i = 0; i < CARD_ARRAY_SIZE; i++)
    {
        cards[i] = false;
    }
}

int Player::GetNumber() const
{
    return number;
}

int Player::GetChips() const
{
    return chips;
}

bool Player::HasCard(int card) const
{
    if (card < MIN_CARD || card > MAX_CARD)
    {
        return false;
    }
    return cards[card];
}

bool Player::PayChip()
{
    if (chips == 0)
    {
        return false;
    }
    chips--;
    return true;
}

bool Player::TakeCard(int card, int placedChips)
{
    if (card < MIN_CARD || card > MAX_CARD || HasCard(card) || placedChips < 0)
    {
        return false;
    }
    cards[card] = true;
    chips = chips + placedChips;
    return true;
}

int Player::CalculateCardScore() const
{
    int score = 0;
    for (int card = MIN_CARD; card <= MAX_CARD; card++)
    {
        // 1つ小さいカードがなければ、連番の先頭なので加算する。
        // 例: 3、4、5を持っている場合、3だけを加算する。
        if (HasCard(card) && !HasCard(card - 1))
        {
            score = score + card;
        }
    }
    return score;
}

int Player::CalculateScore() const
{
    return CalculateCardScore() - chips;
}

// カードを取ると、カードの合計点がどれだけ変わるか調べる。
int Player::CalculateScoreIncrease(int card) const
{
    if (card < MIN_CARD || card > MAX_CARD || HasCard(card))
    {
        return 0;
    }
    int increase = card;
    if (HasCard(card - 1))
    {
        increase = 0;
    }
    if (HasCard(card + 1))
    {
        // 1つ大きいカードは連番の先頭でなくなるので、その点を引く。
        increase = increase - (card + 1);
    }
    return increase;
}

void Player::ShowStatus() const
{
    std::cout << "プレイヤー" << number << "  チップ: " << chips << "  カード: ";
    bool found = false;
    for (int card = MIN_CARD; card <= MAX_CARD; card++)
    {
        if (HasCard(card))
        {
            std::cout << card << ' ';
            found = true;
        }
    }
    if (!found)
    {
        std::cout << "なし";
    }
    std::cout << "  現在の得点: " << CalculateScore() << '\n';
}