#include <iostream>
using namespace std;

enum CardinalDirections
{
	North = 25,
	South,
	East,
	West
};

int main()
{
	cout << "Displaying directions and their symbolic values\n";
	cout << "North: " << North << endl;
	cout << "South: " << South << endl;
	cout << "East: " << East << endl;
	cout << "West: " << West << endl;

	CardinalDirections windDirection = South;
	cout << "Variable windDirection = " << windDirection << endl;

	return 0;
}
