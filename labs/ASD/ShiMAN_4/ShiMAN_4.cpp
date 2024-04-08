
//usi
//
//void main()
//{
//	int N,a[10000];
//	cin >> N;
//	srand(time(NULL));
//	rand();
//	for (int i = 0; i < N; i++)
//	{
//		a[i] = rand() % 23+7;
//		cout << a[i] <<" ";
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = i; j < N;j++)
//		{
//			if (a[i] < a[j]) swap(a[i], a[j]);
//		}
//	}
//	int count=0,gg;
//	cout << endl;
//	for (int i = 0; i < N; i++)
//	{
//		cout << a[i]<<" ";
//		if (a[i] != a[i - 1])count += 1;
//		if (count == 3)gg = i + 1;
//	}
//	cout << endl << "Count:" << gg;
//
//}



#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	cout << "Task:" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		int N, a[10000];
		cout << "Num of products:";
		cin >> N;
		srand(time(NULL));
		rand();
		for (int i = 0; i < N; i++)
		{
			a[i] = rand() % 23 + 7;
			cout << a[i] << " ";
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = i; j < N; j++)
			{
				if (a[i] < a[j]) swap(a[i], a[j]);
			}
		}
		int count, sum = 0;
		if (N % 2 == 0) { count = N / 2; }
		else { count = N / 2 + 1; }
		cout << endl;
		for (int i = 0; i < N; i++)
		{
			cout << a[i] << " ";
			if (i < count)sum += a[i];
		}
		cout << endl << "Max sum:" << sum;
		break;
	}
	case 2:
	{
		int N, a[10000];
		cout << "Num of partisipators:";
		cin >> N;
		srand(time(NULL));
		rand();
		for (int i = 0; i < N; i++)
		{
			a[i] = rand() % 23 + 7;
			cout << a[i] << " ";
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = i; j < N; j++)
			{
				if (a[i] < a[j]) swap(a[i], a[j]);
			}
		}
		int count = 0, gg;
		cout << endl;
		for (int i = 0; i < N; i++)
		{
			cout << a[i] << " ";
			if (a[i] != a[i - 1]) {
				count += 1;
				cout << endl << count << ".place:" << a[i];
			}
			if (count == 3)gg = i + 1;
		}
		cout << endl << "Count:" << gg;
	}
	}


}