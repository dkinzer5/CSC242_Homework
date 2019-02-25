#include <iostream>
#include <iomanip>
using namespace std;

// Convert celsius to farenheit
double celsiustoFarenheit(double celsius)
{
	double farenheit = (9.0 / 5) * celsius + 32;
	return farenheit;
}

// Convert farenheit to celsius
double farenheitToCelsius(double farenheit)
{
	double celsius = (5.0 / 9) * (farenheit - 32);
	return celsius;
}

void printHeader()
{
	cout << setw(12) << left << "Celsius" << setw(15) << left << "Farenheit" << setw(6) << left << "|" << setw(15) << left << "Farenheit" << setw(12) << left << "Celsius" << endl;
}

void printTable()
{
	for (int c = 40, f = 120; c > 30; c--, f -= 10)
	{
		cout << setw(12) << left << c << setw(15) << left << celsiustoFarenheit(c) << setw(6) << left << "|" << setw(15) << left << f << setw(12) << left << farenheitToCelsius(f) << endl;
	}
}
int main()
{
	// Format floating point numbers with 2 decimals
	cout << fixed << setprecision(2);

	//Print header with table below
	printHeader();
	printTable();

	return 0;
}