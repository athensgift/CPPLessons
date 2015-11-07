#include "stdafx.h"
#include "Human.h"


Human::Human() : Animal("Human",18), iq(100), gender(Male){}
Human::Human(string name, int age, int iq, Gender gender) : Animal(name,age),iq(iq),gender(gender){}
Human::~Human(){}
