#include <iostream>
using namespace std;

const double PI = 3.14159265;

auto Area(double radius)
{
	return PI * radius * radius;
}

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	cout << "Area is: " << Area(radius) << endl;

	return 0;
}
