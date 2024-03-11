#include "stdafx.h"
#include <iostream>

using namespace std;

void main()
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
	int date, year, month, day,count,target;
	bool flag;
	cout << "Date:";
	cin >> date;
	if (date < 1000000 || date>99999999)
	{
		cout << "ErrOr";
		exit(69);
	}
		day = date / 1000000;
		month = date / 10000 % 100;
		year = date % 10000;
	
	check(day, month,year,days);
	
	MonthName(month);
	flag=visokos(year);
	cout << endl << "Day is:";
	count=WhatDayIsIt(flag,days,day,month);
	cout << count;
		

	//target = 256;
	//cout << endl << "Programmer ";
	//ProgDay(flag,days,day,month,target);
	cout << endl << "Day of year:";
	cin >> target;
	if (flag == true)
	{
		if (target <= 0 || target > 366)
		{
			cout << endl << "ErrOr";
			exit(69);
		}
	}
	else
	{
		if (target <= 0 || target > 365)
		{
			cout << endl << "ErrOr";
			exit(69);
		}
	}

	cout << endl;
	ProgDay(flag, days, day, month, target);

	//BirthDay(days,day,month);
	//YearCalculate();
	//DayNum();
}


