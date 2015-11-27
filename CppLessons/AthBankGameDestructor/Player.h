#ifndef _Player
#define _Player

#include "stdafx.h"
#include <string>
#include "Bank.h"
using namespace std;

class Player {
	string userName;
	int coins;
	Bank bank;
public:
	Player(Bank& theBank, string userName, int startingCoins);
	void winCoins(int winCoins);
	string description();
	~Player();
};

#endif