#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two integers: " << endl;
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	bool isEqual = (num1 == num2);
	cout << "Result of equality test: " << isEqual << endl;

	bool isUnequal = (num1 != num2);
	cout << "Result of inequality test: " << isUnequal << endl;

	bool isGreaterThan = (num1 > num2);
	cout << "Result of greater than test: " << isGreaterThan << endl;

	bool isLessThan = (num1 < num2);
	cout << "Result of less than test: " << isLessThan << endl;

	bool isGeq = (num1 >= num2);
	cout << "Result of greater than or equal to test: " << isGeq << endl;

	bool isLeq = (num1 <= num2);
	cout << "Result of less than or equal to test: " << isLeq << endl;

	return 0;
}
