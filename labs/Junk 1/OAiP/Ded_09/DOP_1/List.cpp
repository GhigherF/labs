#include "List.h"
#include <iostream>
bool Object::Insert(void* data,bool flag)           // ������� � ������
{
	if (flag == false)
	{
Head = new Element(NULL, data, Head);
	}
	if (flag == true)
	{
	Head = (Head->Prev = new Element(NULL,data,Head));
		}

	
	return 0;
}
//-----------------------------------------------------------
Element* Object::Search(void* data)    // ����� �������� �������
{
	Element* rc = Head;
	while ((rc != NULL) && (rc->Data != data))
		rc = rc->Next;
	return rc;
}
//-----------------------------------------------------------
void Object::PrintList(void(*f)(void*))     // �����
{
	Element* e = Head;
	while (e != NULL)
	{
		f(e->Data);
		e = e->GetNext();
	};
}
//-----------------------------------------------------------
void Object::PrintList(void(*f)(void*), Element* e)
{
	f(e->Data);

}
//-----------------------------------------------------------
bool  Object::Delete(Element* e)    // ������� �� ������
{
	bool rc = 0;
	if (rc = (e != NULL))
	{
		if (e->Next != NULL)
			e->Next->Prev = e->Prev;
		if (e->Prev != NULL)
			e->Prev->Next = e->Next;
		else
			Head = e->Next;
		delete e;
	}
	return rc;
}
//-----------------------------------------------------------
bool Object::Delete(void* data)      // ������� �� ��������
{
	return Delete(Search(data));
};
//-----------------------------------------------------------
Element* Object::GetLast()
{
	Element* e = Head, * rc = e;
	while (e != NULL)
	{
		rc = e;
		e = e->GetNext();
	}
	return rc;
}
//-----------------------------------------------------------
Object Create()
{
	return *(new Object());
}

int Object::CountList()
{
	int count = 0;
	Element* e = Head;
	while (e != NULL)
	{
		count += 1;
		e = e->GetNext();
	};
	return count;
		
}

bool Object::DeleteList()
{
	while (Head != NULL)
	{
		Head = Head->Next;
	}
	return 0;
}