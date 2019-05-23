#include <iostream>
using namespace std;

int main()
{
	cout << "How many integers would you like to enter? ";
	int numEntries = 0;
	cin >> numEntries;

	int *pointsToInts = new int[numEntries];

	cout << "Allocated for " << numEntries << " integers\n";
	for (int i = 0; i < numEntries; ++i)
	{
		cout << "Enter number " << i << ": ";
		cin >> *(pointsToInts + i);
	}

	cout << "Displaying all numbers entered: \n";
	for (int i = 0; i < numEntries; ++i)
		cout << *(pointsToInts++) << " ";
	cout << endl;

	pointsToInts -= numEntries;

	delete[] pointsToInts;

	return 0;
}
