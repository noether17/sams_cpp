#include <iostream>
using namespace std;

int main()
{
	int *pointsToAge = new int;

	cout << "Enter your dog's age: ";
	cin >> *pointsToAge;

	cout << "Age = " << *pointsToAge
		<< " is stored at " << pointsToAge << endl;

	delete pointsToAge;

	return 0;
}
