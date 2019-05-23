#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "How many integers shall I receive memory for?\n";
	int numEntries = 0;
	cin >> numEntries;

	int *myNumbers = new int[numEntries];

	cout << "Memory allocated at: " << myNumbers << endl;

	delete[] myNumbers;

	return 0;
}
