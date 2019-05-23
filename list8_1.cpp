#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	const double PI = 3.14159265;

	cout << "Integer age is located at: " << &age << endl;
	cout << "Double PI is located at: " << &PI << endl;

	return 0;
}
