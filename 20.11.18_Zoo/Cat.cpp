#include "Cat.h"
#include<windows.media.speechsynthesis.h>
Cat::Cat(string name, string color, int age, string breed, int cntLives)
	:Animal(name,  color,  age)
{
	this->breed = breed;
	this->cntLives = cntLives;
}
void Cat::setBreed(string breed)
{
	this->breed = breed;
}
void Cat::setCntLives(int cntLives)
{
	this->cntLives = cntLives;
}
string Cat::getInfo() const
{
	string info = Animal::getInfo();
	info += ("\nbreed: " + breed);
	info += ("\ncount of lives: " + to_string(cntLives));
	return info;
}
string Cat::voice() const
{
	return string("meow");
}
