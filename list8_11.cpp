#include <iostream>
using namespace std;

int main()
{
	int myNums[5];

	int *pointToNums = myNums;

	cout << "pointToNums = " << pointToNums << endl;
	cout << "myNums = " << myNums << endl;
	cout << "&myNums[0] = " << &myNums[0] << endl;

	return 0;
}
