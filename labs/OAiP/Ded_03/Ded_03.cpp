<<<<<<< HEAD
﻿//	#include <iostream>
//	#include <fstream>
//	#include <string>
//
//	using namespace std;
//
//	void main()
//	{
//		setlocale(LC_ALL, "rus");
//
//		string str;
//		int k,size;
//		cout << "Введите к:";
//		cin >> k;
//		cout << endl;
//		//Открытие файла для считаывания строк и файла для записи
//	ifstream read("read.txt");
//	ofstream write("write.txt");
//	//Просмотр всех строк пока не запишутся нужные и запись их в файл
//		for (int i =0; i < k+4; i++)
//		{	
//			getline(read, str);
//			if (i>=k-1 && i<k+3)
//			{
//				write << str << "\n";
//				
//			}
//		}
//		//Закрытие файлов
//		write.close();
//		read.close();
//
//		int count = 0;
////Открытие файла для считывания всех строк и поиска гласных
//		ifstream glas("write.txt");
//		while (getline(glas,str))
//		{
//			for (int i = 0; i < str.size() /*Цикл до конца строки*/; i++)
//			{
//				//Проверка на гласнык буквы и увеличение счётчика
//				if (str[i] == 'U' || str[i] == 'u' || str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'Y' || str[i] == 'y' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o') { count += 1; cout << str[i] << " ";}
//			
//			}
//			cout <<endl<< str << endl;
//		}
//		cout << "Гласных:" << count;
//		glas.close();
//
//	}
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	bool flag = true;
//	char str[10000];
//	string word,check;
//	//Ввод строки и запись её в файл
//	gets_s(str);
//	ofstream file("gg.txt");
//	file<<str;
//	file.close();
//
//	//Получение строки из файла
//	ifstream FILE("gg.txt");
//	int k = 0;
//	getline(FILE,word);
//	FILE.close();
//
//	
//ofstream file2("gg.txt");
//
//	for (int i = 0; i <size(word); i++)
//	{
//	
//		while (word[i] != ' ')
//		{
//			if (word[i]>= '0' and word[i] <= '9') flag = false;//Проверка на цифры
//			check+=word[i];
//			i +=1;
//		}
//		//
//		if (flag == true)
//		{
//			//Вывод в файл
//			file2 << check<<" ";
//		}
//		check ="";
//		flag=true;
//	}
//
//	file2.close();
//	
//}

//#include <iostream>
//	#include <fstream>
//	#include <string>
//
//	using namespace std;
//
//	void main()
//	{
//		setlocale(LC_ALL, "rus");
//
//		string str;
//		int K,size,N;
//		cout << "Введите N:";
//		cin >> N;
//		cout << "Введите K:";
//		cin >> K;
//		
//		cout << endl;
//		//Открытие файла для считаывания строк и файла для записи
//	ifstream read("read.txt");
//	ofstream write("write.txt");
//	//Просмотр всех строк пока не запишутся нужные и запись их в файл
//		for (int i=0; i <=K+1; i++)
//		{	
//		
//			if (i>=N && i<=K)
//			{
//				write << str << "\n";
//				
//			}
//			getline(read, str);
//		}
//		//Закрытие файлов
//		write.close();
//		read.close();
//
//		int count = 0;
////Открытие файла для считывания всех строк и поиска гласных
//		ifstream glas("write.txt");
//		while (getline(glas,str))
//		{
//			for (int i = 0; i < str.size() /*Цикл до конца строки*/; i++)
//			{
//				//Проверка на гласнык буквы и увеличение счётчика
//				if (str[i] != 'U' && str[i] != 'u' && str[i] != 'A' && str[i] != 'a' && str[i] != 'E' && str[i] != 'e' && str[i] != 'Y' && str[i] != 'y' && str[i] != 'I' && str[i] != 'i' && str[i] != 'O' && str[i] != 'o' && str[i]!=' ') { count += 1; cout << str[i] << " "; }
//			
//			}
//			cout <<endl<< str << endl;
//		}
//		cout <<endl<< "Согласных:" << count;
//		glas.close();
//
//
//	}

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	char str[10000];
//	int counter=0;
//	string word,check;
//	//Ввод строки и запись её в файл
//	gets_s(str);
//	ofstream file("gg.txt");
//	file<<str;
//	file.close();
//
//	//Получение строки из файла
//	ifstream FILE("gg.txt");
//	int k = 0;
//	getline(FILE,word);
//	FILE.close();
//
//	
//ofstream file2("gg.txt");
//
//	for (int i = 0; i <size(word); i++)
//	{
//	
//		while (word[i] != ' ')
//		{
//			check+=word[i];
//			i +=1;
//			counter += 1;
//
//		}
//		//
//		if (counter%2==0)
//		{
//			//Вывод в файл
//			file2 << check<<" ";
//		}
//		check ="";
//		counter = 0;
//	}
//
//	file2.close();
//	
//}


	//	#include <iostream>
	//#include <fstream>
	//#include <string>

	//using namespace std;

	//void main()
	//{
	//	setlocale(LC_ALL, "rus");

	//	string str;
	//	int counter;
	//	cout << endl;
	//	//Открытие файла для считаывания строк и файла для записи
	//ifstream read("read.txt");
	//ofstream write("write.txt");
	////Просмотр всех строк пока не запишутся нужные и запись их в файл
	//
	//		while(getline(read, str))
	//		{
	//						
	//			counter = 0;
	//			for (int j = 0; j<size(str); j++)
	//			{
	//				if (str[j] == ' ')counter += 1;
	//			}
	//			if (counter == 0)
	//			{
	//			write<< str << "\n";
	//			}
	//			if (size(str) == 5&&counter==0)cout << "Слово размером 5 символов:" << str;
	//			
	//			
	//		}
	//	
	//	//Закрытие файлов
	//	write.close();
	//	read.close();

	//
	//}
//
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	bool flag = false;
//	char str[10000];
//	int k;
//	string word,check;
//	//Ввод строки и запись её в файл
//	gets_s(str);
//	ofstream file("gg.txt");
//	file<<str;
//	file.close();
//
//	//Получение строки из файла
//	ifstream FILE("gg.txt");
//	getline(FILE,word);
//	FILE.close();
//
//
//	cout << "k:";
//	cin >> k;
//	k = k - 1;
//
//	if (word[k] == ' ')k = k -1;//Предыдущее слово если пробел
//ofstream file2("gg.txt");
//
//	for (int i =0; i <size(word); i++)
//	{
//	
//		while (word[i] != ' ')
//		{
//			if (i == k) { flag = true; cout << endl << word[i] << endl; }
//			check+=word[i];
//			i +=1;
//		}
//		//
//		if (flag == true)
//		{
//			//Вывод в файл
//			file2 << check;
//			exit(69);
//		}
//		check ="";
//		flag=false;
//	}
//
//	file2.close();
//	
//}

	//#include <iostream>
	//#include <fstream>
	//#include <string>

	//using namespace std;

	//void main()
	//{
	//	setlocale(LC_ALL, "rus");

	//	string str,minimum;
	//	int counter,min=20000000;

	//	cout << endl;
	//	//Открытие файла для считаывания строк и файла для записи
	//ifstream read("read.txt");
	//ofstream write("write.txt");
	////Просмотр всех строк пока не запишутся нужные и запись их в файл
	//
	//		while(getline(read, str))
	//		{
	//						
	//			counter = 0;
	//			for (int j = 0; j<size(str); j++)
	//			{
	//				if (str[j] == ' ')counter += 1;
	//			}
	//			if (counter == 0)
	//			{
	//				write<<str<<"\n";
	//				if (counter == 0 && size(str) < min &&size(str)>0) {
	//					min = size(str);
	//					minimum = str;
	//				}
	//			}
	//		}
	//	cout << "min length:" << minimum;
	//	//Закрытие файлов
	//	write.close();
	//	read.close();

	//
	//}

	

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	char str[10000];
	int min = 999999999, max = 0,counter=0;
	string word,check,longWord,shortWord;
	//Ввод строки и запись её в файл
	gets_s(str);
	ofstream file("gg.txt");
	file<<str<<"\n";
	gets_s(str);
	file << str;
	file.close();

	//Получение строки из файла
	ifstream FILE("gg.txt");
	int k = 0;
	getline(FILE,word);
	

//Проверка каждого слова первой строки и нахождение минимального
	for (int i = 0; i <size(word); i++)
	{
	
		while (word[i] != ' ')
		{
			check+=word[i];
			i +=1;
		}
		//
		if (size(check)<min)
		{
			min = size(check);
			shortWord = check;
		}
		check ="";
	}
	//То же самое со второй строкой но нахождение максимального
	getline(FILE, word);
	for (int i = 0; i < size(word); i++)
	{

		while (word[i] != ' ')
		{	
			check += word[i];
			i += 1;
		}
		//
		if (size(check)>max)
		{
			max = size(check);
			longWord = check;
		}
		check = "";
	}
	for (int i = 0; i < size(shortWord);i++)
	{
if (shortWord[i] == 'U' || shortWord[i] == 'u' || shortWord[i] == 'A' || shortWord[i] == 'a' || shortWord[i] == 'E' || shortWord[i] == 'e' || shortWord[i] == 'Y' || shortWord[i] == 'y' || shortWord[i] == 'I' || shortWord[i] == 'i' || shortWord[i] == 'O' || shortWord[i] == 'o') { counter += 1; cout << shortWord[i] << " ";}
	
	}
	cout << "Short:" << shortWord << endl<<"Гласных:"<<counter<<endl;
	counter = 0;
	for (int i = 0; i < size(longWord); i++)
	{
		if (longWord[i] == 'U' || longWord[i] == 'u' || longWord[i] == 'A' || longWord[i] == 'a' || longWord[i] == 'E' || longWord[i] == 'e' || longWord[i] == 'Y' || longWord[i] == 'y' || longWord[i] == 'I' || longWord[i] == 'i' || longWord[i] == 'O' || longWord[i] == 'o') { counter += 1; cout << longWord[i] << " "; }

	}
	cout << "Long:" << longWord << endl<<"Гласных:" << counter << endl;


	
	FILE.close();
=======
﻿//	#include <iostream>
//	#include <fstream>
//	#include <string>
//
//	using namespace std;
//
//	void main()
//	{
//		setlocale(LC_ALL, "rus");
//
//		string str;
//		int k,size;
//		cout << "Введите к:";
//		cin >> k;
//		cout << endl;
//		//Открытие файла для считаывания строк и файла для записи
//	ifstream read("read.txt");
//	ofstream write("write.txt");
//	//Просмотр всех строк пока не запишутся нужные и запись их в файл
//		for (int i =0; i < k+4; i++)
//		{	
//			getline(read, str);
//			if (i>=k-1 && i<k+3)
//			{
//				write << str << "\n";
//				
//			}
//		}
//		//Закрытие файлов
//		write.close();
//		read.close();
//
//		int count = 0;
////Открытие файла для считывания всех строк и поиска гласных
//		ifstream glas("write.txt");
//		while (getline(glas,str))
//		{
//			for (int i = 0; i < str.size() /*Цикл до конца строки*/; i++)
//			{
//				//Проверка на гласнык буквы и увеличение счётчика
//				if (str[i] == 'U' || str[i] == 'u' || str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'Y' || str[i] == 'y' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o') { count += 1; cout << str[i] << " ";}
//			
//			}
//			cout <<endl<< str << endl;
//		}
//		cout << "Гласных:" << count;
//		glas.close();
//
//	}
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	bool flag = true;
//	char str[10000];
//	string word,check;
//	//Ввод строки и запись её в файл
//	gets_s(str);
//	ofstream file("gg.txt");
//	file<<str;
//	file.close();
//
//	//Получение строки из файла
//	ifstream FILE("gg.txt");
//	int k = 0;
//	getline(FILE,word);
//	FILE.close();
//
//	
//ofstream file2("gg.txt");
//
//	for (int i = 0; i <size(word); i++)
//	{
//	
//		while (word[i] != ' ')
//		{
//			if (word[i]>= '0' and word[i] <= '9') flag = false;//Проверка на цифры
//			check+=word[i];
//			i +=1;
//		}
//		//
//		if (flag == true)
//		{
//			//Вывод в файл
//			file2 << check<<" ";
//		}
//		check ="";
//		flag=true;
//	}
//
//	file2.close();
//	
//}

//#include <iostream>
//	#include <fstream>
//	#include <string>
//
//	using namespace std;
//
//	void main()
//	{
//		setlocale(LC_ALL, "rus");
//
//		string str;
//		int K,size,N;
//		cout << "Введите N:";
//		cin >> N;
//		cout << "Введите K:";
//		cin >> K;
//		
//		cout << endl;
//		//Открытие файла для считаывания строк и файла для записи
//	ifstream read("read.txt");
//	ofstream write("write.txt");
//	//Просмотр всех строк пока не запишутся нужные и запись их в файл
//		for (int i=0; i <=K+1; i++)
//		{	
//		
//			if (i>=N && i<=K)
//			{
//				write << str << "\n";
//				
//			}
//			getline(read, str);
//		}
//		//Закрытие файлов
//		write.close();
//		read.close();
//
//		int count = 0;
////Открытие файла для считывания всех строк и поиска гласных
//		ifstream glas("write.txt");
//		while (getline(glas,str))
//		{
//			for (int i = 0; i < str.size() /*Цикл до конца строки*/; i++)
//			{
//				//Проверка на гласнык буквы и увеличение счётчика
//				if (str[i] != 'U' && str[i] != 'u' && str[i] != 'A' && str[i] != 'a' && str[i] != 'E' && str[i] != 'e' && str[i] != 'Y' && str[i] != 'y' && str[i] != 'I' && str[i] != 'i' && str[i] != 'O' && str[i] != 'o' && str[i]!=' ') { count += 1; cout << str[i] << " "; }
//			
//			}
//			cout <<endl<< str << endl;
//		}
//		cout <<endl<< "Согласных:" << count;
//		glas.close();
//
//
//	}

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	char str[10000];
//	int counter=0;
//	string word,check;
//	//Ввод строки и запись её в файл
//	gets_s(str);
//	ofstream file("gg.txt");
//	file<<str;
//	file.close();
//
//	//Получение строки из файла
//	ifstream FILE("gg.txt");
//	int k = 0;
//	getline(FILE,word);
//	FILE.close();
//
//	
//ofstream file2("gg.txt");
//
//	for (int i = 0; i <size(word); i++)
//	{
//	
//		while (word[i] != ' ')
//		{
//			check+=word[i];
//			i +=1;
//			counter += 1;
//
//		}
//		//
//		if (counter%2==0)
//		{
//			//Вывод в файл
//			file2 << check<<" ";
//		}
//		check ="";
//		counter = 0;
//	}
//
//	file2.close();
//	
//}


	//	#include <iostream>
	//#include <fstream>
	//#include <string>

	//using namespace std;

	//void main()
	//{
	//	setlocale(LC_ALL, "rus");

	//	string str;
	//	int counter;
	//	cout << endl;
	//	//Открытие файла для считаывания строк и файла для записи
	//ifstream read("read.txt");
	//ofstream write("write.txt");
	////Просмотр всех строк пока не запишутся нужные и запись их в файл
	//
	//		while(getline(read, str))
	//		{
	//						
	//			counter = 0;
	//			for (int j = 0; j<size(str); j++)
	//			{
	//				if (str[j] == ' ')counter += 1;
	//			}
	//			if (counter == 0)
	//			{
	//			write<< str << "\n";
	//			}
	//			if (size(str) == 5&&counter==0)cout << "Слово размером 5 символов:" << str;
	//			
	//			
	//		}
	//	
	//	//Закрытие файлов
	//	write.close();
	//	read.close();

	//
	//}
//
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	bool flag = false;
//	char str[10000];
//	int k;
//	string word,check;
//	//Ввод строки и запись её в файл
//	gets_s(str);
//	ofstream file("gg.txt");
//	file<<str;
//	file.close();
//
//	//Получение строки из файла
//	ifstream FILE("gg.txt");
//	getline(FILE,word);
//	FILE.close();
//
//
//	cout << "k:";
//	cin >> k;
//	k = k - 1;
//
//	if (word[k] == ' ')k = k -1;//Предыдущее слово если пробел
//ofstream file2("gg.txt");
//
//	for (int i =0; i <size(word); i++)
//	{
//	
//		while (word[i] != ' ')
//		{
//			if (i == k) { flag = true; cout << endl << word[i] << endl; }
//			check+=word[i];
//			i +=1;
//		}
//		//
//		if (flag == true)
//		{
//			//Вывод в файл
//			file2 << check;
//			exit(69);
//		}
//		check ="";
//		flag=false;
//	}
//
//	file2.close();
//	
//}

	//#include <iostream>
	//#include <fstream>
	//#include <string>

	//using namespace std;

	//void main()
	//{
	//	setlocale(LC_ALL, "rus");

	//	string str,minimum;
	//	int counter,min=20000000;

	//	cout << endl;
	//	//Открытие файла для считаывания строк и файла для записи
	//ifstream read("read.txt");
	//ofstream write("write.txt");
	////Просмотр всех строк пока не запишутся нужные и запись их в файл
	//
	//		while(getline(read, str))
	//		{
	//						
	//			counter = 0;
	//			for (int j = 0; j<size(str); j++)
	//			{
	//				if (str[j] == ' ')counter += 1;
	//			}
	//			if (counter == 0)
	//			{
	//				write<<str<<"\n";
	//				if (counter == 0 && size(str) < min &&size(str)>0) {
	//					min = size(str);
	//					minimum = str;
	//				}
	//			}
	//		}
	//	cout << "min length:" << minimum;
	//	//Закрытие файлов
	//	write.close();
	//	read.close();

	//
	//}

	

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	char str[10000];
	int min = 999999999, max = 0,counter=0;
	string word,check,longWord,shortWord;
	//Ввод строки и запись её в файл
	gets_s(str);
	ofstream file("gg.txt");
	file<<str<<"\n";
	gets_s(str);
	file << str;
	file.close();

	//Получение строки из файла
	ifstream FILE("gg.txt");
	int k = 0;
	getline(FILE,word);
	

//Проверка каждого слова первой строки и нахождение минимального
	for (int i = 0; i <size(word); i++)
	{
	
		while (word[i] != ' ')
		{
			check+=word[i];
			i +=1;
		}
		//
		if (size(check)<min)
		{
			min = size(check);
			shortWord = check;
		}
		check ="";
	}
	//То же самое со второй строкой но нахождение максимального
	getline(FILE, word);
	for (int i = 0; i < size(word); i++)
	{

		while (word[i] != ' ')
		{	
			check += word[i];
			i += 1;
		}
		//
		if (size(check)>max)
		{
			max = size(check);
			longWord = check;
		}
		check = "";
	}
	for (int i = 0; i < size(shortWord);i++)
	{
if (shortWord[i] == 'U' || shortWord[i] == 'u' || shortWord[i] == 'A' || shortWord[i] == 'a' || shortWord[i] == 'E' || shortWord[i] == 'e' || shortWord[i] == 'Y' || shortWord[i] == 'y' || shortWord[i] == 'I' || shortWord[i] == 'i' || shortWord[i] == 'O' || shortWord[i] == 'o') { counter += 1; cout << shortWord[i] << " ";}
	
	}
	cout << "Short:" << shortWord << endl<<"Гласных:"<<counter<<endl;
	counter = 0;
	for (int i = 0; i < size(longWord); i++)
	{
		if (longWord[i] == 'U' || longWord[i] == 'u' || longWord[i] == 'A' || longWord[i] == 'a' || longWord[i] == 'E' || longWord[i] == 'e' || longWord[i] == 'Y' || longWord[i] == 'y' || longWord[i] == 'I' || longWord[i] == 'i' || longWord[i] == 'O' || longWord[i] == 'o') { counter += 1; cout << longWord[i] << " "; }

	}
	cout << "Long:" << longWord << endl<<"Гласных:" << counter << endl;


	
	FILE.close();
>>>>>>> 6a1bf835ea3554afaa22b1acf46942cac87e08dd
}