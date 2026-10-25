#pragma once

// ゲームで使う定数
// このゲームは人間1人、CPU2人の3人用。
const int PLAYER_COUNT = 3;
const int MIN_CARD = 3;
const int MAX_CARD = 35;
const int DECK_SIZE = MAX_CARD - MIN_CARD + 1;
const int USED_CARDS = 24;
const int INITIAL_CHIPS = 11;

// カードの数字をそのまま配列の添字に使うため、最大値に1を足す。
const int CARD_ARRAY_SIZE = MAX_CARD + 1;

// ChooseActionの戻り値
const int ACTION_QUIT = 0;
const int ACTION_TAKE = 1;
const int ACTION_PASS = 2;

// CPUがカードを取るか判断するための基準
const int CPU_LOW_CHIPS = 3;
const int CPU_NORMAL_LIMIT = 3;
const int CPU_LOW_CHIPS_LIMIT = 10;
