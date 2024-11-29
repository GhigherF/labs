#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student//Для допа 2(3) все адреса были заменены на студентов и добавлены соответствующие разделы
{
	int data;
	/*char initials[100];
	int year;
	char group[30];
	int grades[6];*/
	Student* next;
	Student* prev;
};

void insert(Student** first, Student** last)
{

	Student* temp = new  Student;
	cin >> temp->data;
	/*int year;
	cout << "Initials:";
	gets_s(temp->initials);
	gets_s(temp->initials);
	cout << "Birth:";
	cin >>temp->year;
	cout << "Group:";
	gets_s(temp->group);
	gets_s(temp->group);
	cout << "Grades:" << endl;
	for (int i = 1; i <=5; i++)
	{
		cout << i << ":";
		cin >> temp->grades[i];
	}*/


	temp->prev = NULL;
	temp->next = NULL;

	Student* e = *last;

	if (*last == NULL)
	{

		temp->next = NULL;
		temp->prev = NULL;
		*last = temp;
		*first = temp;
	}
	else
	{
		e->next = temp;
		temp->next = NULL;
		temp->prev = e;
		*last = temp;
	}

}






void output(Student** head)
{
	cout << endl;
	Student* temp = *head;
	while (temp)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
	/*Student* temp = *head;
	while (temp)
	{
		cout << "Initials:";
		cout<<temp->initials<<endl;
		cout << "Birth:";
		cout << temp->year << endl;
		cout << "Group:";
		cout << temp->group << endl;
		cout << "Grades:" << endl;
		for (int i = 1; i <= 5; i++)
		{
			cout << i << ":";
			cout<<temp->grades[i] << endl;
		}
		temp = temp->next;
	}
	cout << endl;*/
}



//void delet(Student** phead, Student** plast) 
//{
//	Student* t = *phead;
//	char street[100];
//	cout << endl << "Delete:";
//	gets_s(street);
//	gets_s(street);
//while (t)
//{
//	if (!strcmp(street, t->street))  break;
//	t = t->next;
//}
//if (!t)
//cerr << "Имя не найдено" << endl;
//else
//{
//	if (*phead == t)
//	{
//		*phead = t->next;
//		if (*phead)
//			(*phead)->prev = NULL;
//		else
//			*plast = NULL;
//	}
//	else
//	{
//		t->prev->next = t->next;
//		if (t != *plast)
//			t->next->prev = t->prev;
//		else
//			*plast = t->prev;
//	}
//	delete t;
//	cout << "Deleted succesfully" << endl;
//}
//}

//void writeToFile(Student** phead)
//{
//	Student* t = *phead;
//	ofstream file("gg.txt");
//	
//	while (t)
//	{
//		file << t->city << "--" << t->street << endl;
//		t = t->next;
//	}
//	file.close();
//}
//
//void readFromFile()
//{
//	ifstream File("gg.txt");
//	string tempString;
//	while (getline(File,tempString))
//	{
//		cout << tempString <<endl;
//	}
//	File.close();
//}

//void execution(Student **phead)
//{
//
//	int count = 0,m;
//	Student* t = *phead;
//	cout << "Every:";
//	cin >> m;
//	while (t)
//	{
//		count += 1;
//		if (count % m == 0)
//		{
//			t->prev->next = t->next;
//			t = t->next;
//		}
//		else { t = t->next; }
//	}	
//}

//void execution(Student **phead)//Для допа 2
//{
//	string nameMin, nameMax, nameGrade;
//	int minAge = 999, maxAge = 0;
//	float maxAverageGrade = 0, sum;
//	Student* temp= *phead;
//	while (temp)
//	{
//		if ((2024 - temp->year) > maxAge)
//		{
//			maxAge = 2024 - temp->year;
//			nameMax = temp->initials;
//		}
//		if ((2024 - temp->year) < minAge)
//		{
//minAge = 2024 - temp->year;
//nameMin = temp->initials;
//		}
//		sum = 0;
//		for (int i = 1; i <= 5; i++)
//		{
//			sum += temp->grades[i];
//		}
//		if (sum / 5 > maxAverageGrade)
//			{
//maxAverageGrade = sum / 5;
//nameGrade = temp->initials;
//			}
//		temp = temp->next;
//	}
//	cout << endl << "--------------------------------------------" << endl << "Youngest:" << nameMin << endl << "Oldest:" << nameMax << endl << "Most succesfull:" << nameGrade << endl << "----------------------------------------------------" << endl;
//}

void execution(Student** phead, int K)//для допа 3
{
	int count = 1;
	Student* temp = *phead;
	cout << endl << "-------------------------------------" << endl;
	while (temp)
	{
		cout << "Current:";
		output(&temp);
		Student* t = temp;
		while (t)
		{
			if (count % K == 0)
			{

				cout << "Out:" << t->data << " ";
				if (t->prev == NULL && t->next == NULL)
				{
					exit(69);
				}
				if (t->prev == NULL)
				{
					temp = temp->next;
					temp->prev = NULL;
				}
				else
				{
					if (t->next == NULL)
					{
						t->prev->next = NULL;
					}
					else t->prev->next = t->next;
				}



			}
			count += 1;
			t = t->next;
		}
	}
	cout << endl << "-------------------------------------" << endl;
}

void main()
{
	Student* head = NULL, * tail = NULL;
	//Доп 3
	int n;
	cout << "N:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		insert(&head, &tail);
	}
	output(&head);
	cout << endl << "K:";
	int K;
	cin >> K;
	execution(&head, K);
	/////////////////////////////////////////////////////////////////////////////
//	while (true)
//	{
//		cout << "1.Enter element" << endl << "2.Output" << endl << "3.Delete" << endl<<"4.Write to file"<<endl<<"5.Read from file"<<endl<<"6.EXE"<<endl;
//		int choice;
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//		{
//insert(&head, &tail);
//break;
//		}
//		case 2:
//		{
//output(&head);
//break;
//		}
////		case 3:
////		{
////delet(&head,&tail);
////break;
////		}
////		case 4:
////		{
////			writeToFile(&head);
////			break;
////		}
////		case 5:
////		{
////			readFromFile();
////		}
//		case 6:
//		{
//			execution(&head);
//		}
//		}
//	}

}

