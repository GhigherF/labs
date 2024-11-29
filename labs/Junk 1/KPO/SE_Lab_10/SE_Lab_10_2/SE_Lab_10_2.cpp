#include <iostream>
using namespace std;

auto lambda = [](int a)
	{ if (a > 0)return true;
	else return false; };

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Num:";	
	int a;
	cin >> a;
	cout<<lambda(a)<<endl;

	cout << "Num:";
	int b;
	cin >> b;
	cout<<lambda(b)<<endl;

	cout << "Num:";
	int c;
	cin >> c;
	cout<<lambda(c)<<endl;
}