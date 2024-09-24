#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

bool check(int a, vector <int> b, vector <int> c)
{
	bool flag = false;
	for (int i = 0; i < b.size(); i++)
	{
		if (a == b[i]) flag = true;
	}
	for (int i = 0; i < c.size(); i++)
	{
		if (a == c[i]) flag = true;
	}
	return flag;
}

vector <int> pop_front(vector <int>& arr)
{
	vector <int> a;
	for (int i = 1; i < arr.size(); i++)
	{
		a.push_back(arr[i]);
	}
	return a;
}


void main()
{
	int startpoint;
	char a;
	int temp;
	int index=99998;
	int value;
	SetConsoleOutputCP(1251);
	int matrix[9][9] = {0,7,10,0,0,0,0,0,0,
						7,0,0,0,0,9,27,0,0,
						10,0,0,0,31,8,0,0,0,
						0,0,0,0,32,0,0,17,21,
						0,0,31,32,0,0,0,0,0,
						0,9,8,0,0,0,0,11,0,
						0,27,0,0,0,0,0,0,15,
						0,0,0,17,0,11,0,0,15,
						0,0,0,21,0,0,15,15,0};
	cout << "Вершина:";
	cin >>a;
	startpoint = int(a) - 65;
	int visited[8];
	int min[8];

	for (int i = 0; i < 8; i++)
	{
		min[i] = 99999;
		visited[i] = 1;
	}
	min[startpoint] = 0;
	while (index < 99999)
	{
		index = 99999;
		value = 99999;
		for (int i = 0; i < 8; i++)
		{
			if ((visited[i] == 1) && (min[i] < value))
			{
				value=min[i];
				index=i;
			}
		}
		if (index != 99999)
		{
			for (int i = 0; i < 8; i++)
			{
				if (matrix[index][i] > 0)
				{
					temp = value + matrix[index][i];
					if (temp < min[i]) min[i] = temp;
					cout << temp <<'\n';
				}
			}
			visited[index] = 0;
		}
	}
	printf("\nКратчайшие расстояния до вершин: \n");
	for (int i = 0; i < 8; i++)
		printf("%5d ", min[i]);
}