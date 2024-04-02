//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//enum Subjects
//{
//	math=1, literature, PE, art, chemistry, physics, history//использвание перечисления
//}subject[100];
//struct schoolBuddy
//{
//	string initials;
//	string surname;
//	int  klassDig:8;//Ограничение в 8 байт для цифры класса
//	int  klassLet : 8;//Ограничение в 8 байт для буквы класса
//	int subjectGrade[100];
//	
//	int subjectsNum;
//}a[100];
//
//int counter = 0;
//
//void Enter(int count)
//{
//	int j=0;
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl << endl << "Enter data:" << endl << endl << endl;
//		//Последовательный ввод всех данных каждого ученика
//		cout << "Initials:";
//		getline(cin, a[i].initials);
//		getline(cin, a[i].initials);
//		j = 0;
//		while (a[i].initials[j] != ' ')
//		{
//			a[i].surname += a[i].initials[j];
//			j += 1;
//		}
//		cout << endl;
//
//		cout << "Class:";
//		int klass;
//		char klass2;
//		cin >> klass >> klass2;
//		a[i].klassDig = klass;
//		klass = klass2;
//		a[i].klassLet = klass;
//
//
//
//		
//		int choice, j;
//		float sum;
//		int NEsubject;
//		cout << endl << "Number of subjects:";
//		cin >> a[i].subjectsNum;
//		sum = 0;
//		for ( j = 0; j < a[i].subjectsNum; j++)
//		{
//
//			cout << endl << "Subject:" << endl << "1.Math" << endl << "2.Literature" << endl << "3.PE" << endl << "4.Art" << endl << "5.Chemistry" << endl << "6.Physics" << endl << "7.History" << endl;
//
//			cin >> NEsubject;
//			subject[counter] = static_cast <Subjects> (NEsubject);
//			cout <<endl<< "grade:";
//			cin >> a[i].subjectGrade[j];
//			sum += a[i].subjectGrade[j];
//			counter += 1;
//		}
//		cout << "Average grade:" << sum / j;
//	
//	}
//
//}
//void Info(int count)
//{
//	
//	counter = 0;
//	float sum = 0;
//	int j;
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl << endl << "------------------------INFO-----------------------" << endl;
//		cout << "Initials:" << a[i].initials;
//		cout << endl << "Class:" << a[i].klassDig << '"' <<(char) a[i].klassLet << '"';
//		cout << endl << "Grades:" << endl;
//		sum = 0;
//		for (j = 0; j <a[i].subjectsNum; j++)
//		{
//			if (subject[counter] == 1) { cout << "Math:";}
//			if (subject[counter] == 2) { cout << "Literature:"; }
//			if (subject[counter] == 3) { cout << "PE:"; }
//			if (subject[counter] == 4) { cout << "Art:"; }
//			if (subject[counter] == 5) { cout << "Chemistry:"; }
//			if (subject[counter] == 6) { cout << "Physics:"; }
//			if (subject[counter] == 7) { cout << "History:"; }
//			cout << a[i].subjectGrade[j]<<endl;
//			sum += a[i].subjectGrade[j];
//			counter += 1;
//		}
//		cout << "Average grade:" << sum / j;
//	}
//}
//
//void Search(int count)
//{
//	counter = 0;
//	int j;
//	int sum = 0;
////	cout << endl << "Enter Surname:";
////	string surName;
////	cin >> surName;
////	for (int i = 0; i < count; i++)
////	{
////		if (a[i].surname == surName)
////		{
////			cout << endl << endl << "------------------------INFO-----------------------" << endl;
////			cout << "Initials:" << a[i].initials;
////			cout << endl << "Class:" << a[i].klassDig << '"' << (char)a[i].klassLet << '"';
////			cout << endl << "Grades:" << endl;
////			sum = 0;
////			for (j = 0; j < a[i].subjectsNum; j++)
////			{
////				if (subject[counter] == 1) { cout << "Math:"; }
////				if (subject[counter] == 2) { cout << "Literature:"; }
////				if (subject[counter] == 3) { cout << "PE:"; }
////				if (subject[counter] == 4) { cout << "Art:"; }
////				if (subject[counter] == 5) { cout << "Chemistry:"; }
////				if (subject[counter] == 6) { cout << "Physics:"; }
////				if (subject[counter] == 7) { cout << "History:"; }
////				cout << a[i].subjectGrade[j] << endl;
////				sum += a[i].subjectGrade[j];
////				counter += 1;
////			}
////			cout << "Average grade:" << sum / j;
////		}
////	}
////}
////
////void Delete(int count)
////{
////	int del;
////			cout << endl << "Student number:";
////			cin >> del;
////			for (int i = del - 1; i < count - 1; i++)
////			{
////				
////				for (int j = 0; j < a[i].subjectsNum; j++)
////				{
////					a[i].subjectGrade[j] = a[i].subjectGrade[j + a[i].subjectsNum];
////				}
////				a[i] = a[i + 1];
////			}
////			cout << endl << "Deleted succesfully" << endl;
////		
////}
////	void main()
////	{
////		int count,choice;
////		cout << "Number of students:";
////		cin >> count;
////		Enter(count);
////		while (true)
////		{
////			cout << endl << endl << endl;
////			cout << "1.Info" << endl << "2.Search" << endl << "3.Delete" << endl;
////			cin >> choice;
////			switch (choice)
////			{
////			case 1:
////			{
////				Info(count);
////				break;
////			}
////			case 2:
////			{
////				Search(count);
////			}
////			case 3:
////			{
////				Delete(count);
////				count -= 1;
////			}
////			}
////
////
////		}
////	}
//
//	
//		
//	
//	
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//union client
//{
//	char name[50];
//	char ID[50];
//};
//
//struct pawnshop
//{
//	client name;
//	client ID;
//	char product[50];
//	char sum[50];
//	char date[50];
//};
//
//pawnshop a[1000];
//
//
//void Enter(int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl << endl << "Enter data:" << endl << endl << endl;
//		//Последовательный ввод всех данных каждой сделки
//		cout << "Client:";
//		if (i==0)gets_s(a[i].name.name, 50);
//		gets_s(a[i].name.name, 50);
//
//		cout << "ID:";
//		gets_s(a[i].ID.ID, 50);
//		cout << "Product:";
//		gets_s(a[i].product, 50);
//
//
//		cout << "Credit sum:";
//		gets_s(a[i].sum, 50);
//
//		cout << "Dates:";
//		gets_s(a[i].date, 50);
//	}
//
//}
//void Info(int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl << endl << "------------------------INFO-----------------------" << endl;
//		cout << "Client:"<<a[i].name.name<<endl;
//		cout << "ID:"<<a[i].ID.ID<<endl;
//		cout << "Product:"<<a[i].product<<endl;
//		cout << "Credit sum:"<<a[i].sum<<endl;
//		cout << "Dates:"<<a[i].date<<endl;
//	}
//}
//
//void Search(int count)
//{
//	cout << endl << "Enter product:";
//	string product;
//	cin >> product;
//	for (int i = 0; i < count; i++)
//	{
//		if (a[i].product ==product)
//		{
//			cout << endl << endl << "------------------------INFO-----------------------" << endl;
//			cout << "Client:" << a[i].name.name << endl;
//			cout << "ID:" << a[i].ID.ID << endl;
//			cout << "Product:" << a[i].product << endl;
//			cout << "Credit sum:" << a[i].sum << endl;
//			cout << "Dates:" << a[i].date << endl;
//		}
//	}
//}
//
//
//
//
//	void main()
//	{
//		int count,choice;
//		cout << "Number of deals:";
//		cin >> count;
//		Enter(count);
//		while (true)
//		{
//			cout << endl << endl << endl;
//			cout << "1.Info" << endl << "2.Search" << endl;
//			cin >> choice;
//			switch (choice)
//			{
//			case 1:
//			{
//				Info(count);
//				break;
//			}
//			case 2:
//			{
//				Search(count);
//			}
//			}
//
//
//		}
//	}
///////////////////////////////////////////////////////////////////////////////////
//Вариант 1
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//enum JoJob
//{
//	hammerMan=1,Secretary,Engineer//использвание перечисления
//}job[100];
//struct humanResources
//{
//	string initials;
//	string education;
//	string work;
//	string salary;
//	int  year: 12;//Ограничение в 8 байт для года начала работы
//	int stage;
//}a[100];
//
//int counter = 0;
//
//void Enter(int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl << endl << "Enter data:" << endl << endl << endl;
//		Последовательный ввод всех данных каждого работника
//		cout << "Initials:";
//		getline(cin, a[i].initials);
//		getline(cin, a[i].initials);
//		cout << endl;
//
//		cout << "Education:";
//		getline(cin, a[i].education);
//		cout << endl;
//
//		cout << "Work:";
//		getline(cin, a[i].work);
//		cout << endl;
//
//		cout << "Salary:";
//		getline(cin, a[i].salary);
//		cout << endl;
//		int year,Job;
//		cout << "Year:";
//		cin >> year;	
//		a[i].year = year;
//		a[i].stage = 2024 - year;
//
//		cout << "Enter job:" << endl << "1.HammerMan" << endl << "2.Secretary" << endl << "3.Engineer"<<endl;
//		cin >> Job;
//			job[i]=static_cast<JoJob>(Job);
//	}
//
//}
//void Info(int count)
//{
//
//	
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl << "--------------------INFO----------------"<<endl;
//		cout << "Initials:";
//		cout <<a[i].initials<< endl;
//
//		cout << "Education:";
//		cout << a[i].education<<endl;
//
//		cout << "Work:";
//		cout << a[i].work<<endl;
//
//		cout << "Salary:";
//		cout <<a[i].salary<< endl;
//
//		cout << "Year:";
//		cout << a[i].year << endl;
//		cout << "Work Years:";
//		cout << a[i].stage << endl;
//		cout << "Job:";
//		if (job[i] == 1)cout << " Hammerman" << endl;
//		if (job[i] == 2)cout << " Secretary" << endl;
//		if (job[i] == 3)cout << " Engineer" << endl;
//	}
//}
//
//void Search(int count)
//{
//	cout << endl << "Enter number of work years:";
//		int workYears;
//		cin >> workYears;
//		for (int i = 0; i < count; i++)
//		{
//			if (a[i].stage == workYears)
//			{
//				cout << endl << endl << "------------------------INFO-----------------------" << endl;
//				cout << "Initials:";
//				cout << a[i].initials << endl;
//
//				cout << "Education:";
//				cout << a[i].education << endl;
//
//				cout << "Work:";
//				cout << a[i].work << endl;
//
//				cout << "Salary:";
//				cout << a[i].salary << endl;
//
//				cout << "Year:";
//				cout << a[i].year << endl;
//				cout << "Work Years:";
//				cout << a[i].stage << endl;
//				cout << "Job:";
//				if (job[i] == 1)cout << " Hammerman" << endl;
//				if (job[i] == 2)cout << " Secretary" << endl;
//				if (job[i] == 3)cout << " Engineer" << endl;
//			}
//		}
//	}
//	
//	void Delete(int count)
//	{
//		int del;
//				cout << endl << "Worker number:";
//				cin >> del;
//				for (int i = del - 1; i < count - 1; i++)
//				{
//					a[i] = a[i + 1];
//				}
//				cout << endl << "Deleted succesfully" << endl;
//			
//	}
//		void main()
//		{
//			int count,choice;
//			cout << "Number of workers:";
//			cin >> count;
//			Enter(count);
//			while (true)
//			{
//				cout << endl << endl << endl;
//				cout << "1.Info" << endl << "2.Search" << endl << "3.Delete" << endl;
//				cin >> choice;
//				switch (choice)
//				{
//				case 1:
//				{
//					Info(count);
//					break;
//				}
//				case 2:
//				{
//					Search(count);
//					break;
//				}
//				case 3:
//				{
//					Delete(count);
//					count -= 1;
//				}
//				}
//	
//	
//			}
//		}
//
//
//

	
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//union Exam
//{
//	char exam[50];
//};
//
//struct lector
//{
//	Exam exam;
//	char initials[50];
//	char  date[50];
//	string surname;
//};
//
//lector a[1000];
//
//
//void Enter(int count)
//{
//
//	for (int i = 0; i < count; i++)
//	{
//		int j = 0;
//		cout << endl << endl << "Enter data:" << endl << endl << endl;
//		//Последовательный ввод всех данных каждого преподавателя
//		cout << "Initials:";
//		if (i==0)gets_s(a[i].initials, 50);
//		gets_s(a[i].initials,50);
//
//		cout << "Exam:";
//		gets_s(a[i].exam.exam, 50);
//		cout << "Date:";
//		gets_s(a[i].date, 50);
//		while (a[i].initials[j] != ' ')
//					{
//						a[i].surname += a[i].initials[j];
//						j += 1;
//					}
//	}
//
//}
//void Info(int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl << endl << "------------------------INFO-----------------------" << endl;
//		cout << "Initials:"<<a[i].initials<<endl;
//		cout << "Exam:"<<a[i].exam.exam<<endl;
//		cout << "Date:"<<a[i].date<<endl;
//	}
//}
//
//void Search(int count)
//{
//	cout << endl << "Enter Surname:";
//	string Surname;
//	cin >> Surname;
//
//	for (int i = 0; i < count; i++)
//	{
//		if (a[i].surname ==Surname)
//		{
//			cout << endl << endl << "------------------------INFO-----------------------" << endl;
//			cout << "Initials:" << a[i].initials << endl;
//			cout << "Exam:" << a[i].exam.exam << endl;
//			cout << "Date:" << a[i].date << endl;
//		}
//	}
//}
//
//
//
//
//	void main()
//	{
//		int count,choice;
//		cout << "Number of Exams:";
//		cin >> count;
//		Enter(count);
//		while (true)
//		{
//			cout << endl << endl << endl;
//			cout << "1.Info" << endl << "2.Search" << endl;
//			cin >> choice;
//			switch (choice)
//			{
//			case 1:
//			{
//				Info(count);
//				break;
//			}
//			case 2:
//			{
//				Search(count);
//			}
//			}
//
//
//		}
//	}
//

///////////////////////////////////
// Вариант 10
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//enum POlity
//{
//	Monarchy=1,Republic,Anarchy//использвание перечисления
//}polity[100];
//struct country
//{
//	string name;
//	string population;
//	int square:30;
//}a[100];
//
//int counter = 0;
//
//void Enter(int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl << endl << "Enter data:" << endl << endl << endl;
//		//Последовательный ввод всех данных каждого государства
//		cout << "Name of country:";
//		getline(cin, a[i].name);
//		getline(cin, a[i].name);
//		cout << endl;
//
//		cout << "Population:";
//		getline(cin, a[i].population);
//		cout << endl;
//
//		int square,Polity;
//		cout << "Square:";
//		cin >> square;	
//		a[i].square = square;
//
//		cout << "Enter polity:" << endl << "1.Monarchy" << endl << "2.Republic" << endl<<"3.Anarchy"<<endl;
//		cin >> Polity;
//		polity[i] = static_cast<POlity>(Polity);
//	}
//
//}
//void Info(int count)
//{
//
//	
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl << "--------------------INFO----------------"<<endl;
//		cout << "Country name:";
//		cout <<a[i].name<< endl;
//
//		cout << "Population:";
//		cout << a[i].population<<endl;
//
//		cout << "Square:";
//		cout << a[i].square<<endl;
//
//		cout << "Polity:";
//		if (polity[i] == 1)cout << " Monarchy" << endl;
//		if (polity[i] == 2)cout << " Republick" << endl;
//		if (polity[i] == 3)cout << " Anarchy" << endl;
//	}
//}
//
//void Search(int count)
//{
//	cout << endl << "Enter square:";
//		int square;
//		cin >> square;
//		for (int i = 0; i < count; i++)
//		{
//			if (a[i].square>square)
//			{
//				cout << endl << endl << "------------------------INFO-----------------------" << endl;
//				cout << "Country name:";
//				cout << a[i].name << endl;
//
//				cout << "Population:";
//				cout << a[i].population << endl;
//
//				cout << "Square:";
//				cout << a[i].square << endl;
//
//				cout << "Polity:";
//				if (polity[i] == 1)cout << " Monarchy" << endl;
//				if (polity[i] == 2)cout << " Republick" << endl;
//				if (polity[i] == 3)cout << " Anarchy" << endl;
//			}
//		}
//	}
//	
//	void Delete(int count)
//	{
//		int del;
//				cout << endl << "Country number:";
//				cin >> del;
//				for (int i = del - 1; i < count - 1; i++)
//				{
//					a[i] = a[i + 1];
//				}
//				cout << endl << "Deleted succesfully" << endl;
//			
//	}
//		void main()
//		{
//			int count,choice;
//			cout << "Number of countries:";
//			cin >> count;
//			Enter(count);
//			while (true)
//			{
//				cout << endl << endl << endl;
//				cout << "1.Info" << endl << "2.Search" << endl << "3.Delete" << endl;
//				cin >> choice;
//				switch (choice)
//				{
//				case 1:
//				{
//					Info(count);
//					break;
//				}
//				case 2:
//				{
//					Search(count);
//					break;
//				}
//				case 3:
//				{
//					Delete(count);
//					count -= 1;
//				}
//				}
//	
//	
//			}
//		}


//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//union Exam
//{
//	char sex;
//};
//
//struct citizens
//{
//	Exam sex;
//	string initials;
//	string date;
//	string adress;
//	string year;
//};
//
//citizens a[1000];
//
//
//void Enter(int count)
//{
//
//	for (int i = 0; i < count; i++)
//	{
//		int j = 0;
//		cout << endl << endl << "Enter data:" << endl << endl << endl;
//		//Последовательный ввод всех данных каждого преподавателя
//		cout << "Initials:";
//		getline(cin,a[i].initials);
//		getline(cin, a[i].initials);
//
//		cout << "Date of birth:";
//		getline(cin,a[i].date);
//		string year="";
//		year += a[i].date[size(a[i].date) - 5];
//		year = +a[i].date[size(a[i].date) - 4];
//		year += a[i].date[size(a[i].date) - 3];
//		year += a[i].date[size(a[i].date) - 2];
//		year+=a[i].date[size(a[i].date)-1];
//		a[i].year = year;
//		cout << "Adress:";
//		getline(cin, a[i].adress);
//		cout << "Sex:";
//		cin >> a[i].sex.sex;
//	}
//
//}
//void Info(int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << endl << endl << "------------------------INFO-----------------------" << endl;
//		cout << "Initials:"<<a[i].initials<<endl;
//		cout << "Date of birth:"<<a[i].date<<endl;
//		cout << "Adress:"<<a[i].adress<<endl;
//		cout << "Sex:";
//		if (a[i].sex.sex == 'f') cout << "female" << endl;
//		else cout << "male" << endl;
//	}
//}
//
//void Search(int count)
//{
//	cout << endl << "Enter year:";
//	string year;
//	cin >> year;
//
//	for (int i = 0; i < count; i++)
//	{
//		if (a[i].year ==year)
//		{
//			cout << endl << endl << "------------------------INFO-----------------------" << endl;
//			cout << "Initials:" << a[i].initials << endl;
//			cout << "Date of birth:" << a[i].date << endl;
//			cout << "Adress:" << a[i].adress << endl;
//			cout << "Sex:";
//			if (a[i].sex.sex == 'f') cout << "female" << endl;
//			else cout << "male" << endl;
//		}
//	}
//}
//
//
//
//
//	void main()
//	{
//		int count,choice;
//		cout << "Number of citizens:";
//		cin >> count;
//		Enter(count);
//		while (true)
//		{
//			cout << endl << endl << endl;
//			cout << "1.Info" << endl << "2.Search" << endl;
//			cin >> choice;
//			switch (choice)
//			{
//			case 1:
//			{
//				Info(count);
//				break;
//			}
//			case 2:
//			{
//				Search(count);
//			}
//			}
//
//
//		}
//	}
/////////Вариант 7
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

union Percentage
{
	int percent;
};

struct storage
{
	Percentage percent;
	string name;
	string price;
	string amount;
};

storage a[1000];


void Enter(int count)
{

	for (int i = 0; i < count; i++)
	{
		int j = 0;
		cout << endl << endl << "Enter data:" << endl << endl << endl;
		//Последовательный ввод всех данных каждого товара
		cout << "Name:";
		getline(cin,a[i].name);
		getline(cin, a[i].name);

		cout << "Price:";
		getline(cin,a[i].price);
		
		cout << "Amount:";
		getline(cin, a[i].amount);

		cout << "Trade tax:";
		cin >> a[i].percent.percent;
	}

}
void Info(int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << endl << endl << "------------------------INFO-----------------------" << endl;
		cout << "Name:" << a[i].name << endl;
		cout << "Price:" << a[i].price << endl;
		cout << "Amount:" << a[i].amount<< endl;
		cout << "Trade tax:" << a[i].percent.percent<<"%"<< endl;
	}
}

void Search(int count)
{
	cout << endl << "Enter name:";
	string name;
	cin >> name;

	for (int i = 0; i < count; i++)
	{
		if (a[i].name ==name)
		{
			cout << endl << endl << "------------------------INFO-----------------------" << endl;
			cout << "Name:" << a[i].name << endl;
			cout << "Price:" << a[i].price << endl;
			cout << "Amount:" << a[i].amount << endl;
			cout << "Trade tax:" << a[i].percent.percent << "%" << endl;
		}
	}
}




	void main()
	{
		int count,choice;
		cout << "Number of items:";
		cin >> count;
		Enter(count);
		while (true)
		{
			cout << endl << endl << endl;
			cout << "1.Info" << endl << "2.Search" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				Info(count);
				break;
			}
			case 2:
			{
				Search(count);
			}
			}


		}
	}

