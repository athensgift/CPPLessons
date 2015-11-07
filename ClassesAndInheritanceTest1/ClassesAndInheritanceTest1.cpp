// ClassesAndInheritanceTest1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Animal.h"
#include "Human.h"
#include "Gender.h"
#include <list>
#include <iostream>

using std::list;

int main()
{
	Animal a1 = Animal();
	Animal a2("Tiger", 4);

	Human h1 = Human();
	Human h2("Nikos Baltas", 12, 122, Male);
	Human h3("dimitra kati", 22, 140, Female); 

	list<Animal> animals = list<Animal>{a1,a2};

	for (Animal animal : animals)
	{
		animal.GetName();
	}

    return 0;
}
