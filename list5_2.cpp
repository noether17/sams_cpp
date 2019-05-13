#include <iostream>
using namespace std;

int main()
{
	int startValue = 101;
	cout << "Start value of integer being operated: " << startValue << endl;

	int postfixIncrement = startValue++;
	cout << "Result of postfix increment: " << postfixIncrement << endl;
	cout << "After postfix increment, startValue = " << startValue << endl;

	startValue = 101; // Reset
	int prefixIncrement = ++startValue;
	cout << "Result of prefix increment: " << prefixIncrement << endl;
	cout << "After prefix increment, startValue = " << startValue << endl;

	startValue = 101; // Reset
	int postfixDecrement = startValue--;
	cout << "Result of postfix decrement: " << postfixDecrement << endl;
	cout << "After postfix decrement, startValue = " << startValue << endl;

	startValue = 101; // Reset
	int prefixDecrement = --startValue;
	cout << "Result of prefixDecrement: " << prefixDecrement << endl;
	cout << "After prefix decrement, startValue = " << startValue << endl;

	return 0;
}
