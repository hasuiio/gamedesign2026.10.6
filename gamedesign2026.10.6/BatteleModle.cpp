#include"BatteleModle.h"
#include<iostream>


void BatteleModle::Initialize()
{

}

int BatteleModle::Input()
{
	int input;

	std::cin >> input;

	if (input == 1)
	{
		return 1;
	}
	else if (input == 2)
	{
		return 2;
	}
}