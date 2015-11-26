#include "stdafx.h"
#include "Player.h"


Player::Player(Bank& theBank, string userName, int startingCoins) : bank(theBank), userName(userName), coins(theBank.vendCoins(startingCoins)) {}
Player::~Player(){}

void Player::winCoins(int winCoins) {
	coins += bank.vendCoins(winCoins);
}

string Player::description() { return "O " + userName + " exei " + to_string(coins) + " coins, with Bank" + bank.description(); }
