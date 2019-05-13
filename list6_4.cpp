#include <iostream>
using namespace std;

int main()
{
	enum DaysOfWeek
	{
		Sunday = 0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};

	cout << "Find what days of the week are named after!\n";
	cout << "Enter a number for a day (Sunday = 0): ";

	int dayInput = Sunday;
	cin >> dayInput;

	if (dayInput == Sunday)
		cout << "Sunday was named after the Sun\n";
	else if (dayInput == Monday)
		cout << "Monday was named after the Moon\n";
	else if(dayInput == Tuesday)
		cout << "Tuesday was named after Mars\n";
	else if (dayInput == Wednesday)
		cout << "Wednesday was named after Mercury\n";
	else if (dayInput == Thursday)
		cout << "Thursday was named after Jupiter\n";
	else if (dayInput == Friday)
		cout << "Friday was named after Venus\n";
	else if (dayInput == Saturday)
		cout << "Saturday was named after Saturn\n";
	else
		cout << "Wrong input; execute again\n";

	return 0;
}
