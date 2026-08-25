#include "Dog.h"
#include<iostream>
using namespace std;

Dog::Dog(string Name)
{
	name = Name;
}

void Dog :: ShowProfile()
{
	cout << "Œ¢‚Ì–¼‘O‚Í" << name << "‚Å‚·" << endl;
}