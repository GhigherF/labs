#include "stdafx.h"
#include <iostream>

using namespace std;


void YearCalculate()
{
	int year;
	cout << endl << "Year:";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << "Visokosny god" << endl;
	}
	else {

		cout << "NEvisokosny god" << endl;
	}
}