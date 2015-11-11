// GradingProgramm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int grade = 0;
	cout << "Please enter your integer grade: ";
	cin >> grade;

	string score;
	if (grade >= 0 && grade <= 59) {
		score = "F";
	}
	else if (grade <= 69) {
		score = "D";
	}
	else if (grade <= 79) {
		score = "C";
	}
	else if (grade <= 89) {
		score = "B";
	}
	else if (grade <= 100) {
		score = "A";
	}
	else {
		cout << "You entered wrong Value BYE BYE";
	}

	cout << "Your score is :" + score;

    return 0;
}

