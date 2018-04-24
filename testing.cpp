#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const int AR_SIZE = 5;

	int index;
	int compareIndex;
	int intAr[AR_SIZE] = {4,8,9,3,6};

	compareIndex = 1;

	for(index = 0; index < AR_SIZE; index++)
	{
		if(intAr[index] < intAr[compareIndex])
		{
			compareIndex = index;
		}
	}

	cout << intAr[compareIndex];

	return 0;
}
