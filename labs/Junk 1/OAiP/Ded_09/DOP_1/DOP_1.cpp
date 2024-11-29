#include "List.h"
#include <iostream>
#include <string>
using namespace std;

struct Person
{
	string name;
	int age;
	Person* next;
};

void print(void* b)       //Функция используется при выводе 
{
	Person* a = (Person*)b;
	cout << a->name << "  " << a->age << endl;
}

int main()
{
	bool flag = false;
	setlocale(LC_ALL, "Russian");
	Object L1 = Create(); 
	while (true)
	{
			cout << "1.Enter" << endl << "2.Out" << endl << "3.Delete List"<< endl << "4.Count"<<endl;
		int choice,count;
		cin >> choice;
		
		switch (choice)
		{
		case 1:
		{
			cout << endl << "Age:";
			int n;
			cin >> n;
			cout << "Name:";
			string gg;
			getline(cin, gg);
			getline(cin,gg);
			Person a = { gg, n };

			L1.Insert(&a,flag);
			flag = true;
			break;
		}
		case 2:
		{
			L1.PrintList(print);
			break;
		}
		case 4:
		{
			count= L1.CountList();
			cout << endl << "Count:" << count<<endl;
			break;
		}
		case 3:
		{
			L1.DeleteList();
			break;
		}

		}

	}
	return 0;
}
