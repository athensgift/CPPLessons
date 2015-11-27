#ifndef _Bank
#define _Bank

#include "stdafx.h"
#include <string>
using namespace std;

class Bank {
	string name;
	int coinsInBank;
public:
	Bank(string bankName, int numberOfCoins);
	int vendCoins(int numberOfCoinsToVend);
	void receiveCoins(int numberOfCoinsToReceive);

	string description();
};

#endif