
//Задание 1 Вариант 3
// 
// 
//#include <stdio.h>
//#include <string>	
//#include <iostream>
//using namespace std;
//		
//void main()
//{
//	double matrix[60][60];
//	string gg;
//	setlocale(LC_ALL, "rus");
//	char n[2],gap[50];
//	int count=0,column=0;
//	FILE *file,*file2;
//	fopen_s(&file,"read.txt","r");//Открытие файла только для чтения
//	fgets(n, 2, file);//Получение первого числа--ранга матрицы
//	count=atoi(n);//Перевод символа в число
//
//	//Переход к строчкам матрицы
//	fgets(gap, 50, file);
//
//
//
//	//Получение матрицы из файла
//	for (int i = 0; i < count; i++)
//	{
//fgets(gap, 50, file);//Считывание каждой строки файла
//column = 0;
//gg = "";
//// Выделение отдельных чисел и запись их в массив
//for (int j = 0; j < size(gap); j++)
//{
//
//	if (gap[j] == ' ' && gg >" ")
//	{
//		matrix[i][column] = stof(gg);
//		column += 1;
//		gg = "";
//		j += 1;
//	}
//		gg = gg + gap[j];
//}
//	}
//
//
//	fopen_s(&file2, "write.txt", "w");//Открытие файла только для записи
//
//	for (int i = 0; i < count; i++)
//	{
//		for(int j=0;j<column;j++)
//		{
//			fprintf(file2,"%.1f",matrix[j][i]);//Вывод элементов транспонированной матрицы с одним знаком после запятой
//			fprintf(file2, "  ");
//
//		}
//		fprintf(file2, "\n");
//	}
//	
//
//	fclose(file2);
//	fclose(file);
//}



////////////////////////////////////////////////////////////////////
//Задание 2 варианта 3

//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//
//
//void main()
//{
//
//#include <stdio.h>
//	setlocale(LC_ALL, "rus");
//	int A[100], B[100], C[100], i, j,size,count,num;
//	char row[50];
//	FILE *file1, *file2, *file3, *file4;
//	//Обьявление входных файлов
//	fopen_s(&file1, "NameA.bin", "r");
//	fopen_s(&file2, "NameB.bin", "r");
//	fopen_s(&file3, "NameC.bin", "r");
//
//
//fseek(file1, 0L, SEEK_END);
//	size = ftell(file1);
//	fseek(file1, 0L, SEEK_SET);
//
//	
//	fgets(row,size,file1);	
//	count = 0;
//	for (i = 0; i <size; i++)
//	{
//		if (row[i] ==' ') { count += 1; }
//	}
//	count +=1;
//	cout << count << endl;
//	fseek(file1, 0L, SEEK_SET);
//	for (i = 0; i < count; i++)
//	{
//		fscanf_s(file1, "%d",&num);
//		A[i] = num;
//	}
//
//
//
//
//
//
//
//
//
//
//	
//	for (i = 0; i < count; i++)
//	{
//		fscanf_s(file2, "%d", &num);
//		B[i] = num;
//	}
//
//
//
//
//
//	for (i = 0; i < count; i++)
//	{
//		fscanf_s(file3, "%d", &num);
//		C[i] = num;
//	}
//	fclose(file1);
//	fclose(file2);
//	fclose(file3);
//
//
//	fopen_s(&file4, "NameD.bin", "w+");
//
//	for (i = 0; i < count; i++)
//	{
//		fprintf(file4, "%d %d %d ", A[i], B[i], C[i]);
//	}
//	fclose(file4);
//	
//}
//
//
//
//
//
///////////////////////////////////
//Задание 1 Варианта 6

//#include <stdio.h>
//#include <iostream>
//#include <string>//Пригодится для перевода из строки в дробное число
//using namespace std;
//
//void main()
//{
//	setlocale(LC_ALL, "rus");
//	char str[50];
//	string gg = "";
//	int size, count,chislo,controlNum;
//	double A[100],num,control;
//	FILE *file;
//	fopen_s(&file, "fA.txt", "r");
//	fgets(str, 50, file);//Получение строки
//	fclose(file);
//
//	int i= 0;
//	//Выделение чисел и запись их в массив
//for (int j = 0; j < strlen(str); j++)
//{
//
//	if (str[j] == ' ' && gg >" ")
//	{
//		A[i] = stof(gg);
//		gg = "";
//		j += 1;
//		i += 1;
//	}
//		gg = gg + str[j];
//}
//
////Ввод числа
//cout << "Число:";
//cin >>chislo ;
//
//control = 100;
//int n = i;
////Сравнение с введённым числом
//for (i = 0; i < n; i++)
//{
//	if (abs(A[i] - chislo) < control) { control =abs( A[i] - chislo); controlNum = i; }
//}
////Вывод числа,разницы и(задания) порядкового номера числа
//cout << A[controlNum] << " " << control;
//cout << endl<<"Порядковый номер:"<<controlNum + 1;
//}
////////////////////////////////////////////////////////////////////////////////////////////
//Задание 2 варианта 6

//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//void main()
//{
//	char n[2],str[50];
//	int size,count;
//	FILE *f1, *f2;
//	fopen_s(&f1, "F1.txt", "r");
//	fopen_s(&f2, "F2.txt", "w");
//	//Получение количества строк
//	fgets(n, 2, f1);
//	fgets(str, 50, f1);
//	count=atoi(n);
//	count = count / 2;
//	//Запись только чётных строк в файл F2
//	for (int i = 0; i < count; i++)
//	{
//		fgets(str, 50, f1);
//		fgets(str, 50, f1);
//		fprintf(f2,"%s", str);
//		
//	}
//	fclose(f1);
//	fclose(f2);
//
//}

//////////////////////////////////////////////////////////////////////////////////////////
//задание 1 вариант 7

//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//
//
//void main()
//{
//
//#include <stdio.h>
//	setlocale(LC_ALL, "rus");
//	int A[100], B[100], C[100], i, j, size, count, num, max;
//	char row[50];
//	FILE* file1, * file2, * file3, * file4;
//	//Обьявление входных файлов
//	fopen_s(&file1, "NameA.bin", "r");
//	fopen_s(&file2, "NameB.bin", "r");
//	fopen_s(&file3, "NameC.bin", "r");
//
//
//	fseek(file1, 0L, SEEK_END);
//	size = ftell(file1);
//	fseek(file1, 0L, SEEK_SET);
//
//
//	fgets(row, size, file1);
//	count = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (row[i] == ' ') { count += 1; }
//	}
//	count += 1;
//	cout << count << endl;
//	fseek(file1, 0L, SEEK_SET);
//	for (i = 0; i < count; i++)
//	{
//		fscanf_s(file1, "%d", &num);
//		A[i] = num;
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		fscanf_s(file2, "%d", &num);
//		B[i] = num;
//	}
//	for (i = 0; i < count; i++)
//	{
//		fscanf_s(file3, "%d", &num);
//		C[i] = num;
//	}
//	fclose(file1);
//	fclose(file2);
//	fclose(file3);
//
//	fopen_s(&file4, "NameD.bin", "w+");
//
//	for (i = 0; i < count; i++)
//	{
//		max = A[i];
//		if (B[i] > max) max = B[i];
//		if (C[i] > max) max = C[i];
//		fprintf(file4, "%d ", max);
//	}
//	fclose(file4);
//}
//////////////////////////////////////////////////////////////////////////////////////////
//задание 2 вариант 7

//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//
//
//void main()
//{
//
//#include <stdio.h>
//	setlocale(LC_ALL, "rus");
//	int A[100], B[100], C[100], i, j, size, count, num;
//	char row[50];
//	FILE* file1, * file2, * file3, * file4;
//	//Обьявление входных файлов
//	fopen_s(&file1, "A.bin", "r");
//	fopen_s(&file2, "B.bin", "r");
//	fopen_s(&file3, "C.bin", "r");
//
//
//	fseek(file1, 0L, SEEK_END);
//	size = ftell(file1);
//	fseek(file1, 0L, SEEK_SET);
//
//
//	fgets(row, size, file1);
//	count = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (row[i] == ' ') { count += 1; }
//	}
//	count += 1;
//	cout << count << endl;
//	fseek(file1, 0L, SEEK_SET);
//	for (i = 0; i < count; i++)
//	{
//		fscanf_s(file1, "%d", &num);
//		A[i] = num;
//	}
//	for (i = 0; i < count; i++)
//	{
//		fscanf_s(file2, "%d", &num);
//		B[i] = num;
//	}
//	for (i = 0; i < count; i++)
//	{
//		fscanf_s(file3, "%d", &num);
//		C[i] = num;
//	}
//	fclose(file1);
//	fclose(file2);
//	fclose(file3);
//
//
//	fopen_s(&file4, "D.bin", "w+");
//
//	for (i = 0; i < count; i++)
//	{
//		fprintf(file4, "%d %d %d ", A[i], B[i], C[i]);
//	}
//	fclose(file4);
//}

//////////////////////////////////////////////////////////////////////////////////////////
//задание 1 вариант 12
 
 
//#include <stdio.h>
//#include <string>	
//#include <iostream>
//using namespace std;
//		
//void main()
//{
//	int k;
//	string gg;
//	setlocale(LC_ALL, "rus");
//	char row[50];
//	FILE *file,*file2;
//	fopen_s(&file,"read.txt","r");//Открытие файла только для чтения
//	cout << "Номер строки:";
//	cin >> k;
//
//	for (int i = 0; i < k; i++)
//	{
//		fgets(row, 50, file);//Пропуск строк до нужной
//	}
//	fgets(row, 50, file);
//
//
//	fopen_s(&file2, "write.txt", "w");//Открытие файла только для записи
//		fprintf(file2,"%s",row);
//	
//
//	fclose(file2);
//	fclose(file);
//}

//////////////////////////////////////////////////////////////////////////////////////////
//задание 2 вариант 12


#include <iostream>
#include <stdio.h>
using namespace std;



void main()
{

#include <stdio.h>
	setlocale(LC_ALL, "rus");
	int A[100], B[100], C[100], i, j, size, count, num, min;
	char row[50];
	FILE* file1, * file2, * file3, * file4;
	//Обьявление входных файлов
	fopen_s(&file1, "NameA.bin", "r");
	fopen_s(&file2, "NameB.bin", "r");
	fopen_s(&file3, "NameC.bin", "r");


	fseek(file1, 0L, SEEK_END);
	size = ftell(file1);
	fseek(file1, 0L, SEEK_SET);


	fgets(row, size, file1);
	count = 0;
	for (i = 0; i < size; i++)
	{
		if (row[i] == ' ') { count += 1; }
	}
	count += 1;
	cout << count << endl;
	fseek(file1, 0L, SEEK_SET);
	for (i = 0; i < count; i++)
	{
		fscanf_s(file1, "%d", &num);
		A[i] = num;
	}

	for (i = 0; i < count; i++)
	{
		fscanf_s(file2, "%d", &num);
		B[i] = num;
	}
	for (i = 0; i < count; i++)
	{
		fscanf_s(file3, "%d", &num);
		C[i] = num;
	}
	fclose(file1);
	fclose(file2);
	fclose(file3);

	fopen_s(&file4, "NameD.bin", "w+");

	for (i = 0; i < count; i++)
	{
		min = A[i];
		if (B[i] <  min) min = B[i];
		if (C[i] < min) min = C[i];
		fprintf(file4, "%d ", min);
	}
	fclose(file4);
}