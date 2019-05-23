#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LEN = 5;

	int myNums[ARRAY_LEN] = { 2, 38, 52, 64, 187 };

	int *pointToNums = myNums;

	cout << "Display array using pointer syntax, operator*\n";
	for (int i = 0; i < ARRAY_LEN; ++i)
		cout << "Element " << i << " = " << *(myNums + i) << endl;

	cout << "Display array using ptr with array syntax, operator[]\n";
	for (int i = 0; i < ARRAY_LEN; ++i)
		cout << "Element " << i << " = " << pointToNums[i] << endl;

	return 0;
}
