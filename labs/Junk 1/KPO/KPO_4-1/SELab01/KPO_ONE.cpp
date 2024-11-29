<<<<<<< HEAD
﻿#include "stdafx.h"
#include <iostream>

using namespace std;





void main()
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
	int date, year, month, day,count;
	bool flag;
	cout << "Date:";
	cin >> date;
	day = date / 1000000;
	month = date / 10000 % 100;
	year = date % 10000;
	
	check(day, month,year,days);
	
	
	flag=visokos(year);
	cout << endl << "Day is:";
	count=WhatDayIsIt(flag,days,day,month);
	cout << count;
	BirthDay(days,day,month);
	YearCalculate();
	DayNum();
}


=======
﻿#include "stdafx.h"
#include <iostream>

using namespace std;





void main()
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
	int date, year, month, day,count;
	bool flag;
	cout << "Date:";
	cin >> date;
	day = date / 1000000;
	month = date / 10000 % 100;
	year = date % 10000;
	
	check(day, month,year,days);
	
	
	flag=visokos(year);
	cout << endl << "Day is:";
	count=WhatDayIsIt(flag,days,day,month);
	cout << count;
	BirthDay(days,day,month);
	YearCalculate();
	DayNum();
}


>>>>>>> 6a1bf835ea3554afaa22b1acf46942cac87e08dd
