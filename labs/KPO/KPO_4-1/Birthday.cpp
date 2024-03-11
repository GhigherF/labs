#include "stdafx.h"
#include <iostream>
using namespace std;

void  BirthDay(int *array, int day, int month)

{



	int sum1 = 0;
	*(array + 2) = 29; //Так как 2024 високосный
	for (int i = 1; i < month; i++)
	{
		sum1 += *(array + i);
	}
	sum1 += day;
	


	int Bday, Bmonth, Bdate;
	cout << endl << "Ur Birthday:  (day,month)"<<endl;
	cin >> Bdate;
	Bday = Bdate / 100;
	Bmonth = Bdate % 100;
	 int sum2 = 0;
	for (int i = 1; i < Bmonth; i++)
	{
		sum2 += *(array + i);
	}
	sum2 += Bday;
	cout << endl << "Days left:";
	if (sum1 < sum2) cout << endl << sum2 -sum1;
	else cout << endl << 366 - sum1 + sum2;
}