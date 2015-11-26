#include "stdafx.h"
#include "Bank.h"
#include <iostream>


Bank::Bank(string bankName, int numberOfCoins) : name(bankName), coinsInBank(numberOfCoins){}

int Bank::vendCoins(int numberOfCoinsToVend) {
	if (coinsInBank >= numberOfCoinsToVend) {
		return numberOfCoinsToVend;
	}
	else {
		return coinsInBank;
	}
};

void  Bank::receiveCoins(int numberOfCoinsToReceive) {
	if (numberOfCoinsToReceive > 0) {
		coinsInBank += numberOfCoinsToReceive;
	}
	else {
		cout << "Tsaprrrr" << endl;
	}

};