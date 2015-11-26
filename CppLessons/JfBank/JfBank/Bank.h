#pragma once
#include <string>
using namespace std;

class Bank
{
private:
	string name;
	int coinsInBank;

public:
	Bank(string bankName, int numberOfCoins);
	int vendCoins(int numberOfCoinsToVend);
	void  receiveCoins(int numberOfCoinsToReceive);
	string description() { return name + " " + to_string(coinsInBank); }

};

