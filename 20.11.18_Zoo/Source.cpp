#include"Zoo.h"
#include"Cat.h"
#include"Elephant.h"
#include"Kangaroo.h"
#include<iostream>
using namespace std;

void main()
{
	Zoo z("Almaty");
	z.addAnimal(new Cat("Garfield", "orange", 10, "british", 9));
	z.addAnimal(new Elephant("Jambo", "grey", 35, 300));
	z.addAnimal(new Kangaroo("Kanga", "brown", 15, 20));
	cout << z.rollCall();
	cout << "---------------" << endl;
	cout << z.info();

	for (size_t i = 0; i < z.getCountOfAnimals(); i++)
	{
		if (typeid(z.getAnimal(i)) == typeid(Cat))
			((Cat&)z.getAnimal(i)).setCntLives(8);
	}
	cout << "---------------" << endl;
	cout << z.info();
	system("pause");
}