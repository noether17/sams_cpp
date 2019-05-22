#include <iostream>
using namespace std;
const double PI = 3.14159265;

void QueryAndCalculate()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	cout << "Area: " << PI * radius * radius << endl;

	cout << "Do you wish to calculate circumference (y/n)? ";
	char calcCircum = 'n';
	cin >> calcCircum;

	if (calcCircum == 'n')
		return;

	cout << "Circumference: " << 2 * PI * radius << endl;
	return;
}

int main()
{
	QueryAndCalculate();

	return 0;
}
