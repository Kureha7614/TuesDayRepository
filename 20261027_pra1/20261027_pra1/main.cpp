#include"Enemy.h"
#include<iostream>
using namespace std;

int main(void)
{
	Enemy enemy1(100);
	Enemy enemy2(200);
	enemy1.ShowStatus();
	enemy2.ShowStatus();
	return 0;
}