#include <iostream>

using namespace std;

// 1 1 2 3 5 8 13 21 34 55 ~ 

int FibonacciLoop(int num)
{
	if (num == 1 || num == 2)
		return 1;

	int first = 1;
	int second = 1;
	int result = 0;

	for (int i = 0; i < (num - 2); i++)
	{
		result = first + second;

		first = second;
		second = result;
	}

	return result;
}

int main()
{
	int a = 0;
	a = FibonacciLoop(10);

	cout << a << endl;



	return 0;
}
