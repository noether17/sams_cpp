#include <iostream>
using namespace std;

int main()
{
	int original = 30;
	cout << "original = " << original << " at " << &original << endl;

	const int& constRef = original;
	cout << "constRef = " << constRef << " at " << &constRef << endl;

	original = 25; // no compile error in changing original value
	cout << "original = " << original << " at " << &original << endl;
	cout << "constRef = " << constRef << " at " << &constRef << endl;

	return 0;
}
