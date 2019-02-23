#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

//Convert Percent to decimal 
double percentToDecimal(const double& x) 
{
	return x / 100;
}

//Calculates Monthly Gain
double calculateGain(const double& principle, const double& interest)
{
	const int months = 12;
	double gain = (principle * interest) / months;
	return gain;
}

void printLines(const int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "-";
	}
	cout << endl;
}

int main()
{

	//Variables for Principle, APY, and months in a year
	double P = 0.0;
	double APY = 0.0;
	int mDate = 0;

	//Prompt user
	cout << "Enter the initial deposit amount: ";
	cin >> P;

	//Playing with a little bit of input validation..
	while(!cin)
	{
		cout << "Invalid Entry, enter initial deposit amount: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> P;
	}

	cout << "Enter the annual percentage yield: ";
	cin >> APY;
	
	//Playing with a little bit of input validation..
	while (!cin)
	{
		cout << "Invalid Entry, enter APY: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> APY;
	}

	cout << "Enter the maturity period (number of months): ";
	cin >> mDate;

	//Playing with a little bit of input validation..
	while (!cin)
	{
		cout << "Invalid Entry, enter maturity date in months: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> mDate;
	}

	// Print out to screen
	printLines(20);
	cout << setw(10) << left << "Month" << "CD Value" << endl;

	//iterate through each month and calculate new principle
	for (int i = 1; i < mDate + 1; i++)
	{
		P += calculateGain(P, percentToDecimal(APY));
		cout << fixed << setprecision(2) << setw(10) << left << i << P << endl;
	}

	return 0;
}