#pragma once
#include "Animal.h"
class Kangaroo :
	public Animal
{
	int bagSize;
public:
	Kangaroo(string name, string color, int age, int bagSize);
	void setBagSize(int bagSize);
	int getBagSize() const { return bagSize; }
	string getInfo() const override;
	string voice() const override;	
};

