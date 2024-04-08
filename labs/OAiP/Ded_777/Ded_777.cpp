#include <iostream>
using namespace std;

struct stack
{
	int number;
	stack* next;
	stack* head;
};
void push(stack* gg, int a)
{
	stack* bb = new stack;
	bb->number = a;
	bb->next =gg->head;
	gg->head = bb;	


}
void show(stack* gg)
{
	stack* bb = gg->head;
	while (bb)
	{
		cout << bb->number<<" ";
		bb = bb->next;
	}
}
void del(stack* gg)
{
	bool flag = false;
	stack* bb = gg->head, *temp=gg->head;
	while (bb)
	{

		if (bb->number>0&&flag==false)
		{
			flag = true;
			bb = bb->next;
			temp->head = gg->head->next;
		}
		else
		{
			temp->number = gg->number;
		}
	
		bb = bb->next;
	}
	temp = temp->head;

	while (temp)
	{
		bb = temp;
		temp = temp->next;
	}

	
	delete temp;
}


void main()
{
	stack* gg = new stack;
	gg->head = NULL;
	push(gg, 100);
	push(gg, 200);
	show(gg);
	del(gg);
	show(gg);

}
