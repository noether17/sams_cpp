#include <iostream>
using namespace std;

// three global integers
int firstNumber = 0;
int secondNumber = 0;
int result = 0;

void multNumbers()
{
	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	result = firstNumber * secondNumber;

	cout << "Displaying from multNumbers()" << endl;
	cout << firstNumber << " x " << secondNumber
		<< " = " << result << endl;
}

int main()
{
	cout << "This program will help you multiply two numbers." << endl;

	multNumbers();

	cout << "Displaying from main()" << endl;
	cout << firstNumber << " x " << secondNumber
		<< " = " << result << endl;

	return 0;
}
