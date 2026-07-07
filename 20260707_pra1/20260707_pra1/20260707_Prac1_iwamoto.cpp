//10 個の数値を入力する。
//入力された数値を偶数（even）と奇数配列（odd）に分類して表示する。
//数字を入れる配列は関数にして配列を渡しましょう。
#include<iostream>
using namespace std;

//定数
const int INDEX = 10;

//関数のプロトタイプ宣言
int	Input(int ary[], int index);

int main(void)
{
	//変数
	int i = 0;
	int ary[10];
	int even[10];
	int odd[10];
	int evenCount = 0;  // ← 追加：evenに何個入ったか
	int oddCount = 0;   // ← 追加：oddに何個入ったか
	//入力
	Input(ary,10);
	//奇数と偶数の判断
	for (int i = 0; i < INDEX; i++)
	{
		if (ary[i] % 2 == 0)
		{
			even[evenCount] = ary[i];
			evenCount++;
		}
		else
		{
			odd[oddCount] = ary[i];
			oddCount++;
		}
	}

	//表示
	cout << "偶数" << endl;
	for (i = 0; i < evenCount; i++)
	{
			cout << even[i] << endl;
	}
	cout << "奇数" << endl;
	for (i = 0; i < oddCount; i++)
	{
			cout << odd[i] << endl;
	}
	return 0;
}

//入力
int Input(int ary[], int index)
{
	cout << "数字を入力してね" << endl;
	for (int i = 0;i < INDEX; i++)
	{
		cin >> ary[i];
	}
	return 0;
}


