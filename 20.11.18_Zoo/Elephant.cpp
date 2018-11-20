#include "Elephant.h"
Elephant::Elephant(string name, string color, int age, int trunkLength)
	:Animal(name, color, age)
{
	this->trunkLength = trunkLength;
}
void Elephant::settrunkLength(int trunkLength)
{
	this->trunkLength = trunkLength;
}
string Elephant::getInfo() const
{
	string info = Animal::getInfo();
	info += ("\ntrunk length: " + to_string(trunkLength));
	return info;
}
string Elephant::voice() const
{
	return string("ooooooo");
}
