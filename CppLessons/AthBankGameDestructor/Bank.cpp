#include "stdafx.h"
#include "Bank.h"

Bank::Bank(string bankName, int numberOfCoins): name(bankName), coinsInBank(numberOfCoins)
{
}

int Bank::vendCoins(int numberOfCoinsToVend)
{
	return coinsInBank < numberOfCoinsToVend ? coinsInBank : numberOfCoinsToVend;
}

void Bank::receiveCoins(int numberOfCoinsToReceive)
{
	coinsInBank += numberOfCoinsToReceive;
}

string Bank::description()
{
	return "ÔñÜðåæá: " + name+ ", coins : " + to_string(coinsInBank);
}
