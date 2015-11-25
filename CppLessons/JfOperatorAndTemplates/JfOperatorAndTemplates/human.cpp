#include "stdafx.h"
#include "human.h"


Human::Human() : name("AName"), surName("ASurName"), age(0) {}

Human::Human(string theName, string theSurName, int theAge) : name(theName), surName(theSurName), age(theAge) {}
	
Human::~Human(){}

bool Human::operator<(Human& rightHuman) { return age < rightHuman.age; }

Human& Human::operator=(Human& otherHuman) {
	name = otherHuman.name;
	surName = otherHuman.surName;
	age = otherHuman.age;
	return *this;
}

bool operator<(int x, Human& otherHuman) { return x < otherHuman.age ? true : false; }

