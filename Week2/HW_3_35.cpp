/*
	This program takes an ISBN-9 and returns ISBN-10.
	Simple program for my college class homework. I did not
	use header files and other source files because this is just
	a simple program that is much easier turned in as a single .cpp.

*/




#include <iostream>
#include <iomanip>

using namespace std;

/* 
	This Function takes first 9 digits of ISBN and returns the 10th digit after calculation.
	If value is 10, function returns ascii representation of 'X'
*/

int findISBN(int number)
{
	const int asciiX = 88;

	int d9 = number % 10;
	number /= 10;
	int d8 = number % 10;
	number /= 10;
	int d7 = number % 10;
	number /= 10;
	int d6 = number % 10;
	number /= 10;
	int d5 = number % 10;
	number /= 10;
	int d4 = number % 10;
	number /= 10;
	int d3 = number % 10;
	number /= 10;
	int d2 = number % 10;
	number /= 10;
	int d1 = number % 10;
	number /= 10;

	int checksum = (d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 + d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9) % 11;

	if (checksum == 10)
	{
		return asciiX;
	}
	else
	{
		return checksum;
	}
}

void printLines(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "-";
	}
	cout << endl;
}


int main() {

	// Declare variable
	unsigned int firstNine;

	// Prompt user
	cout << "Enter the first 9 digits as an integer: ";
	cin >> firstNine;

	//Check if 10th digit is X or a number
	if (findISBN(firstNine) == 88)
	{
		char X = findISBN(firstNine);
		printLines(30);
		cout << "The ISBN-10 is : " << setw(9) << setfill('0') << firstNine << X << endl;
		printLines(30);
	}
	else
	{
		printLines(30);
		cout << "The ISBN-10 is : " << setw(9) << setfill('0') << firstNine << findISBN(firstNine) << endl;
		printLines(30);
	}
	
	return 0;
}