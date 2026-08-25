#include "Dog.h"
#include<iostream>
using namespace std;

Dog::Dog(string Name)
{
	name = Name;
}

void Dog :: ShowProfile()
{
	cout << "犬の名前は" << name << "です" << endl;
}