#include <iostream>
using namespace std;

// remove the try-catch block to see this application crash
int main()
{
	try
	{
		// request a LOT of memory
		int *pointToNums = new int[0xffffffff];
		// use the allocated memory
		cout << "Allocation successful.\n";
		delete[] pointToNums;
	}
	catch (bad_alloc)
	{
		cout << "Memory allocation failed. Ending program.\n";
	}

	return 0;
}
