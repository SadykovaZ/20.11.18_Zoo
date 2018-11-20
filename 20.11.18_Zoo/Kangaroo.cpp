#include "Kangaroo.h"
Kangaroo::Kangaroo(string name, string color, int age, int bagSize)
	:Animal(name, color, age)
{
	this->bagSize = bagSize;
}
void Kangaroo::setBagSize(int bagSize)
{
	this->bagSize = bagSize;
}
string Kangaroo::getInfo() const
{
	string info = Animal::getInfo();
	info+= ("\nbag size: " + to_string(bagSize));
	return info;
}
string Kangaroo::voice() const
{
	return string("kkkkk");
}
