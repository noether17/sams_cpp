#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int* pointsToInt = &age;

	cout << "Integer age is at: " << hex << pointsToInt << endl;

	return 0;
}
