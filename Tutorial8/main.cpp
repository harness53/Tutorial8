#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int b[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		cout << "enter number" << i << ": ";
		cin >> b[i]; //console input (cin)
	}


	for (int i = 0; i < 5; i++)
	{
		cout << b[i] << endl;
	}

	system("pause");
	return 0;
}