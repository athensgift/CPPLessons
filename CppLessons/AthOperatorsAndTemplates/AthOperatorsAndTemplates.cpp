// AthOperatorsAndTemplates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Human.h"
#include <iostream>
using namespace std;

template<class T>
T Max(T& left, T& right) {
	return left < right ? right : left;
}

int main()
{
	Human human1 = Human();
	Human human2 = Human("Athinodoros", "Fafoutis", 26);
	Human maxHuman = Max(human1, human2);
	cout << maxHuman.GetName() << " " << maxHuman.GetSurname();
	system("PAUSE");
    return 0;
}

