// WhileAndBreak.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int in=0; 
	int count = 0;

	do{
		
		cout << "Pls give me 0 to count or 1 to Grexit" << endl;
		cin >> in;
		
		switch (in) {
		case 0:
			count++;
			break;
		default: 
			break;
		}

		if (count==5) {
			cout << "Yes my friend 5 zeros" << endl;
			break;
		}	

	} while (in == 0);


    return 0;
}

