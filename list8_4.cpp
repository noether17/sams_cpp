#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int dogsAge = 9;

	cout << "Integer age = " << age << endl;
	cout << "Integer dogsAge = " << dogsAge << endl;

	int *pointsToInt = &age;
	cout << "pointsToInt points to age\n";

	cout << "pointsToInt = " << pointsToInt << endl;

	cout << "*pointsToInt = " << *pointsToInt << endl;

	pointsToInt = &dogsAge;
	cout << "pointsToInt points to dogsAge\n";

	cout << "pointsToInt = " << pointsToInt << endl;

	cout << "*pointsToInt = " << *pointsToInt << endl;

	return 0;
}
