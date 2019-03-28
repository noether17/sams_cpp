#include <iostream>
using namespace std;

// Declare a function
int DemoConsoleOutput();

int main()
{
	// Call, i.e. invoke the function
	DemoConsoleOutput();

	return 0;
}

// Define, i.e. implement the previously declared function
int DemoConsoleOutput()
{
	cout << "This is a simple string literal" << endl;
	cout << "Writing number five: " << 5 << endl;
	cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
	
	return 0;
}
