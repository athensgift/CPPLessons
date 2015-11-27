// AthBankGameDestructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"
#include <iostream>

using namespace std;

int main()
{
	Bank bank1 = Bank("Alpha", 5000);
	Bank bank2 = Bank("Beta", 7000);
	Bank bank3 = Bank("Gama", 2000);

	Player p1 = Player(bank1, "Athino", 1200);
	Player p2 = Player(bank2, "Mhtsoulas", 1500);
	Player p3 = Player(bank3, "Zeni", 2500);

	cout << p1.description() << endl;
	cout << p2.description() << endl;
	cout << p3.description() << endl;

	p1.winCoins(800);
	p3.winCoins(100);
	cout << p1.description() << endl;
	cout << p3.description() << endl;

	p1.~Player();
	p2.~Player();
	p3.~Player();

	cout << bank1.description() << endl;
	cout << bank2.description() << endl;
	cout << bank3.description() << endl;

	system("PAUSE");
    return 0;
}

