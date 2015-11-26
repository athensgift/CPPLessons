#pragma once
#include "Bank.h"

class Player
{
private:
	string userName;
	int coins;
	Bank bank;
public:
	Player(Bank& theBank, string userName, int startingCoins);
	~Player() { bank.receiveCoins(coins); };
	void winCoins(int winCoins);
	string description();
};

