#include "Wizard.h"
#include<iostream>
Wizard::Wizard(std::string name):Character(name)
{
}

void Wizard::Attack()
{
	std::cout << "–‚–@‚ÅUŒ‚‚·‚é" << std::endl;
}
