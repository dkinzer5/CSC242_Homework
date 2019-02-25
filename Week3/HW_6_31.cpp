/*
Takes in 3 numbers, returns then in ASCENDING order
*/
#include <iostream>
#include <algorithm>

using namespace std;

//Display sorted numbers
void sort(double& num1, double& num2, double& num3)
{
	// Put numbers into an array
	double userArray[3] = { num1, num2, num3 };

	// Sort with sort
	sort(begin(userArray), end(userArray));

	// Display in ascending order
	cout << userArray[0] << ", " << userArray[1] << ", " << userArray[2] << endl;
}

int main()
{
	//Declare user variables
	double user1 = 0.0;
	double user2 = 0.0;
	double user3 = 0.0;

	// Promp user
	cout << "Enter first number: ";
	cin >> user1;
	cout << "Enter second number: ";
	cin >> user2;
	cout << "Enter third number: ";
	cin >> user3;

	//Run Function
	sort(user1, user2, user3);
	return 0;
}