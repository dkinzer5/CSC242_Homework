/*
This pogram prints a PI table showing what PI equals when using different 
values of 'i' from the formula. As 'i' increases, the value of PI becomes 
more and more accurate.

HW_5_27

Created by Dylan Kinzer on 2/23/19.
Copyright © 2019 Dylan Kinzer. All rights reserved.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Print a readable header at the top 
void printHeader()
{
	cout << setw(18) << left << "i value" << "PI value" << endl;
}

//Print a value table that shows what pi equals 
//when using the series formula at different i values
void printPiTable()
{
	// Declare variables to sum the series 
	//and another to increment the value of i by 10,000
	double sum = 0.0;
	int increment = 10000;

	//keep going until at 100,000
	while (increment <= 100000)
	{
		for (int i = 1; i < increment; i++)
		{
			int exponent = i + 1;
			double numerator = pow(-1, exponent);
			double denominator = 2 * i - 1;
			double myNumber = numerator / denominator;
			sum += myNumber;
		}

		//Build PI variable and output the necessary info, formatted properly
		double PI = 4 * sum;
		cout << setprecision(6) << fixed;
		cout << setw(8) << left << increment << "--------" << "> " << PI << endl;
		increment += 10000;
		sum = 0;
	}
}

int main()
{
	
	printHeader();
	printPiTable();

	return 0;
}
