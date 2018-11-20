#include "Animal.h"
Animal::Animal(string name, string color, int age)
{
	this->name = name;
	this->age = age;
	this->color = color;
}
void Animal::setName(string name)
{
	this->name = name;
}

void Animal::setColor(string color)
{
	this->color = color;
}

void Animal::setAge(int age)
{
	this->age = age;
}

string Animal::getInfo() const
{
	string info="name: ";
	info += name;
	info += ("\ncolor: " + color);
	info += ("\nage: " + to_string(age));
	return info;
}
