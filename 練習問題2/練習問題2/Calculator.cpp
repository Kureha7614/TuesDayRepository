#include <iostream>
#include "Calculator.h"
using namespace std;

// 2つの数値を足した結果を返す
double Calculator::add()
{
    return num1 + num2;
}

// num1からnum2を引いた結果を返す
double Calculator::subtract()
{
    return num1 - num2;
}

// 2つの数値を掛けた結果を返す
double Calculator::multiply()
{
    return num1 * num2;
}

// num1をnum2で割った結果を返す
double Calculator::divide()
{
    // num2が0の場合はゼロ除算になるため計算しない
    if (num2 == 0)
    {
        cout << "エラー：0で割ることはできません。" << endl;
        return 0;
    }

    return num1 / num2;
}
