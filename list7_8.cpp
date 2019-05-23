#include <iostream>
using namespace std;

void DisplayArray(int numbers[], int length)
{
	for (int i = 0; i < length; ++i)
		cout << numbers[i] << " ";

	cout << endl;
}

void DisplayArray(char string[], int length)
{
	for (int i = 0; i < length; ++i)
		cout << string[i] << " ";

	cout << endl;
}

int main()
{
	int myNums[4] = { 24, 58, -1, 245 };
	DisplayArray(myNums, 4);

	char myStatement[7] = { 'H', 'e', 'l', 'l', 'o', '!', '\0' };
	DisplayArray(myStatement, 7);

	return 0;
}
