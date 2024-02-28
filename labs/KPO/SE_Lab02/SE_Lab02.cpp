#include <iostream>
#include  "windows.h"
using namespace std;
void function()
{
}


void main()
{
	SetConsoleCP(1251);
	bool no = false;
	bool surprises = true;
	char creep = 'm';
	char idioteque = 'м';
	wchar_t karma = L'm';
	wchar_t police = L'м';
	short plus = 12;
	short minus = -12;
	short max = 0x7fff;
	short min = 0x8000;
	unsigned short a = 0xffff;//65535	;		
	unsigned short b = 0x00;
	int gg = 13;
	int negg = -13;
	int min64 = 0x80000000;
	int max64 = 0x7fffffff;
	unsigned int maximus = 0xffffffff;
	unsigned int zero = 0x0000;
	long boom = 67;
	long kaboom = -67;
	long mimimin = 0x80000000;
	long maxmaxbetov = 0x7fffffff;
	unsigned long nol = 0x00;
	unsigned long mnog = 0xffffffff;
	float ak47 = 4.5;
	float m4 = -4.5;
	double mama;
	mama = m4;
	cout << ak47 / 0;
	cout << endl << -ak47 / 0;
	cout << endl << (-ak47 / 0) / (ak47 / 0);
	char* u;
	u = &creep;
	wchar_t* u1;
	u1 = &karma;
	short* u2;
	u2 = &max;
	int* u3;
	u3 = &gg;
	float* u4;
	u4 = &ak47;
	double* u5;
	u5 = &mama + 3;
	void (*pointer)();
	pointer = function;
	pointer();
}
