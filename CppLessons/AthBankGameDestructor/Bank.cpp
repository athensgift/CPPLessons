#include "stdafx.h"
#include "Bank.h"

Bank::Bank(string bankName, int numberOfCoins): name(bankName), coinsInBank(numberOfCoins)
{
}

int Bank::vendCoins(int numberOfCoinsToVend)
{
	int temp = coinsInBank < numberOfCoinsToVend ? coinsInBank : numberOfCoinsToVend;
	coinsInBank -= temp;
	return temp;
}

void Bank::receiveCoins(int numberOfCoinsToReceive)
{
	coinsInBank += numberOfCoinsToReceive;
}

string Bank::description()
{
	return "ÔñÜðåæá: " + name+ ", coins : " + to_string(coinsInBank);
}
