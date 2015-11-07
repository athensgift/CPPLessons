#include "stdafx.h"
#include "Animal.h"
#include "iostream"

using std::endl;
using std::cout;

Animal::Animal() : name("Animal"),age(0){
	cout << "Constructing default animal" << endl;
}
Animal::Animal(string name, int age) : name(name),age(age){
	cout << "Constructing animal with name:" << name << " age: " << age << endl;
}
Animal::~Animal(){
	cout << "Destructing default animal" << endl;
}

string Animal::GetName()
{
	return name;
}

void Animal::SetName(string name)
{
	name = name;
}
