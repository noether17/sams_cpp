#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	cout << "Enter a line of text: " << endl;
	string userInput;
	getline(cin, userInput);

	char copyInput[20] = {};
	if (userInput.length() < 20)
	{
		strcpy(copyInput, userInput.c_str());
		cout << "copyInput contains: " << copyInput << endl;
	}
	else
		cout << "Bounds exceeded; won't copy!" << endl;

	return 0;
}
