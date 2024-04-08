//#include <iostream>
//#include <time.h>
//#include <stdlib.h>
//using namespace std;
//
//int  rec(int num,int X)
//{
//	if (num == X) { cout << "ugadal" << endl << num; return 1; }
//	if (num > X) rec((num+num/2)/2, X);
//	if (num < X) rec((num*2+num)/2, X);
//}
//
//void main()
//{
//	int X,start,end,i;
//	int num,N;
//	cin >> N;	
//	srand(time(NULL));	
//	rand();
//	
//X = rand()%(int)N+1;
//cout << X<<endl;
//num = N;
//rec(num,X);
//}



#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void main()
{
	int X,N,num,start,end,i;
	cin >> N;
	srand(time(NULL));	
	rand();
	
X = rand()%N+1;
cout << X<<endl;
start = 1;
end = N;
i = 0;
while (true)
{
	i += 1;
	num=((end-start) / 2+start);
	if (num == X) { cout << "Ugadal!" << endl << "Max shagov:" << int(log(N) / log(2)) + 1 << endl << "Shagov vipolneno:" << i; exit(1941 - 1945); }
	if (X > num) { cout << num << "-malo"<<endl; start = num; }
	if (X < num) { cout << num << "-mnogo"<<endl; end = num; }
	}
	
}