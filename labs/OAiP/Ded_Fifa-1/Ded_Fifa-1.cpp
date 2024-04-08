<<<<<<< HEAD
﻿//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <fstream>
//using namespace std;
//
//struct Bank//Задание структуры
//{
//	string initials;
//	string AccountType;
//	int AccountNumber;
//	string Money;
//	string DateOfChange;
//};
//
//void main()
//{
//	int count;
//	ofstream file("gg.txt");
//	Bank a[100];//Задание массива,привязанного к структуре
//	cout << "Number of clients:";
//	cin >> count;
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl<<endl<<"Enter data:"<<endl<<endl<<endl;
//		//Последовательный ввод всех данных каждого клиента
//		cout << "Initials:";
//		getline(cin, a[i].initials);
//		getline(cin,a[i].initials);
//		file << a[i].initials << '\n';
//		cout << endl;
//
//		cout << "Account Type:";
//		cin >> a[i].AccountType;
//		file << a[i].AccountType << '\n';
//		cout<< endl;
//
//		cout << "Account Number:";
//		cin >> a[i].AccountNumber;
//		file << a[i].AccountNumber << '\n';
//		cout << endl;
//
//
//		cout << "Money:";
//getline(cin,a[i].Money);
//getline(cin, a[i].Money);
//		file << a[i].Money << '\n';
//		cout<< endl;
//
//		
//		cout << "Date of last change:";
//		cin >> a[i].DateOfChange;
//		file << a[i].DateOfChange << '\n';
//		cout << endl;
//	}
//	int choice;
//	cout << endl << "Choose your action:" << endl;
//	while (true)
//	{
//		cout << "1.Delete" << endl << "2.Find" << endl << "3.See all info" << endl << "4.exit";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//		{
//			int del;
//			cout << endl << "client number:";
//			cin >> del;
//			for (int i = del - 1; i < count - 1; i++)
//			{
//				a[i] = a[i + 1];
//			}
//			cout << endl << "Deleted succesfully" << endl;
//			count -= 1;
//			break;
//		}
//		case 2:
//		{
//			int target;
//			cout << endl << "Account number:";//Поиск информации по номеру счёта
//			cin >> target;
//			for (int i = 0; i < count; i++)
//			{
//				if (a[i].AccountNumber == target)
//				{
//					cout << endl << "Client info:" << endl;
//					cout << "Initials:" << a[i].initials << endl;
//					cout << "Account Type:" << a[i].AccountType << endl;
//					cout << "Money:" << a[i].Money << endl;
//					cout << "Date of last change:" << a[i].DateOfChange << endl;
//				}
//			}
//			break;
//		}
//		case 3:
//		{
//			for (int i = 0; i < count; i++)
//			{
//				cout <<i+1<< "." << endl;
//				cout << endl << "Client info:" << endl;
//				cout << "Initials:" << a[i].initials << endl;
//				cout << "Account Type:" << a[i].AccountType << endl;
//				cout << "Account Number:" << a[i].AccountNumber << endl;
//				cout << "Money:" << a[i].Money << endl;
//				cout << "Date of last change:" << a[i].DateOfChange << endl<<endl;
//			}
//			break;
//		}
//		case 4:
//		{
//			exit(69);		}
//		}
//	}
//		file.close();
//}


//////////////////////////////////////////////////////////////////////////////////////////////
//Доп 1

//#include <iostream>
//#include <cstdlib>
//#include <string>
//
//using namespace std;
////Задание структуры
//struct Student
//{
//	string initials;
//	int ExNum;
//	int ExGrades[1000];
//};
//
//void gradeCheck(int num,Student *a)
//{
//float coef,sumCoef=0;
//
//	for (int i = 0; i < num; i++)
//	{
//		coef = 0;
//		for (int j = 0; j < a[i].ExNum; j++)
//		{
//			if (a[i].ExGrades[j] < 4)
//			{
//				coef += 1;
//				sumCoef += 1;
//			}
//		}
//		coef =( coef / a[i].ExNum)*100;
//		cout << endl << endl << endl << endl << "                             INFO:                               " << endl;
//		cout << "Initials:"<< a[i].initials<<endl;
//		cout << "Sucess coeficent:" <<100-coef<<"%" << endl;
//	}
//	coef = 0;
//	for (int i = 0; i < num; i++)
//	{
//		coef += a[i].ExNum;
//	}
//	sumCoef = (sumCoef/coef) * 100;
//	cout << "Average groupe sucess coeficent:" << 100-sumCoef << "%" << endl;
//}
//
//void main()
//{
//	int studentsNum;
//	string str;
//	Student a[sizeof(int)];
//	cout << "Students:";
//	cin >> studentsNum;
//
//	for (int i = 0; i < studentsNum; i++)
//	{
//		cout << endl << endl << endl << endl << "                             INFO:                               "<<endl;
//		cout << "Initials:";
//		getline(cin, a[i].initials);
//		getline(cin,a[i].initials);
//		cout << "Number of Exams:";
//		cin >> a[i].ExNum;
//		cout <<"Grades:";
//		for (int j = 0; j < a[i].ExNum; j++)
//		{
//			cin >> a[i].ExGrades[j];
//		}
//	}
//	cout << "-------------------------------------------------------------------------------------------------------------------------";
// gradeCheck(studentsNum, a);
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Доп 2

	//#include <iostream>
	//#include <cstdlib>
	//#include <string>
	//using namespace std;
	////Задание структуры
	//struct TRAIN
	//{
	//	float time;
	//	string country;
	//	int train;
	//};

	//void main()
	//{
	//	string gg;
	//	TRAIN a[100];
	//	//Ввод данных
	//	for (int i = 0; i < 8; i++)
	//	{	
	//		cout << "   INFO " << i + 1 << endl;
	//		cout << "Train number:";
	//		cin >> a[i].train;
	//		cout << "Final point:";
	//		getline(cin, a[i].country);
	//		getline(cin, a[i].country);
	//	
	//		cout << "Time:";
	//		cin >> a[i].time;
	//		//Проверка корректности введёного времени
	//		if (a[i].time < 0 || a[i].time>24||a[i].time-(int)a[i].time>0.60)
	//		{
	//			cout << endl << "ErroR";
	//			exit(1941 - 1945);
	//		}
	//		cout << endl << endl;
	//	}
	//	float g;
	//	int kk;
	//	//Сортировка в алфавитном порядке
	//	for (int i = 0; i < 8; i++)
	//	{
	//		for (int j = i; j < 8; j++)
	//		{
	//			if (a[i].country > a[j].country)
	//			{
	//				gg = a[i].country;
	//				a[i].country = a[j].country;
	//				a[j].country = gg;

	//				g = a[i].time;
	//				a[i].time = a[j].time;
	//				a[j].time = g;

	//				kk = a[i].train;
	//				a[i].train = a[j].train;
	//				a[j].train = kk;
	//			}
	//		}
	//	}

	//	int choice;
	//	cout << "Choose:" << endl << "1.Info"<<endl<<"2.Trains nearby"<<endl;
	//	cin >> choice;
	//	switch (choice)
	//	{
	//		//Вывод данных
	//		case 1:
	//		{
	//			cout << "---------------------------------------------------------------------------------------------------------";
	//			for (int i = 0; i < 8; i++)
	//			{
	//				cout << endl<<"   INFO" << i + 1 << endl;
	//				cout << "Final point:";
	//				cout << a[i].country<<endl;
	//				cout << "Train number:";
	//				cout<< a[i].train<<endl;
	//				cout << "Time:";
	//				cout<<a[i].time<<endl<<endl;
	//			}
	//			break;
	//		}
	//		case 2:
	//		{
	//			float TimeRightNow;
	//			cout << endl << endl << endl;
	//			cout << "Time now:";
	//			cin >> TimeRightNow;
	//			//Сортировка по времени
	//			for (int i = 0; i < 8; i++)
	//			{
	//				for (int j = i; j < 8; j++)
	//				{
	//					if (a[i].time > a[j].time)
	//					{
	//						gg = a[i].country;
	//						a[i].country = a[j].country;
	//						a[j].country = gg;

	//						g = a[i].time;
	//						a[i].time = a[j].time;
	//						a[j].time = g;

	//						kk = a[i].train;
	//						a[i].train = a[j].train;
	//						a[j].train = kk;


	//					}
	//				}
	//			}
	//				int count=0;
	//				for (int i = 0; i < 8; i++)
	//				{
	//					if (a[i].time > TimeRightNow)
	//					{
	//						count += 1;
	//						cout << endl << "   INFO" << i + 1 << endl;
	//						cout << "Final point:";
	//						cout << a[i].country << endl;
	//						cout << "Train number:";
	//						cout << a[i].train << endl;
	//						cout << "Time:";
	//						cout << a[i].time << endl << endl;
	//					}
	//				}
	//				if (count == 0)
	//				{
	//					cout << endl << "No trains aveilable";
	//				}

	//		
	//		

	//		}
	//	}



	//}
//Доп 3
	//#include <iostream>
	//#include<string>
	//#include <cstdlib>
	//using namespace std;
	////Задание структуры
	//struct Sunatoriy
	//{
	//	string name,location,therapy;
	//	int amount;
	//};

	//void main()
	//{
	//	Sunatoriy a[100];
	//	int n;
	//	cout << "Number of sunatories:";
	//	cin >> n;//7
	//	//Ввод информации
	//	for (int i = 0; i < n; i++)
	//	{
	//				cout << "   INFO " << i + 1 << endl;
	//				cout << "Name:";
	//				getline(cin, a[i].name);
	//				getline(cin, a[i].name);
	//				cout << "Location:";
	//				getline(cin, a[i].location);
	//			
	//				cout << "Therapy profile:";
	//				getline(cin, a[i].therapy);
	//				cout << "Tickets amount:";
	//				cin >> a[i].amount;
	//				cout << endl << endl;
	//			}

	//	int choice;
	//	cout << "Choose" << endl << "1.Show info" << endl << "2.Search" << endl;
	//	cin >> choice;
	//	switch (choice)
	//	{
	//	case 1:
	//	{
	//		string gg;
	//		int g;
	//		for (int i = 0; i < n; i++)
	//		{
	//			//сортировка по имени
	//			for (int j = 0; j < n; j++)
	//			{
	//				if (a[i].name < a[j].name)
	//				{
	//					gg = a[i].name;
	//					a[i].name = a[j].name;
	//					a[j].name = gg;

	//					gg = a[i].therapy;
	//					a[i].therapy = a[j].therapy;
	//					a[j].therapy = gg;

	//					gg = a[i].location;
	//					a[i].location = a[j].location;
	//					a[j].location = gg;

	//					g = a[i].amount;
	//					a[i].amount = a[j].amount;
	//					a[j].amount = g;
	//				}
	//			}
	//		}
	//		//Вывод информации
	//		for (int i = 0; i < n; i++)
	//		{
	//			cout << "---------------------------------------------------------------------------------------------------------";
	//			for (int i = 0; i < n; i++)
	//			{
	//				cout << endl << "   INFO " << i + 1 << endl;
	//				cout << "Name:";
	//				cout << a[i].name << endl;
	//				cout << "Location:";
	//				cout << a[i].location << endl;
	//				cout << "Therapy profile:";
	//				cout << a[i].therapy << endl;
	//				cout << "Tickets amount:";
	//				cout << a[i].amount << endl;
	//				cout << endl << endl;
	//			}
	//		}
	//		break;
	//	}
	//	case 2:
	//	{
	//		string profile;
	//		cout << endl << "Therapy profile:";
	//		//Ввод интересующего профиля
	//		getline(cin, profile);
	//		getline(cin, profile);
	//		for (int i = 0; i < n; i++)
	//		{
	//			if (a[i].therapy == profile)
	//			{
	//				cout << "   INFO " << i + 1 << endl;
	//				cout << "Name:";
	//				cout << a[i].name<<endl;
	//				cout << "Location:";
	//				cout<<a[i].location<<endl;
	//				cout << "Therapy profile:";
	//				cout<<a[i].therapy<<endl;
	//				cout << "Tickets amount:";
	//				cout << a[i].amount<<endl;
	//				cout << endl << endl;
	//			}
	//		}
	//		break;
	//	}
	//	}
	//}


=======
﻿//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <fstream>
//using namespace std;
//
//struct Bank//Задание структуры
//{
//	string initials;
//	string AccountType;
//	int AccountNumber;
//	string Money;
//	string DateOfChange;
//};
//
//void main()
//{
//	int count;
//	ofstream file("gg.txt");
//	Bank a[100];//Задание массива,привязанного к структуре
//	cout << "Number of clients:";
//	cin >> count;
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl<<endl<<"Enter data:"<<endl<<endl<<endl;
//		//Последовательный ввод всех данных каждого клиента
//		cout << "Initials:";
//		getline(cin, a[i].initials);
//		getline(cin,a[i].initials);
//		file << a[i].initials << '\n';
//		cout << endl;
//
//		cout << "Account Type:";
//		cin >> a[i].AccountType;
//		file << a[i].AccountType << '\n';
//		cout<< endl;
//
//		cout << "Account Number:";
//		cin >> a[i].AccountNumber;
//		file << a[i].AccountNumber << '\n';
//		cout << endl;
//
//
//		cout << "Money:";
//getline(cin,a[i].Money);
//getline(cin, a[i].Money);
//		file << a[i].Money << '\n';
//		cout<< endl;
//
//		
//		cout << "Date of last change:";
//		cin >> a[i].DateOfChange;
//		file << a[i].DateOfChange << '\n';
//		cout << endl;
//	}
//	int choice;
//	cout << endl << "Choose your action:" << endl;
//	while (true)
//	{
//		cout << "1.Delete" << endl << "2.Find" << endl << "3.See all info" << endl << "4.exit";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//		{
//			int del;
//			cout << endl << "client number:";
//			cin >> del;
//			for (int i = del - 1; i < count - 1; i++)
//			{
//				a[i] = a[i + 1];
//			}
//			cout << endl << "Deleted succesfully" << endl;
//			count -= 1;
//			break;
//		}
//		case 2:
//		{
//			int target;
//			cout << endl << "Account number:";//Поиск информации по номеру счёта
//			cin >> target;
//			for (int i = 0; i < count; i++)
//			{
//				if (a[i].AccountNumber == target)
//				{
//					cout << endl << "Client info:" << endl;
//					cout << "Initials:" << a[i].initials << endl;
//					cout << "Account Type:" << a[i].AccountType << endl;
//					cout << "Money:" << a[i].Money << endl;
//					cout << "Date of last change:" << a[i].DateOfChange << endl;
//				}
//			}
//			break;
//		}
//		case 3:
//		{
//			for (int i = 0; i < count; i++)
//			{
//				cout <<i+1<< "." << endl;
//				cout << endl << "Client info:" << endl;
//				cout << "Initials:" << a[i].initials << endl;
//				cout << "Account Type:" << a[i].AccountType << endl;
//				cout << "Account Number:" << a[i].AccountNumber << endl;
//				cout << "Money:" << a[i].Money << endl;
//				cout << "Date of last change:" << a[i].DateOfChange << endl<<endl;
//			}
//			break;
//		}
//		case 4:
//		{
//			exit(69);		}
//		}
//	}
//		file.close();
//}


//////////////////////////////////////////////////////////////////////////////////////////////
//Доп 1

//#include <iostream>
//#include <cstdlib>
//#include <string>
//
//using namespace std;
////Задание структуры
//struct Student
//{
//	string initials;
//	int ExNum;
//	int ExGrades[1000];
//};
//
//void gradeCheck(int num,Student *a)
//{
//float coef,sumCoef=0;
//
//	for (int i = 0; i < num; i++)
//	{
//		coef = 0;
//		for (int j = 0; j < a[i].ExNum; j++)
//		{
//			if (a[i].ExGrades[j] < 4)
//			{
//				coef += 1;
//				sumCoef += 1;
//			}
//		}
//		coef =( coef / a[i].ExNum)*100;
//		cout << endl << endl << endl << endl << "                             INFO:                               " << endl;
//		cout << "Initials:"<< a[i].initials<<endl;
//		cout << "Sucess coeficent:" <<100-coef<<"%" << endl;
//	}
//	coef = 0;
//	for (int i = 0; i < num; i++)
//	{
//		coef += a[i].ExNum;
//	}
//	sumCoef = (sumCoef/coef) * 100;
//	cout << "Average groupe sucess coeficent:" << 100-sumCoef << "%" << endl;
//}
//
//void main()
//{
//	int studentsNum;
//	string str;
//	Student a[sizeof(int)];
//	cout << "Students:";
//	cin >> studentsNum;
//
//	for (int i = 0; i < studentsNum; i++)
//	{
//		cout << endl << endl << endl << endl << "                             INFO:                               "<<endl;
//		cout << "Initials:";
//		getline(cin, a[i].initials);
//		getline(cin,a[i].initials);
//		cout << "Number of Exams:";
//		cin >> a[i].ExNum;
//		cout <<"Grades:";
//		for (int j = 0; j < a[i].ExNum; j++)
//		{
//			cin >> a[i].ExGrades[j];
//		}
//	}
//	cout << "-------------------------------------------------------------------------------------------------------------------------";
// gradeCheck(studentsNum, a);
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Доп 2

	//#include <iostream>
	//#include <cstdlib>
	//#include <string>
	//using namespace std;
	////Задание структуры
	//struct TRAIN
	//{
	//	float time;
	//	string country;
	//	int train;
	//};

	//void main()
	//{
	//	string gg;
	//	TRAIN a[100];
	//	//Ввод данных
	//	for (int i = 0; i < 8; i++)
	//	{	
	//		cout << "   INFO " << i + 1 << endl;
	//		cout << "Train number:";
	//		cin >> a[i].train;
	//		cout << "Final point:";
	//		getline(cin, a[i].country);
	//		getline(cin, a[i].country);
	//	
	//		cout << "Time:";
	//		cin >> a[i].time;
	//		//Проверка корректности введёного времени
	//		if (a[i].time < 0 || a[i].time>24||a[i].time-(int)a[i].time>0.60)
	//		{
	//			cout << endl << "ErroR";
	//			exit(1941 - 1945);
	//		}
	//		cout << endl << endl;
	//	}
	//	float g;
	//	int kk;
	//	//Сортировка в алфавитном порядке
	//	for (int i = 0; i < 8; i++)
	//	{
	//		for (int j = i; j < 8; j++)
	//		{
	//			if (a[i].country > a[j].country)
	//			{
	//				gg = a[i].country;
	//				a[i].country = a[j].country;
	//				a[j].country = gg;

	//				g = a[i].time;
	//				a[i].time = a[j].time;
	//				a[j].time = g;

	//				kk = a[i].train;
	//				a[i].train = a[j].train;
	//				a[j].train = kk;
	//			}
	//		}
	//	}

	//	int choice;
	//	cout << "Choose:" << endl << "1.Info"<<endl<<"2.Trains nearby"<<endl;
	//	cin >> choice;
	//	switch (choice)
	//	{
	//		//Вывод данных
	//		case 1:
	//		{
	//			cout << "---------------------------------------------------------------------------------------------------------";
	//			for (int i = 0; i < 8; i++)
	//			{
	//				cout << endl<<"   INFO" << i + 1 << endl;
	//				cout << "Final point:";
	//				cout << a[i].country<<endl;
	//				cout << "Train number:";
	//				cout<< a[i].train<<endl;
	//				cout << "Time:";
	//				cout<<a[i].time<<endl<<endl;
	//			}
	//			break;
	//		}
	//		case 2:
	//		{
	//			float TimeRightNow;
	//			cout << endl << endl << endl;
	//			cout << "Time now:";
	//			cin >> TimeRightNow;
	//			//Сортировка по времени
	//			for (int i = 0; i < 8; i++)
	//			{
	//				for (int j = i; j < 8; j++)
	//				{
	//					if (a[i].time > a[j].time)
	//					{
	//						gg = a[i].country;
	//						a[i].country = a[j].country;
	//						a[j].country = gg;

	//						g = a[i].time;
	//						a[i].time = a[j].time;
	//						a[j].time = g;

	//						kk = a[i].train;
	//						a[i].train = a[j].train;
	//						a[j].train = kk;


	//					}
	//				}
	//			}
	//				int count=0;
	//				for (int i = 0; i < 8; i++)
	//				{
	//					if (a[i].time > TimeRightNow)
	//					{
	//						count += 1;
	//						cout << endl << "   INFO" << i + 1 << endl;
	//						cout << "Final point:";
	//						cout << a[i].country << endl;
	//						cout << "Train number:";
	//						cout << a[i].train << endl;
	//						cout << "Time:";
	//						cout << a[i].time << endl << endl;
	//					}
	//				}
	//				if (count == 0)
	//				{
	//					cout << endl << "No trains aveilable";
	//				}

	//		
	//		

	//		}
	//	}



	//}
//Доп 3
	//#include <iostream>
	//#include<string>
	//#include <cstdlib>
	//using namespace std;
	////Задание структуры
	//struct Sunatoriy
	//{
	//	string name,location,therapy;
	//	int amount;
	//};

	//void main()
	//{
	//	Sunatoriy a[100];
	//	int n;
	//	cout << "Number of sunatories:";
	//	cin >> n;//7
	//	//Ввод информации
	//	for (int i = 0; i < n; i++)
	//	{
	//				cout << "   INFO " << i + 1 << endl;
	//				cout << "Name:";
	//				getline(cin, a[i].name);
	//				getline(cin, a[i].name);
	//				cout << "Location:";
	//				getline(cin, a[i].location);
	//			
	//				cout << "Therapy profile:";
	//				getline(cin, a[i].therapy);
	//				cout << "Tickets amount:";
	//				cin >> a[i].amount;
	//				cout << endl << endl;
	//			}

	//	int choice;
	//	cout << "Choose" << endl << "1.Show info" << endl << "2.Search" << endl;
	//	cin >> choice;
	//	switch (choice)
	//	{
	//	case 1:
	//	{
	//		string gg;
	//		int g;
	//		for (int i = 0; i < n; i++)
	//		{
	//			//сортировка по имени
	//			for (int j = 0; j < n; j++)
	//			{
	//				if (a[i].name < a[j].name)
	//				{
	//					gg = a[i].name;
	//					a[i].name = a[j].name;
	//					a[j].name = gg;

	//					gg = a[i].therapy;
	//					a[i].therapy = a[j].therapy;
	//					a[j].therapy = gg;

	//					gg = a[i].location;
	//					a[i].location = a[j].location;
	//					a[j].location = gg;

	//					g = a[i].amount;
	//					a[i].amount = a[j].amount;
	//					a[j].amount = g;
	//				}
	//			}
	//		}
	//		//Вывод информации
	//		for (int i = 0; i < n; i++)
	//		{
	//			cout << "---------------------------------------------------------------------------------------------------------";
	//			for (int i = 0; i < n; i++)
	//			{
	//				cout << endl << "   INFO " << i + 1 << endl;
	//				cout << "Name:";
	//				cout << a[i].name << endl;
	//				cout << "Location:";
	//				cout << a[i].location << endl;
	//				cout << "Therapy profile:";
	//				cout << a[i].therapy << endl;
	//				cout << "Tickets amount:";
	//				cout << a[i].amount << endl;
	//				cout << endl << endl;
	//			}
	//		}
	//		break;
	//	}
	//	case 2:
	//	{
	//		string profile;
	//		cout << endl << "Therapy profile:";
	//		//Ввод интересующего профиля
	//		getline(cin, profile);
	//		getline(cin, profile);
	//		for (int i = 0; i < n; i++)
	//		{
	//			if (a[i].therapy == profile)
	//			{
	//				cout << "   INFO " << i + 1 << endl;
	//				cout << "Name:";
	//				cout << a[i].name<<endl;
	//				cout << "Location:";
	//				cout<<a[i].location<<endl;
	//				cout << "Therapy profile:";
	//				cout<<a[i].therapy<<endl;
	//				cout << "Tickets amount:";
	//				cout << a[i].amount<<endl;
	//				cout << endl << endl;
	//			}
	//		}
	//		break;
	//	}
	//	}
	//}


>>>>>>> 6a1bf835ea3554afaa22b1acf46942cac87e08dd
