/******************************************************************************
* AUTHORS    : Nick Terrazas & Zac Campos
* STUDENT ID : 1080548
* LAB #22    : Intro to Functions
* CLASS      : CS1A
* SECTION    : MW: 8am
* DUE DATE   : 04/09/18
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int AddTwoInts (int num1, int num2);
int MultiplyTwoInts (int num1, int num2);
int FindLargest (int num1, int num2);
float AverageTwoInts (int num1, int num2);

/******************************************************************************
 * INTRO TO FUNCTIONS
 *----------------------------------------------------------------------------
 * This program will output the sum, product, largest and average of two
 * integers that are input by the user.
 *----------------------------------------------------------------------------
 * INPUT:
 *  n1		: the first integer input by the user
 *  n2		: the second integer input by the user
 *
 * OUTPUT:
 *  sum		: the total sum of two integers
 *  product : the product of two integers
 *  largest : the largest of two integers
 *  avg		: the average of two integers
 *****************************************************************************/

int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS      : Student's Course
	 * SECTION    : Class Days and Times
	 * LAB_NUM    : Lab Number (specific to this lab)
	 * LAB_NAME   : Title of the Lab
	 * ------------------------------------------------------------------------
	 * FIRST_COL  : The size of the column for the user input
	 * SECOND_COL : The size of the column for the output values
	 *************************************************************************/
	const char PROGRAMMER[] = "Nick Terrazas & Zac Campos";
	const char CLASS[]      = "CS1A";
	const char SECTION[]    = "MW: 8am";
	const int  LAB_NUM      = 22;
	const char LAB_NAME[]   = "Intro to Functions";
	const int  FIRST_COL	= 26;
	const int  SECOND_COL   = 5;

	int n1;		 // IN & CALC  - first of two numbers used for calculations
	int n2;		 // IN & CALC  - second of two numbers used for calculations
	int sum;	 // CALC & OUT - holds the sum of two numbers
	int product; // CALC & OUT - the product of two numbers
	int largest; // CALC & OUT - the largest of two numbers
	float avg;   // CALC & OUT - the average of two numbers

	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
	cout << "*  "	   << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "	   << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9) << LAB_NUM    << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/**************************************************************************
	 * INPUT - prompt user and read in two inputs to be added
	 *************************************************************************/

	cout << left << setw(FIRST_COL);
	cout << "Enter the first integer: ";
	cin  >> n1;

	while(n1 != -999)	//The while loop will exit once -999 is entered
	{
		cout << setw(FIRST_COL) << "Enter the second integer: ";
		cin  >> n2;
		cin.ignore(10000,'\n');

		/**********************************************************************
		 * PROCESSING - Calls AddTwoInts, MultiplyTwoInts, FindLargest,
		 * AverageTwoInts.
		 *********************************************************************/
		sum		= AddTwoInts(n1,n2);		//Provides the sum of two ints
		product = MultiplyTwoInts(n1,n2);	//Provides the product of two ints
		largest = FindLargest(n1,n2);		//Provides the largest of two ints
		avg 	= AverageTwoInts(n1,n2);	//Provides the average of two ints

		/**********************************************************************
		 * OUTPUT - The sum, product, largest value and average are all output
		 *********************************************************************/
		cout << right << endl << endl;
		cout << "The SUM is:     " << setw(SECOND_COL) << sum     << endl;
		cout << "The PRODUCT is: " << setw(SECOND_COL) << product << endl;
		cout << "The LARGEST is: " << setw(SECOND_COL) << largest << endl;
		cout << setprecision(1)    << fixed;
		cout << "The AVERAGE is: " << setw(SECOND_COL) << avg     << endl;

		cout << left << setw(FIRST_COL);
		cout << endl <<  "Enter the first integer: ";
		cin  >> n1;
	}

	return 0;
}
