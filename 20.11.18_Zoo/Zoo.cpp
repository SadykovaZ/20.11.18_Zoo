#include "Zoo.h"
Zoo::Zoo(string city)
{
	this->city = city;
}

void Zoo::addAnimal(Animal * animal)
{
	animals.push_back(unique_ptr<Animal>(animal));
}

void Zoo::removeAnimal(string name)
{
	for (size_t i = 0; i < animals.size(); i++)
	{
		if (animals[i]->getName() == name)
		{
			animals.erase(begin(animals) + i);
		}
	}
}
Animal& Zoo::getAnimal(int index)
{
	
	return *animals[index];
}
string Zoo::rollCall() const
{
	string res;
	for (size_t i = 0; i < animals.size(); i++)
	{
		string tmp = typeid(*animals[i]).name();
		tmp = tmp.substr(6);
		res += tmp + " ";
		res += animals[i]->getName() + " says ";
		res += animals[i]->voice() += "\n";
	}
	return res;
}
string Zoo::info() const
{
	string res;
	res = city + " zoo\n";
	for (size_t i = 0; i < animals.size(); i++)
	{
		res += animals[i]->getInfo();
		res += "\n";
	}
	return res;
}
