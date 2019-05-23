#include <iostream>
using namespace std;

void CalcArea(const double * const ptrPi,
		const double * const ptrRadius,
		double * const ptrArea)
{
	if (ptrPi && ptrRadius && ptrArea)
		*ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
}

int main()
{
	const double PI = 3.14159265;

	cout << "Enter radius of circle: ";
	double radius = 0;
	cin >> radius;

	double area = 0;
	CalcArea(&PI, &radius, &area);

	cout << "Area is: " << area << endl;

	return 0;
}
