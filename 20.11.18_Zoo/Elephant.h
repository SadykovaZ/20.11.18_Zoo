#pragma once
#include "Animal.h"
class Elephant :
	public Animal
{
	int trunkLength;
public:
	Elephant(string name, string color, int age, int trunkLength);
	void settrunkLength(int trunkLength);
	int gettrunkLength() const { return trunkLength; }
	string getInfo() const override;
	string voice() const override;
	
};

