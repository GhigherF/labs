#include <iostream>
#include <time.h>
#include <chrono>
using namespace std;

long N, i, j, cntrl1, cntrl2;

float bubble(long* B,long* C)
{
	for (i = 0; i < N; i++)
	{
		C[i] = B[i];
	}
	cntrl1 = clock();
	for (i = 0; i < N-1; i++)
	{
		for (j = 0; j < N-i-1; j++)
		{
			if (B[j] > B[j+1])
			{
				swap(B[j], B[j+1]);
			}
		}
	}
	cntrl2 = clock();
	cout << endl<<"Sort: ";
	for (i = 0; i < N; i++)
	{
		cout << B[i] << " ";
	}
	delete[] B;
	return cntrl2-cntrl1;

}





float Shell(long* C,long* D)
{
	int d;
	for (i = 0; i < N; i++)
	{
		D[i] = C[i];
	}

	cntrl1 = clock();


	
	d = N;
	d = d / 2;
	while (d > 0) {
		for (i = 0; i < N - d; i++) {
			j = i;
			while (j >= 0 && C[j] > C[j + d]) {
				swap(C[j], C[j + d]);
				j--;
			}
		}
		d = d / 2;
	}
	cntrl2 = clock();
cout << endl << "Sort: ";
for (i = 0; i < N; i++)
{
	cout << C[i]<<" ";
}
delete[] C;
	return cntrl2 - cntrl1;
}




float choose(long* D, long* E)
{
	int min;
	for (i = 0; i < N; i++)
	{
		E[i] = D[i];
	}
	cntrl1 = clock();

	for (int i = 0; i < N; i++) {
		min = i;

		for (int j = i + 1; j < N; j++)
			min = (D[j] < D[min]) ? j : min;

		if (i != min) {
			swap(D[i], D[min]);
		}
	}


	
	cntrl2 = clock();
	cout << endl << "Sort: ";
	for (i = 0; i < N; i++)
	{
		cout << D[i] << " ";
	}

	delete[] D;
	return cntrl2 - cntrl1;
}



void Qsort(long* E, int first, int last)
{
	int mid;
	int f =first, l =last;
	mid = E[(f + l) / 2]; 				//вычисление опорного элемента
	do
	{
		while (E[f] <mid) f++;
		while (E[l] > mid) l--;
		if (f <= l) 				//перестановка элементов
		{
			swap(E[f], E[l]);
			f++;
			l--;
		}
	} while (f <=l);
	if (first<l) Qsort(E,first,l);
	if (f<last) Qsort(E,f,last);

}
		

void main()
{
	srand(time(NULL));
	rand();
	float time[5];
	long* A, * B, * C, * D, * E;

	cin >> N;
	A = new long[N];
	B = new long[N];
	C = new long[N];
	D = new long[N];
	E = new long[N];

	cout << "Origin: ";
	for (i = 0; i < N; i++)
	{
		A[i] = rand() % 1000;
		B[i] = A[i];
		cout << A[i] << " ";
	}

	delete[] A;
	time[1] = bubble(B, C);
	time[2] = Shell(C, D);
	time[3] = choose(D, E);
	
		cntrl1 = clock();
		Qsort(E,0,N);
		cntrl2 = clock();

		cout << endl << "Sort: ";
		for (i = 1; i <=N; i++)
		{
			cout << E[i] << " ";
		}
		time[4] = cntrl2 - cntrl1;
	cout << endl << "Bubble sort:"<<time[1] / 1000 << " seconds" << endl << "Shell sort:"<<time[2] / 1000 << " seconds" << endl <<"Choose sort:"<< time[3] / 1000 << " seconds" << endl << "Quick sort:"<<time[4] / 1000 << " seconds";
}
	