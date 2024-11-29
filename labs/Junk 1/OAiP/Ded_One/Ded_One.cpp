//#include <iostream>
//using namespace std;
//
//void FirstFunction_v3(float e)//Функция для нахождения корня первого уравнения
//{
//	float a = 5, b = 9, x;
//	while (abs(a - b) > 2 * e)
//	{
//		x = (a + b) / 2;
//		if (((cos(x) + x - 7) * (cos(a) + a - 7)) <= 0)
//		{
//			b = x;
//		}
//		else { a = x; }
//	}
//	cout << x;
//}
//
//
//void SecondFunction_v3(float e)//Функция для нахождения корня второго уравнения
//{
//	float a = 0, b = 1, x;
//	while (abs(a - b) > 2 * e)
//	{
//		x = (a + b) / 2;
//		if (((exp(x) - 1 / x) * (exp(a) - 1 / a)) <= 0)
//		{
//			b = x;
//		}
//		else { a = x; }
//	}
//	cout << x;
//}
//
//void Error(float)//Cообщение об ошибке
//{
//	cout << endl << "ErrOr";
//	exit(69);
//}
//
//
//
//void main()
//{
//	setlocale(LC_ALL, "rus");
//	void (*pointer)(float);  // определение указателя на функцию
//	float e = 0.001;
//	cout << "V.3:" << endl << "1.cos(x) + x – 7" << endl << "2.e^x – 1 / x" << endl;
//	int choice;
//	pointer = Error;
//	cin >> choice;
//	//Выбор функции
//	if (choice == 1) { pointer = FirstFunction_v3; }
//	if (choice == 2) { pointer = SecondFunction_v3; }
//	pointer(e);//Использование указателя на функцию
//}

//////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdarg>
#include <cmath>
using namespace std;

void Error()//Cообщение об ошибке
{
	cout << "ErrOr";
	exit(69);
}

//Функция для варианта 3
void fmax(int n, ...)//Первым параметром функции выбран int
{
	va_list nums; // Объявляем объект типа va_list для работы с переменными аргументами
	int max = 0, a;
	va_start(nums, n);// Получаем текущий(первый) аргумент из списка
	for (int i = 0; i < n; i++)//Сравенение с масимальным
	{
		a = va_arg(nums, int);//Получаем текущий аргумент из списка
		if (a > max) { max = a; }
	}
	cout << "Максимальное число:" << max << endl;
	va_end(nums); // Завершаем работу с объектом va_list
}

//Функция для варианта 5
void kvadr(int n, ...)
{
	va_list nums;
	int counter = 0, a;
	va_start(nums, n);
	for (int i = 0; i < n; i++)
	{
		a = va_arg(nums, int);
		int square = sqrt(a);
		//проверка, является ли число точным квадратом//
		if (square * square == a)
		{
			counter++;
		}
	}
	cout << "Количество:" << counter << endl;
	va_end(nums);
}

//Функция для варианта 8
void prost(int n, ...)
{
	va_list nums;
	int counter = 0, a, b, check;
	va_start(nums, n);
	//Ввод границ интервала
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	//Проверка числа
	for (int i = a; i <= b; i++)
	{
		check = 0;
		a = va_arg(nums, int);
		for (int j = 1; j <= a; j++)
		{
			if (a % j == 0) check += 1;
		}
		if (check == 2) counter += 1;
	}
	cout << "Количество:" << counter << endl;
	va_end(nums);

}
//функция для варианта 13
void matrix(int n, ...)
{
	va_list nums;
	va_start(nums, n);
	int a, sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a = va_arg(nums, int);
			cout << a << " ";
			//Условие для проверки числа на его "нижесть" под главной диагональю
			if (j <= i - 1) sum += a;
		}
		cout << endl;
	}
	cout << "sum:" << sum << endl;
	va_end(nums);
}



void main()
{
	setlocale(LC_ALL, "rus");
	int choice;

	//Выбор функции
	cout << "1.Вариант 3" << endl;
	cout << "2.Вариант 5" << endl;
	cout << "3.Вариант 8" << endl;
	cout << "4.Вариант 13" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{//Вариант 3
		cout << "Последовательность:6,8,19,22,45,23,12" << endl;
		fmax(6, 8, 19, 22, 45, 23, 12);
		cout << "Последовательность:3,83,9,44" << endl;
		fmax(3, 83, 9, 44);
		cout << "Последовательность:13,2,6,7,2,6,5,8,2,9,11,22,24,25" << endl;
		fmax(13, 2, 6, 7, 2, 6, 5, 8, 2, 9, 11, 22, 24, 25);
		break;
	}
	case 2:
	{//Вариант 5
		cout << "Последовательность:6,8,19,22,45,23,12" << endl;
		kvadr(6, 8, 19, 22, 45, 23, 12);
		cout << "Последовательность:3,83,9,44" << endl;
		kvadr(3, 83, 9, 44);
		cout << "Последовательность:13,2,6,49,2,6,5,8,2,9,11,22,4,25" << endl;
		kvadr(13, 2, 6, 49, 2, 6, 5, 8, 2, 9, 11, 22, 4, 25);
		break;
	}
	case 3:
	{//Вариант 8,аргументы одинаковые,так ка по условию требуется проверить несколько нтервалов одной функции
		cout << "Последовательность:13,2,6,49,2,6,5,8,2,9,11,22,4,25" << endl;
		prost(13, 2, 6, 49, 2, 6, 5, 8, 2, 9, 11, 22, 4, 25);
		cout << "Последовательность:13,2,6,49,2,6,5,8,2,9,11,22,4,25" << endl;
		prost(13, 2, 6, 49, 2, 6, 5, 8, 2, 9, 11, 22, 4, 25);
		cout << "Последовательность:13,2,6,49,2,6,5,8,2,9,11,22,4,25" << endl;
		prost(13, 2, 6, 49, 2, 6, 5, 8, 2, 9, 11, 22, 4, 25);
		break;
	}
	case 4:
	{//Вариант 13,за n в условии бралось 3 запроса к функции,т.е. 3 разные матрицы
		cout << endl;
		matrix(3, 49, 2, 6, 5, 8, 2, 9, 11, 22);
		cout << endl;
		matrix(4, 9, 12, 34, 13, 16, 11, 8, 21, 16, 7, 2, 5, 6, 2, 18, 25);
		cout << endl;
		matrix(2, 15, 16, 7, 2);

		break;
	}
	default: {Error(); }
	}

}
