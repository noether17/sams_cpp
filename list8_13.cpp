#include <iostream>
using namespace std;

int main()
{
	// uninitialized pointer (bad)
	bool *isSunnyInPhiladelphia;

	cout << "Is it sunny (y/n)? ";
	char userInput = 'y';
	cin >> userInput;

	if (userInput == 'y')
	{
		isSunnyInPhiladelphia = new bool;
		*isSunnyInPhiladelphia = true;
	}

	// isSunny... contains invalid value if user entered 'n'
	cout << "Boolean flag sunny says: " << *isSunnyInPhiladelphia << endl;

	// delete being invoked even if new wasn't
	delete isSunnyInPhiladelphia;

	return 0;
}
