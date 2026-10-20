#include"Gojo.h"
#include"Inumaki.h"
#include"Megumi.h"
#include<iostream>
using namespace std;

int main(void)
{
	//インスタンス化
	Gojo gojo;
	Inumaki inumaki;
	Megumi megumi;
	
	Sorcerer* sorcere[3] = {&megumi,&inumaki,&gojo};
	//情報を開示
	for (int i = 0;i < 3;i++)
	{
		sorcere[i]->ShowStatus();
		sorcere[i]->UseTechnique();
	}

	return 0;
}