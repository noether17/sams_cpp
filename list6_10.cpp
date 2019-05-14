#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	int myNums[ARRAY_LENGTH] = {};

	cout << "Populate array of " << ARRAY_LENGTH << " integers\n";

	for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
	{
		cout << "Enter an integer for element " << counter << ": ";
		cin >> myNums[counter];
	}

	cout << "Displaying contents of the array: \n";

	for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
		cout << "Element " << counter << " = " << myNums[counter] << endl;

	return 0;
}
