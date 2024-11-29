#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int* bubbleSort(int *a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (a[i] > a[j])swap(a[i], a[j]);
		}
	}
	return a;
}

void heapify(int A[], int pos, int n)
{
	int t, tm;
	while (2 * pos + 1 < n)
	{
		t = 2 * pos + 1;
		if (2 * pos + 2 < n && A[2 * pos + 2] >= A[t])
			t = 2 * pos + 2;
		if (A[pos] < A[t])
		{
			tm = A[pos];
			A[pos] = A[t];
			A[t] = tm;
			pos = t;
		}
		else break;
	}
}
int* Qsort(int* E, int first, int last)
{
	int mid;
	int f = first, l = last;
	mid = E[(f + l) / 2]; 				//вычисление опорного элемента
	do
	{
		while (E[f] > mid) f++;
		while (E[l] < mid) l--;
		if (f <= l) 				//перестановка элементов
		{
			swap(E[f], E[l]);
			f++;
			l--;
		}
	} while (f <= l);
	if (first < l) Qsort(E, first, l);
	if (f < last) Qsort(E, f, last);
	return E;
}


void output(int* a,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void Shell(int* C,int N)
{
	int d;

	d = N;
	d = d / 2;
	while (d > 0) {
		for (int i = 0; i < N - d; i++) {
			int j = i;
			while (j >= 0 && C[j] > C[j + d]) {
				swap(C[j], C[j + d]);
				j--;
			}
		}
		d = d / 2;
	}
	cout << endl << "Sort: ";
	for (int i = 0; i < N; i++)
	{
		cout << C[i] << " ";
	}

}

void choose(int* D, int N)
{
	int min;
	for (int i = 0; i < N; i++) {
		min = i;

		for (int j = i + 1; j < N; j++)
			min = (D[j] < D[min]) ? j : min;

		if (i != min) {
			swap(D[i], D[min]);
		}
	}

	cout << endl << "Sort: ";
	for (int i = 0; i < N; i++)
	{
		cout << D[i] << " ";
	}
}


void main()
{
	int n,max=-999,place=0,j=0;
	cout << "Num:";
	cin >> n;
	int* A = new int[n];
	//int* B = new int[n];
	srand(time(NULL));
	rand();
	cout << "Origin:";
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << " ";
		if (A[i] > max)
		{
			max = A[i];
			place = i;
		}
	}
	Shell(A, n);
	//choose(A, n);

	//for (int i = 0; i < n; i++)
	//{
	//	if (i > place && i % 2 == 1)
	//	{
	//		B[j] = A[i];
	//		j += 1;
	//	}
	//}
	//cout << endl;
	//cout << "B:";
	//output(B,j);
	/*int* C = B;
	float time1, time2,time3,time4;*/
	//cout << endl << endl << endl;

	/*time1=clock();
	B = bubbleSort(B, j);
	time2 = clock();*/
	

	//time3 = clock();
	//C = Qsort(C,0,j);
	//time4 = clock();
//cout << "Sorted:";
	//output(C, j);
	//cout << endl;
	
	/*cout <<endl<<"Bubble time:"<<(time2 - time1) / 1000 << "s"<<endl;
	cout << endl << "Quick sort:" << (time4 - time3) / 1000 << "s" << endl;*/

}