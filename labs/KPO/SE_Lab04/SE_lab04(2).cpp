#include <iostream>
using namespace std;

struct Flat
{
	int area, rooms, year, floor;
	bool existence[100];
};

void main()
{
	bool flag = false;
	Flat Flat1 = {54,6,1998,12,1,0,0,1,1};
	Flat Flat2 = { 23,2,2015,5,0,1,1,0,1 };
	int counter = 0;
	for (int i = 0; i < 5; i++)
	{
		if (Flat1.existence[i] == Flat2.existence[i])
		{
			counter += 1;
		}
	}
	if (counter == 5)flag = true;
	cout << "Identical:";
	if (Flat1.area == Flat2.area && Flat1.rooms == Flat2.rooms && Flat1.year == Flat2.year && Flat1.floor == Flat2.floor && flag == true)
	{
		cout << "Yes" << endl;
	}
	else { cout << "No" << endl; }

	cout << "Summary area:" << Flat1.area + Flat2.area << endl;
}
