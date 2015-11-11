// ColaMachine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "ColaMachineOptions.h"


using namespace std;

int main()
{
	int choice;
	cout << " 1: Cola \n 2: Water \n 3: Sprite \n 4: Zero \n 5: Light \n Please give the number of your choice: ";
	cin >> choice;

	if (choice >= 1 && choice <= 5) {
		//??? ??????? casting to int choice ?? ??? enumeration 
		//(???? ??????? ????? ??? enumeration ???? ??????? ??????????? ?? ???? integer)
		ColaMachineOptions enumChoice = ColaMachineOptions(choice); 
		
		switch (choice)
		{
		case ColaMachineOptions::Cola:
			cout << "Cola";
			break;
		case ColaMachineOptions::Water:
			cout << "Water";
			break;
		case ColaMachineOptions::Sprite:
			cout << "Sprite";
			break;
		case ColaMachineOptions::Zero:
			cout << "Zero";
			break;
		case ColaMachineOptions::Light:
			cout << "Light";
			break;
		}
	}
	else {
		cout << "????? ???????";
	}


	//switch (choice)
	//{
	//case 1:
	//	cout << "Cola";
	//	break;
	//case 2:
	//	cout << "Water";
	//	break;
	//case 3:
	//	cout << "Sprite";
	//	break;
	//case 4:
	//	cout << "Zero";
	//	break;
	//case 5:
	//	cout << "Light";
	//	break;
	//default:
	//	cout << "Wrong choice";
	//	break;
	//}

    return 0;
}

