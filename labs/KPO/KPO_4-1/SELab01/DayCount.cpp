<<<<<<< HEAD
#include "stdafx.h"
#include <iostream>

using namespace std;

int WhatDayIsIt(bool flag, int *array,int day,int month)
{
	int sum=0;
	if (flag == true) { *(array + 2) += 1; }
	for (int i = 1; i < month; i++)
	{
		sum += *(array + i);
	}
	sum += day;
	return sum;
	*(array + 2) = 28;
=======
#include "stdafx.h"
#include <iostream>

using namespace std;

int WhatDayIsIt(bool flag, int *array,int day,int month)
{
	int sum=0;
	if (flag == true) { *(array + 2) += 1; }
	for (int i = 1; i < month; i++)
	{
		sum += *(array + i);
	}
	sum += day;
	return sum;
	*(array + 2) = 28;
>>>>>>> 6a1bf835ea3554afaa22b1acf46942cac87e08dd
}