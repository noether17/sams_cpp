#include <iostream>
using namespace std;

int main()
{
	int dogsAge = 30;
	cout << "Initialized dogsAge = " << dogsAge << endl;

	int *pointsToAge = &dogsAge;
	cout << "pointsToAge points to dogsAge\n";

	cout << "Enter an age for your dog: ";
	cin >> *pointsToAge;

	cout << "Input stored at " << pointsToAge << endl;

	cout << "Integer dogsAge = " << dogsAge << endl;

	return 0;
}
