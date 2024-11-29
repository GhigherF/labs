#include "stdafx.h"
#include <iostream>
using namespace std;

int visokos(int year)
{
	if ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0)
	{
		cout << endl << "Visokosny god";
		return true;
	}
	else {
		
		cout << endl << "NEvisokosny god";
		return false;
	}
}