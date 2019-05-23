#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void DisplayNums(vector<int>& dynArray)
{
	for_each (dynArray.begin(), dynArray.end(),
			[](int element) { cout << element << " "; } );

	cout << endl;
}

int main()
{
	vector<int> myNums;
	myNums.push_back(501);
	myNums.push_back(-1);
	myNums.push_back(25);
	myNums.push_back(-35);

	DisplayNums(myNums);

	cout << "Sorting them in descending order\n";

	sort(myNums.begin(), myNums.end(),
			[](int num1, int num2) { return num1 > num2; } );

	DisplayNums(myNums);

	return 0;
}
