<<<<<<< HEAD
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
=======
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
>>>>>>> 6a1bf835ea3554afaa22b1acf46942cac87e08dd
}