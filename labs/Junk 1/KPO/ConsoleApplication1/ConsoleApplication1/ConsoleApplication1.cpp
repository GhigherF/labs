#include <iostream>
using namespace std;


struct example
{
	int data;
	example* next;
};

void main()
{
	example* a = new example;
	example* b = new example;
	example* c = new example;
	a->data = 25;
	b->data = 77;
	c->data = 99;
	a->next = b;
	b->next = c;
	cout << a->data  << endl << a->next->data << endl << a-> next->next->data;
}