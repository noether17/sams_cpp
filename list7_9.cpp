#include <iostream>
using namespace std;

const double PI = 3.14159265;

void Area(double radius, double& result)
{
	result = PI * radius * radius;
}

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	double areaFetched = 0;
	Area(radius, areaFetched);

	cout << "The area is: " << areaFetched << endl;

	return 0;
}
