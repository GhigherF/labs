#include <iostream>
using namespace std;


void main()
{
	int values[6][6] = { 0,28,21,59,12,27,
					  7,0,24,9999,21,9,
					  9,32,0,13,11,9999,
					  8,9999,5,0,16,9999,
					  14,13,15,10,0,22,
					  15,18,9999,9999,6,0 };

	int point[6][6] = { 0,2,3,4,5,6,
					 1,0,3,4,5,6,
					 1,2,0,4,5,6,
					 1,2,3,0,5,6,
					 1,2,3,4,0,6,
					 1,2,3,4,5,0 };

	int m = 0;
	while (m < 6)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (values[i][m] + values[m][j] < values[i][j] && i != j && j != m && i != m)
				{
					values[i][j] = values[i][m] + values[m][j];
					point[i][j] = m + 1;
				}
			}

		}
		m += 1;
	}

	cout << "D:" << '\n' << "-----------------" << '\n';
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << values[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "S:" << '\n' << "-----------------" << '\n';
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << point[i][j] << " ";
		}
		cout << "\n";
	}
}