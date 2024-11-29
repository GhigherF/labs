#include <iostream>
#include <string>
using namespace std;


void dop_3(int* a, int l, int r, int n)//Доп 3
{
	if (l == r)
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i]<<" ";
		}
		cout << endl;
	}

	for (int i = l; i <= r; ++i)
	{
		swap(a[l], a[i]);
		dop_3(a, l + 1, r, n);
	}
}


//double var_3(int n,int cntrl)
//{
//	if (n==cntrl)
//	{
//		return sqrt(1 + cntrl + n);
//	}
//	if (n<cntrl)
//	{
//return sqrt( (1+cntrl+n) *var_3(n+1,cntrl));
//	}
//
//
//
//}

//int factorial(int n)
//{
//	int sum = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//
int var_3_plus_2(int n,int m)
{
	if (m == 0||m == n) { //базовые случаи//
		return 1;
	}
	else {
		return var_3_plus_2(n - 1, m - 1) + var_3_plus_2(n - 1, m);
	}
	
}
// 
//int a[100],num=0;//Доп 1
//bool flag = false;
//int dop1(int n)
//{
//	num += 1;
//	int i, count = 0;
//	
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] >= n)count += 1;
//	}
//
//	if (count == n)
//
//	{
//		int sum=0,mult = 1;
//		a[0] += 1;
//		for (i = n; i>0; i--)
//		{
//			sum += a[i] * mult;
//			mult *= 10;
//		}
//		return sum+n;
//	}
//
//	count = 0;
//
//if (flag == false) {
//
//		for ( i = 0; i < n; i++)
//		{
//			a[i] = 1;
//				flag = true;
//
//		}
//	}
//	for ( i = 0; i < n; i++)
//	{
//cout<<a[i];
//	}
//	while (a[i-1]>=n)
//	{
//		count += 1;
//		i -= 1;
//	}
//	for (i = n-count; i>=0; i--)
//	{
//		if (a[i - 1] < n)
//		{
//			a[i - 1] += 1;
//			break;
//
//		}
//if (a[i-2] == n)
//{
//	a[i-2] += 1;
//	break;
//}
//
//}
//	
//	cout<<endl;
//	return dop1(n);
//	
//
//}
//int k = 0;.//Доп 2
//string dop2(string a)//Доп 4
//{
//	char symbol='a';
//	if (k == 26)
//	{	
//a = a + a;
//symbol += k;
//a = symbol+ a;
//return a;
//	}
//	else
//	{
//		k += 1;
//		a = a + a;
//		symbol += k;
//		a = symbol + a;
//	}
//	
//	return dop2(a);
//	
//}



void main()
{
int n;
int a[100];//для допа
	cout << "n:";
	cin >> n;
	//int m;
	//cout << "m:";
	//cin >> m;
	for (int i = 0; i < n; i++)//Доп 4
	{
		cin >> a[i];
	}
	dop_3(a, 0, n - 1, n);	
	//cout<<endl<<var_3(1,n);//Вариант 3
	//cout<<var_3_plus_2(n,m);//Вариант 5
	
	//cout<<dop1(n);//Dop1
	//cout << endl << "Count:" << num;

	/*string temp;//Доп 4
	temp=dop2("a");
	cout << temp;
		
	cout << "Symbol:" << temp[n + 1];*/
}