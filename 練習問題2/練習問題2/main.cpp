#include <iostream>
#include "Calculator.h"
using namespace std;

int main(void)
{
    // Calculatorクラスのオブジェクトを作成
    Calculator calc;
    // 選択した演算を保存する変数
    int choice;
    // 計算を続けるかどうかを保存する変数
    int continueChoice = 1;
    // ユーザーが終了を選択するまで繰り返す
    while (continueChoice == 1)
    {
        // 1つ目の数値を入力
        cout << "1つ目の数値を入力してください：";
        cin >> calc.num1;
        // 2つ目の数値を入力
        cout << "2つ目の数値を入力してください：";
        cin >> calc.num2;
        // 実行する計算を選択
        cout << endl;
        cout << "計算方法を選択してください。" << endl;
        cout << "1：加算" << endl;
        cout << "2：減算" << endl;
        cout << "3：乗算" << endl;
        cout << "4：除算" << endl;
        cout << "選択：";
        cin >> choice;

        // 選択された計算を実行
        switch (choice)
        {
        case 1:
            // addメソッドを呼び出して加算
            cout << "計算結果：" << calc.add() << endl;
            break;

        case 2:
            // subtractメソッドを呼び出して減算
            cout << "計算結果：" << calc.subtract() << endl;
            break;

        case 3:
            // multiplyメソッドを呼び出して乗算
            cout << "計算結果：" << calc.multiply() << endl;
            break;

        case 4:
            // num2が0の場合はdivideの中でエラーを表示
            if (calc.num2 != 0)
            {
                cout << "計算結果：" << calc.divide() << endl;
            }
            else
            {
                calc.divide();
            }
            break;

        default:
            // 1〜4以外が入力された場合
            cout << "正しい番号を入力してください。" << endl;
            break;
        }

        // 計算を続けるか確認
        cout << endl;
        cout << "計算を続けますか？" << endl;
        cout << "1：続ける" << endl;
        cout << "0：終了する" << endl;
        cout << "選択：";
        cin >> continueChoice;

        cout << endl;
    }
    // while文を抜けたらプログラムを終了
    cout << "プログラムを終了します。" << endl;
}
