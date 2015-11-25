// JfOperatorAndTemplates.cpp : Defines the entry point for the console application.

//1)να δούμε στο for αν έχει διαφορά το i++ with the ++i.
//2)να κάνουμε παράδειγμα με το ++ι και το ι++
//3)να κάνουμε παράδειγμα με το = που επιστρέφει τιμή.
//4)να κάνουμε ενα παράδειγμα με το immediate if

#include "stdafx.h"
#include <iostream>
#include "human.h"
#include <string>

using namespace std;

void ex1ToEx4() {
	
	bool myBool = false;
	int i = myBool ? 1 : 0;
	int j;
	cout << "i++" << endl;
	for (i = 0; i < 5;) {
		cout << (j = i++) << endl;
	}
	cout << i << endl;

	cout << "++i" << endl;

	for (i = 0; i < 5; ) {
		cout << (j = ++i) << endl;
	}
	cout << i << endl;
}

template <class T>
T max(T& left, T& right){return right < left ? left : right;}

int main()
{
	//ex1ToEx4();

	Human a;
	Human b("Jimmys","Fafoutis",25);
	Human c = max(a, b);
	
	if (18<c) { 
		cout << c.Description() << endl; 
	}
	else { 
		cout << "Gamietai o Athinakis kai eimai tzoveno" << endl; 
	}

	system("PAUSE");
    return 0;
}

