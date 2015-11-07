#include "stdafx.h"
#include "Human.h"
#include "iostream"

using std::cout;
using std::endl;

Human::Human() : Animal("Human",18), iq(100), gender(Male){
	cout << "Constructing default human" << endl;
}
Human::Human(string name, int age, int iq, Gender gender) : Animal(name,age),iq(iq),gender(gender){
	cout << "Constructing human with name:" << name << " age: " << age << " iq:" << iq << " gender:" << gender << endl;
}

Human::~Human(){
	cout << "Destructing human" << endl;
}
