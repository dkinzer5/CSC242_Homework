#include <iostream>
#include <iomanip>
using namespace std;

// Prints formatted header as specified
void printHeader() {
	cout << setw(14) << left << "Kilograms";
	cout << setw(11) << left << "Pounds";
	cout << setw(6) << left << "|";
	cout << setw(11) << left << "Kilograms";
	cout << setw(14) << left << "Pounds" << endl;
}

// Prints table using for loop
void printTable()
{
	double conversionRate = 2.2;
	for (double i = 1, j = 20; i < 200; i+=2, j +=5)
	{
		double kilo1 = i;
		double pounds1 = kilo1 * conversionRate;
		double pounds2 = j;
		double kilo2 = pounds2 / conversionRate;
		cout << setw(14) << left << kilo1 << setw(11) << left <<  pounds1 << setw(6) << left << "|" << setw(11) << left << pounds2 <<setw(14) << left << kilo2 <<  endl;
	}
}

int main()
{
	cout << setprecision(2) << fixed;
	printHeader();
	printTable();
	return 0;
}