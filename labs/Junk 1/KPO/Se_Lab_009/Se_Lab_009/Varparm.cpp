#include <iostream>
#include "Varparm.h"
#include <locale>
using namespace std;
using namespace Varparm;

namespace Varparm
{
	int ivarparm(int num, int a...)
	{
        int mult = 1;
		int *p = &a;
		
		for (int i = 0; i <num; i++)
		{
			mult *= p[i];
		}
        return mult;
	}


	int svarparm(short num, short a...)
	{
		short max = SHRT_MIN;
		int* p =(int*)& a;

		for (int i = 0; i <num; i++)
		{
			if (p[i] > max)max = p[i];
		}
		if (max == SHRT_MIN)max = 0;
		return max;
	}

	double fvarparm(float a...)
	{

		float sum = 0;
		if (a == FLT_MAX)return 0;
		sum += a;
		double* p = (double*)(&a+1);
		int i = 0;
		while (p[i] != FLT_MAX)
		{	
			sum += p[i++];	
		}
		return sum;
	}


	double dvarparm(double a...)
	{

		double sum = 0;
		double *p = &a;
		int i = 0;
		while (p[i] != DBL_MAX)
		{
			sum += p[i++];
		}
		return sum;
	}

}

void main()
{
	cout << "INT:" << endl;
	cout << ivarparm(0)<<endl;
	cout << ivarparm(1,15)<<endl;
	cout << ivarparm(2, 15,2) << endl;
	cout << ivarparm(7,1,2,3,4,5,6,7) << endl;

	cout << "SHORT:" << endl;
	cout << svarparm(0) << endl;
	cout << svarparm(1, 15) << endl;
	cout << svarparm(2, 15, 2) << endl;
	cout << svarparm(7, 1, 2, 3, 4, 5, 6, 7) << endl;

	cout << "FLOAT:" << endl;
	cout << fvarparm(FLT_MAX) << endl;
	cout << fvarparm(1, FLT_MAX) << endl;
	cout << fvarparm(2, 15.1, FLT_MAX) << endl;
	cout << fvarparm(7, 1.5, 2.2, 3.9, 4.7, 5.8, 6.9, FLT_MAX) << endl;

	cout << "DOUBLE:" << endl;
	cout << dvarparm(DBL_MAX) << endl;
	cout << dvarparm(1.5, DBL_MAX) << endl;
	cout << dvarparm(2.7, 15.1, DBL_MAX) << endl;
	cout << dvarparm(7.1, 1.5, 2.2, 3.9, 4.7, 5.8, 6.9, DBL_MAX) << endl;	

}