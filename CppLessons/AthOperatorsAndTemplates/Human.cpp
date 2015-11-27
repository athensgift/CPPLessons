#include "stdafx.h"
#include "Human.h"

Human::Human(): name("Someone"), surname("Someone"), age(0)
{
}

Human::Human(string name, string surname, int age): name(name), surname(surname), age(age)
{
}

Human::~Human()
{
}

bool operator<(int left, Human& right) {
	return left < right.age;
}