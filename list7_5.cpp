#include <iostream>
using namespace std;

int GetFibNumber(int fibIndex)
{
	if (fibIndex < 2)
		return fibIndex;
	else
		return GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex - 2);
}

int main()
{
	cout << "Enter index of desired Fibonacci number: ";
	int index = 0;
	cin >> index;

	cout << "Fibonacci number is: " << GetFibNumber(index) << endl;

	return 0;
}
