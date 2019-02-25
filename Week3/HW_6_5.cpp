/*
Takes in 3 numbers and returns then in ASCENDING order
*/

#include <iostream>
#include <algorithm>

using namespace std;

//Displays sorted numbers
void displaySortedNumbers(double num1, double num2, double num3)
{
	// Map values into an array
	double userArray[3] = { num1, num2, num3 };

	// Use the sort function from <algorithm>
	sort(begin(userArray), end(userArray));

	// Display in ascending order
	cout << userArray[0] << ", " << userArray[1] << ", " << userArray[2] << endl;
}

int main()
{
	//Variables to store user entry
	double user1 = 0.0;
	double user2 = 0.0;
	double user3 = 0.0;
	
	// Prompt user
	cout << "Enter first number: ";
	cin >> user1;
	cout << "Enter second number: ";
	cin >> user2;
	cout << "Enter third number: ";
	cin >> user3;

	//Run Function
	displaySortedNumbers(user1, user2, user3);
	return 0;
}