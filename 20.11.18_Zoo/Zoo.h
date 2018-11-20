#pragma once
#include"Animal.h"
#include<vector>
using namespace std;
class Zoo
{
	vector<unique_ptr<Animal>>animals;//* чтобы дочерние классы использовать
	string city;
public:
	Zoo(string city);
	void addAnimal(Animal* animal);
	void removeAnimal(string name);
	Animal& getAnimal(int index);
	int getCountOfAnimals() const { return animals.size(); }
	string rollCall()const;
	string info() const;	
};

