#include <iostream>	
#include <chrono>
using namespace std;

unsigned long long recurse(int N)
{
	if (N == 2 or N==3) return 1;
	return recurse(N-1) + recurse(N - 2);
}


unsigned long long kycle(int N)
{
	int i = 0, prev = 0, trash, current = 1;
	while (i < N - 2)
	{
		trash = prev + current;	
		prev = current;
		current = trash;
		i += 1;
	}
	return current;
}

//void cycle(int N)
//{
//
//	unsigned long long prev=0, trash, current=1,a,b;
//	for (int i = 1; i <= N - 2; i++)
//	{
//		trash = prev + current;
//		prev = current;
//		current = trash;
//	}
//	cout << current;
//
//}


//void curse(int N,int i, unsigned long long current,unsigned long long prev)
//{
//	
//	unsigned long long trash;
//	
//	i+=1;
//	if (i == N - 1)
//	{
//		cout << endl<<current;
//		return;
//	}
//	
//	trash = prev + current;
//	prev = current;
//	current = trash;
//	curse(N,i,current,prev);
//
//
//}

void main()
{
	setlocale(LC_ALL, "rus");
	int N,i=0;
	unsigned long long prev = 0, current = 1, a,min=0;

	double sec=0,c,b;
	cin >> N;
	if (N == 1)
	{
		cout << endl << "0";
		exit(69);
	}

	if (N == 2)
	{
		cout << endl << "1";
		exit(69);
	}

	//cycle(N);
b = clock();
	a = kycle(N);
	c = clock();
	cout << endl << a;

	sec = (c - b) / 1000;
	cout << endl << sec << endl;
	min = sec / 60;
	sec = sec - (min * 60);
	printf("Расчётное время циклом % d минут % .0f секунд", min, sec);
	cout << endl << endl << endl << endl;



	b=clock();
	a=recurse(N);
	c = clock();
	cout << endl << a;
	sec = (c - b) / 1000;
	cout << endl << sec<<endl;
	min = sec/60;
	sec = sec - (min * 60);
	printf("Расчётное время рекурсией %d минут %.0f секунд", min, sec);
	cout << endl << endl << endl << endl;


	
	//curse(N,i,current,prev);
}