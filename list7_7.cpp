#include <iostream>
using namespace std;

const double PI = 3.14159265;

double Area(double radius);
double Area(double radius, double height);

int main()
{
	cout << "Enter z for cylinder, c for circle: ";
	char userSelection = 'z';
	cin >> userSelection;

	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	if (userSelection == 'z')
	{
		cout << "Enter height: ";
		double height = 0;
		cin >> height;

		cout << "Area of cylinder is: " << Area(radius, height) << endl;
	}
	else
		cout << "Area of circle is: " << Area(radius) << endl;

	return 0;
}

double Area(double radius)
{
	return PI * radius * radius;
}

double Area(double radius, double height)
{
	return 2.0 * PI * radius * radius + 2.0 * PI * radius * height;
}
