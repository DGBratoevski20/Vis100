#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int karti;
	cin >> karti;
	cout << endl;
	srand(time(0));
	bool table[2][6];
	int arr[100];
	for (int x = 0; x < 1; x++)
	{
		for (int j = 0; j < 6; j++)
		{
			arr[x] = (rand() % 10);
			if (arr[x] % 2 == 0)
			{
				table[x][j] = 1;
				table[x + 1][j] = 0;
			}
			else
			{
				table[x][j] = 0;
				table[x + 1][j] = 1;
			}
		}
	}

	for (int x = 0; x < 2; x++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << table[x][j] << " ";
		}
		cout << endl;
	}
}