#include <iostream>
#include <iomanip>
using namespace std;

int AddTwoInts (int num1, int num2)
{
	return num1 + num2;
}

int MultiplyTwoInts (int num1, int num2)
{
	return num1 * num2;
}

int FindLargest (int num1, int num2)
{
	int largest;

	if(num1 > num2)
	{
		largest = num1;
	}
	else
	{
		largest = num2;
	}

	return largest;
}

float AverageTwoInts (int num1, int num2)
{
	return (float(num1) + num2) / 2;
}
