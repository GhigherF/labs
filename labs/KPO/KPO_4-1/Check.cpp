
#include "stdafx.h"
#include <iostream>
using namespace std;


void check(int day,int month, int year,int *array)
{
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		array[2] = 29;
	}
	else {

		array[2] = 28;
	}
	if (month <= 0 || month >= 13) { cout << endl << "ErRor"; exit(69); }
	if (array[month] < day || day==0)
	{
		cout << endl << "ErRor";
		exit(69);
	}
	

}