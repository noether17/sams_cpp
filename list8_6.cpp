#include <iostream>
using namespace std;

int main()
{
	cout << "size of fundamental types -\n";
	cout << "size of char = " << sizeof(char) << endl;
	cout << "size of int = " << sizeof(int) << endl;
	cout << "size of double = " << sizeof(double) << endl;

	cout << "size of pointers to fundamental types -\n";
	cout << "size of pointer to char = " << sizeof(char*) << endl;
	cout << "size of pointer to int = " << sizeof(int*) << endl;
	cout << "size of pointer to double = " << sizeof(double*) << endl;

	return 0;
}
