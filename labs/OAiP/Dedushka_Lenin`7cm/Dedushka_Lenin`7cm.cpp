<<<<<<< HEAD
﻿#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct digits//Задание структуры
{
	int num;
	digits* next;
};
digits* listNum = nullptr;//Указатель для начала структуры
digits* arr;//указатель на текущую структуру
void Enter()
{
	//Выделение памяти и запись элементов 
	arr = new digits;
	arr->next = listNum;
	listNum = arr;
	cout << "Num:";
	cin >> arr->num;

	
}
void Out()
{
	arr = listNum;
	
		cout << "-------------------List-------------------" << endl;
		while (arr)
		{
			cout << arr->num;
			arr = arr->next;
			cout << " ";
		}
		cout << endl<<endl;
}


void Delete()
{
	int value;
		cin >> value;//Значениу(ия) которые следует удалить
	digits* temp=listNum,*tempListNum=nullptr;

	arr = listNum;
		
		while (arr)
		{
			if (arr->num != value)
			{
				temp = new digits;
				temp->next = tempListNum;
				tempListNum = temp;
				temp->num = arr->num;
				
			}
			arr = arr->next;
		}
		listNum = tempListNum;
		while (temp)
		{
arr = temp;
temp = temp->next;
		}
		
	
		delete temp;
	}
	


void JustDoIt()
{
	
	arr = listNum;//Вариант 3
	int sum = 0;
		while (arr)
		{ 
			if (arr->num%5==0&&arr->num>0)sum+=arr->num;
			arr = arr->next;
		
		}
		if (sum == 0) cout << endl << "No elements found"<<endl;
		else cout << endl<<"Sum:"<<sum<<endl;



	//arr = listNum;//Доп варианта 1
	//int sum = 0;
	//while(arr)
	//	{
	//	if (arr->num > 0)sum += arr->num;
	//	arr = arr->next;
	//	}
	//if (sum == 0) cout << "No elements found" << endl;
	//else cout << endl << "Sum:" << sum << endl;


	//arr = listNum;//Доп варианта 8
	//int sum = 0;
	//while(arr)
	//	{
	//	if (arr->num < 0&&arr->num%2==0)sum += arr->num;
	//	arr = arr->next;
	//	}
	//if (sum == 0) cout << "No elements found" << endl;
	//else cout << endl << "Sum:" << sum << endl;
	//


	//	arr = listNum;//Доп варианта 15
	//int sum = 0;
	//while(arr)
	//	{
	//	if (arr->num >0&&arr->num%10==7)sum += arr->num;
	//	arr = arr->next;
	//	}
	//if (sum == 0) cout << "No elements found" << endl;
	//else cout << endl << "Sum:" << sum << endl;
	

	}





void main()
{

	int choice;
	while (true)
	{
		cout << "1.Enter" << endl << "2.Output" << endl << "3.Delete" << endl << "4.Execution" << endl << "5.Write to file" << endl << "6.Read from file" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			Enter();
			break;
		}
		case 2:
		{
			Out();
			break;
		}
	case 3:
		{		
			Delete();
		
			break;
		}
		case 4:
		{
			JustDoIt();
		}
		case 5:
		{
			//Запись в файл
			ofstream file("write.txt");
			arr = listNum;

			file << "-------------------List-------------------" << endl;
			while (arr)
			{
				file << arr->num;
				arr = arr->next;
				file << " ";
			}
			file << endl << endl;
			file.close();
			break;
		}
		case 6:
		{
			//Чтение из файла
			ifstream File("write.txt");
			string a;
			cout << endl;
			getline(File, a);
			cout << endl<<a;
			getline(File, a);
			cout <<endl<< a<<endl;
			File.close();
			break;

		}
		}
	}

}
=======
﻿#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct digits//Задание структуры
{
	int num;
	digits* next;
};
digits* listNum = nullptr;//Указатель для начала структуры
digits* arr;//указатель на текущую структуру
void Enter()
{
	//Выделение памяти и запись элементов 
	arr = new digits;
	arr->next = listNum;
	listNum = arr;
	cout << "Num:";
	cin >> arr->num;

	
}
void Out()
{
	arr = listNum;
	
		cout << "-------------------List-------------------" << endl;
		while (arr)
		{
			cout << arr->num;
			arr = arr->next;
			cout << " ";
		}
		cout << endl<<endl;
}


void Delete()
{
	int value;
		cin >> value;//Значениу(ия) которые следует удалить
	digits* temp=listNum,*tempListNum=nullptr;

	arr = listNum;
		
		while (arr)
		{
			if (arr->num != value)
			{
				temp = new digits;
				temp->next = tempListNum;
				tempListNum = temp;
				temp->num = arr->num;
				
			}
			arr = arr->next;
		}
		listNum = tempListNum;
		while (temp)
		{
arr = temp;
temp = temp->next;
		}
		
	
		delete temp;
	}
	


void JustDoIt()
{
	
	arr = listNum;//Вариант 3
	int sum = 0;
		while (arr)
		{ 
			if (arr->num%5==0&&arr->num>0)sum+=arr->num;
			arr = arr->next;
		
		}
		if (sum == 0) cout << endl << "No elements found"<<endl;
		else cout << endl<<"Sum:"<<sum<<endl;



	//arr = listNum;//Доп варианта 1
	//int sum = 0;
	//while(arr)
	//	{
	//	if (arr->num > 0)sum += arr->num;
	//	arr = arr->next;
	//	}
	//if (sum == 0) cout << "No elements found" << endl;
	//else cout << endl << "Sum:" << sum << endl;


	//arr = listNum;//Доп варианта 8
	//int sum = 0;
	//while(arr)
	//	{
	//	if (arr->num < 0&&arr->num%2==0)sum += arr->num;
	//	arr = arr->next;
	//	}
	//if (sum == 0) cout << "No elements found" << endl;
	//else cout << endl << "Sum:" << sum << endl;
	//


	//	arr = listNum;//Доп варианта 15
	//int sum = 0;
	//while(arr)
	//	{
	//	if (arr->num >0&&arr->num%10==7)sum += arr->num;
	//	arr = arr->next;
	//	}
	//if (sum == 0) cout << "No elements found" << endl;
	//else cout << endl << "Sum:" << sum << endl;
	

	}





void main()
{

	int choice;
	while (true)
	{
		cout << "1.Enter" << endl << "2.Output" << endl << "3.Delete" << endl << "4.Execution" << endl << "5.Write to file" << endl << "6.Read from file" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			Enter();
			break;
		}
		case 2:
		{
			Out();
			break;
		}
	case 3:
		{		
			Delete();
		
			break;
		}
		case 4:
		{
			JustDoIt();
		}
		case 5:
		{
			//Запись в файл
			ofstream file("write.txt");
			arr = listNum;

			file << "-------------------List-------------------" << endl;
			while (arr)
			{
				file << arr->num;
				arr = arr->next;
				file << " ";
			}
			file << endl << endl;
			file.close();
			break;
		}
		case 6:
		{
			//Чтение из файла
			ifstream File("write.txt");
			string a;
			cout << endl;
			getline(File, a);
			cout << endl<<a;
			getline(File, a);
			cout <<endl<< a<<endl;
			File.close();
			break;

		}
		}
	}

}
>>>>>>> 6a1bf835ea3554afaa22b1acf46942cac87e08dd
	