#include "stdafx.h"
#include "Player.h"

Player::Player(Bank & theBank, string userName, int startingCoins): bank(theBank), userName(userName), coins(theBank.vendCoins(startingCoins))
{
}

void Player::winCoins(int winCoins)
{
	coins += bank.vendCoins(winCoins);
}

string Player::description()
{
	return "� player : "+userName+" ���� "+to_string(coins)+" coins, ��� ������������ ��� ������� " + bank.description();
}

Player::~Player()
{
	bank.receiveCoins(coins);
}
