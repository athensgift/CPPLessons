#pragma once
#include <iostream>
using namespace std;

class Human
{
private:
	string name, surName;
	int age;
public:

	Human(string theName, string theSurName, int theAge);
	Human();
	~Human();

	string GetName() { return name; }
	string GetSurName() { return surName; }
	string Description() { return name + " " + surName; }
	int GetAge() { return age; }
	int SetAge(int newAge) { age = newAge; }


	bool operator<(Human& rightHuman);
	Human& operator=(Human& otherHuman);
	friend bool operator<(int x, Human& otherHuman);
};

bool operator<(int x, Human& otherHuman);

