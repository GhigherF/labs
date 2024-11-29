#include "Header.h"
#include <iostream>
using namespace std;
heap::CMP cmpAAA(void* a1, void* a2)  //Функция сравнения
{
#define A1 ((AAA*)a1)
#define A2 ((AAA*)a2)
	heap::CMP
		rc = heap::EQUAL;
	if (A1->x > A2->x)
		rc = heap::GREAT;
	else
		if (A2->x > A1->x)
			rc = heap::LESS;
	return rc;
#undef A2
#undef A1 
}
extern int sum;
extern double avrg;
extern int leavesSum;
//-------------------------------
int main()
{

	setlocale(LC_ALL, "rus");
	int k,k2,choice;
	heap::Heap h1 = heap::create(30, cmpAAA);
	heap::Heap h2 = heap::create(30, cmpAAA);
	for (;;)
	{
		cout << "1 - вывод кучи на экран" << endl;
		cout << "2 - добавить элемент" << endl;
		cout << "3 - DOPS" << endl;
		cout << "4 - добавить элемент 2 кучи" << endl;
		cout << "5 - вывести 2 кучу на экран" << endl;
		cout << "0 - выход" << endl;
		cout << "сделайте выбор" << endl;  cin >> choice;
		switch (choice)
		{
		case 0:  exit(0);
		case 1: {
			cout << "First heap:" << endl;
h1.scan(0);
break;
		}
			
			
			
		case 2: {	AAA* a = new AAA;
			AAA* b = new AAA;
			cout << "введите ключ" << endl; 	cin >> k;
			a->x = k;
			h1.insert(a);
			break;
		}
		case 4:
		{
		AAA* b = new AAA;
		cout << "введите ключ" << endl; 	cin >> k2;
		b->x = k2;
		h2.insert(b);
		break;
		}
		case 5:
		{
			cout << "Second heap:" << endl;
			h2.scan(0);
			break;
		}
		case 3:  
		{
			h1.sum();
			
		}
		
			break;
		default:  cout << endl << "Введена неверная команда!" << endl;
		}
	} return 0;
}

