
#include "stdafx.h"
#include <iostream>
using namespace std;


void check(int day,int month, int year,int *array)
{
	
	if ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0)
	{
		array[2] = 29;
	}
	else {

		array[2] = 28;
	}
	if (month <= 0 or month >= 13) { cout << endl << "ErRor"; exit(69); }
	if (array[month] < day or day==0)
	{
		cout << endl << "ErRor";
		exit(69);
	}

}