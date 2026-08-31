#ifndef CALCULATOR_H
#define CALCULATOR_H

// Calculatorクラスを作成
class Calculator
{
public:
    // 計算に使用する2つの数値
    double num1;
    double num2;

    // 2つの数値を足した結果を返す
    double add();

    // num1からnum2を引いた結果を返す
    double subtract();

    // 2つの数値を掛けた結果を返す
    double multiply();

    // num1をnum2で割った結果を返す
    double divide();
};

#endif
