#include <iostream>
using namespace std;
constexpr int Square(int number) { return number * number; }

int main()
{
	const int ARRAY_LENGTH = 5;

	// Array of 5 integers, initialized using a const
	int numbers[ARRAY_LENGTH] = { 5, 10, 0, -101, 20 };

	// Using a constexpr for an array of 25 integers
	int moreNumbers[Square(ARRAY_LENGTH)];

	cout << "Enter the index of the element to be changed: ";
	int elementIndex = 0;
	cin >> elementIndex;

	cout << "Enter new value: ";
	int newValue = 0;
	cin >> newValue;

	numbers[elementIndex] = newValue;
	moreNumbers[elementIndex] = newValue;

	cout << "Element " << elementIndex << " in array numbers is: "
		<< numbers[elementIndex] << endl;
	cout << "Element " << elementIndex << " in array moreNumbers is: "
		<< moreNumbers[elementIndex] << endl;

	return 0;
}
