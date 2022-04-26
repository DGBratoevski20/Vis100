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
	bool a = true;
	bool b = false;
	int arr[100];
	for (int x = 0; x < karti; x++)
	{
		arr[x] = (rand() % 10);
		if (arr[x] % 2 == 0)
		{
			cout << b << endl << a << endl << endl;
		}
		else
		{
			cout << a << endl << b << endl << endl;
		}
	}
}