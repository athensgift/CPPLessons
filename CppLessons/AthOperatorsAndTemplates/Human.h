#ifndef _Human
#define _Human

#include "stdafx.h"
#include <string>

using namespace std;

class Human
{
	string name;
	string surname;
	int age;
public:
	Human();
	Human(string name, string surname, int age);

	string GetName() { return name; };
	string GetSurname() { return surname; };
	int GetAge() { return age; }
	void SetAge(int newAge) { age = newAge; }
	
	bool operator<(Human otherHuman) {
		return age < otherHuman.GetAge();
	}
	Human& operator=(Human& otherHuman) {
		name = otherHuman.name;
		surname = otherHuman.surname;
		age = otherHuman.age;
		return *this;
	}
	friend bool operator<(int left, Human& right);
	~Human();	
};

bool operator<(int left, Human& right);



#endif