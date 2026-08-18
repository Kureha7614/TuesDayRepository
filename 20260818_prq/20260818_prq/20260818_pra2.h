#pragma once
//定数
const int DAMAGE = 20;
const int HEAL = 30;

/// <summary>
/// プレイヤーにダメージを与える
/// </summary>
/// <param name="hp">HP</param>
void Damage(int* PlayerHp);

/// <summary>
/// プレイヤーを回復する
/// </summary>
/// <param name="hp">HP</param>
void Heal(int* PlayerHp);

/// <summary>
/// ゲームを実行する
/// </summary>
void Game();