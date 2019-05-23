#include <iostream>
using namespace std;

int main()
{
	// request a lot of memory, use nothrow
	int *pointToNums = new(nothrow) int[0xffffffff];

	if (pointToNums)
	{
		delete[] pointToNums;
	}
	else
		cout << "Memory allocation failed. Ending program.\n";

	return 0;
}
