<<<<<<< HEAD
#include "stdafx.h"
#include <iostream>
using namespace std;
void MonthName(int month)
{
	const char* names[13] = {"","January","February","March","April","May","June","Jule","August","September","October","November","December"};
	cout << names[month];
}
void ProgDay(int vis, int *arr, int day, int month,int target)
{
	int sum = 0;

	if (vis == true && target == 366)
	{
		cout<<endl<<"Happy New Year!";
	}

	if (vis == false && target == 365)
	{
		cout <<  "Happy New Year!"<<endl;
	}

	if (target == 35)	
	{
		cout << "S dnem resinovih kalosh!";
	}
	if (vis == true && target == 74)
	{
		cout << endl << "S dnem taiskogo slona!";
	}

	if (vis == false && target == 72)
	{
		cout << "S dnem taiskogo slona!" << endl;
	}
	if (vis == true && target == 185)
	{
		cout << endl << "S dnem UFO!";
	}

	if (vis == false && target == 183)
	{
	cout << "S dnem taiskogo UFO!" << endl;
	}
	if (target == 256)
	{
		cout << "S dnem programmista!";
	}
=======
#include "stdafx.h"
#include <iostream>
using namespace std;
void MonthName(int month)
{
	const char* names[13] = {"","January","February","March","April","May","June","Jule","August","September","October","November","December"};
	cout << names[month];
}
void ProgDay(int vis, int *arr, int day, int month,int target)
{
	int sum = 0;

	if (vis == true && target == 366)
	{
		cout<<endl<<"Happy New Year!";
	}

	if (vis == false && target == 365)
	{
		cout <<  "Happy New Year!"<<endl;
	}

	if (target == 35)	
	{
		cout << "S dnem resinovih kalosh!";
	}
	if (vis == true && target == 74)
	{
		cout << endl << "S dnem taiskogo slona!";
	}

	if (vis == false && target == 72)
	{
		cout << "S dnem taiskogo slona!" << endl;
	}
	if (vis == true && target == 185)
	{
		cout << endl << "S dnem UFO!";
	}

	if (vis == false && target == 183)
	{
	cout << "S dnem taiskogo UFO!" << endl;
	}
	if (target == 256)
	{
		cout << "S dnem programmista!";
	}
>>>>>>> 6a1bf835ea3554afaa22b1acf46942cac87e08dd
}