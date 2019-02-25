/*
This program takes in 10 digits entered by the user and returns the mean and sample standard deviation.
It uses 2 functions, one to get the mean and another to get the sample standard deviation. Because of 
the way the assignment requires the functions to be made and the way that the STD DEV requires the mean,
the program has one global variable for the average, which allows it to be calculated in one function 
and used in another function. 
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Using one global variable to meet the assignment requirements and build the function exactly how it says
double average;

//Function to get the mean
double mean(const double x[], int size)
{
	//variable for accumulator and average
	double sum = 0.0;
	double avg = 0.0;

	//Loop through each index in x[] and accumulate
	for (int i = 0; i < size; i++)
	{
		sum += x[i];
	}

	// build the average
	avg = sum / size;

	return avg;
}

double deviation(const double x[], int size)
{
	double numerator = 0.0;
	int denominator = size - 1;

	for (int i = 0; i < size; i++)
	{
		//Initialize variables
		//double quantity = 0.0;
		//double quantitySquared= 0.0;

		double quantity = x[i] - average;
		double quantitySquared = pow(quantity, 2);
		numerator += quantitySquared;
	}

	double SD = sqrt(numerator / denominator);
	return SD;
}



int main()
{
	//Declare some variables
	const int n = 10;
	double data[n];
	double stDev = 0.0;

	// Prompt user
	cout << "Enter 10 numbers: " << endl;

	//Loop through each entry and store in array
	for (int i = 0; i < n; i++)
	{
		cin >> data[i];
	}

	//get average and std deviation
	average = mean(data, n);
	stDev = deviation(data, n);

	//print to screen
	cout << "The mean is: " << average << endl;
	cout << "The standard deviation is: " << stDev << endl;

	return 0;
}