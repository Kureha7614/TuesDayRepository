#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;

void ShowArray(int ary[],int index);
void AddArray(int ary[], int index);
int main(void)
{
	//”z—ñ
	int ary[10] = {false};
	srand((unsigned int)time(NULL));

	ShowArray(ary, 10);
	cout << "’Ç‰Á" << endl;
	AddArray(ary, 10);
	cout << "•\Ž¦" << endl;
	ShowArray(ary,10);
	return 0;
}

void AddArray(int ary[], int index)
{
	for (int i = 0; i < index; i++)
	{
		ary[i] = rand() % 100;
	}
}

void ShowArray(int ary[],int index)
{
	for (int i = 0; i < index; i++)
	{
		cout << ary[i] << endl;
	}
}