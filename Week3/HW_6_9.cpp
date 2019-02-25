#include <iostream>
#include <iomanip>
using namespace std;

double celsiustoFarenheit(double celsius)
{
	double farenheit = (9.0 / 5) * celsius + 32;
	return farenheit;
}

double farenheitToCelsius(double farenheit)
{
	double celsius = (5.0 / 9) * (farenheit - 32);
	return celsius;
}

int main()
{
	cout << fixed << setprecision(2);
	cout << setw(12) << left << "Celsius" << setw(15) << left << "Farenheit" << setw(6) << left << "|" << setw(15) << left << "Farenheit" << setw(12) << left << "Celsius" << endl;
	for (int c = 40, f = 120; c > 30; c--, f -= 10)
	{
		cout << setw(12) << left << c << setw(15) << left << celsiustoFarenheit(c) << setw(6) << left << "|" << setw(15) << left << f << setw(12) << left << farenheitToCelsius(f) << endl;
	}

	return 0;
}