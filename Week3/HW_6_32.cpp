#include <iostream>
#include <cmath>
using namespace std;

void solveQuadraticEquation(double a, double b, double c, double& discriminant, double& r1, double& r2)
{
	//Check if the discriminant is greater than 0, equal to 0, or less than 0
	if (discriminant > 0)
	{
		cout << "First root: " << r1 << endl;
		cout << "Second root: " << r2 << endl;
	}
	else if (discriminant == 0)
	{
		cout << "The root is: " << r1 << endl;
	}
	else
	{
		cout << "the equation has no roots" << endl;
	}
}
int main()
{
	//Declare variables for user input
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	
	//Variable for discriminant
	double discriminant = pow(b, 2) - (4*a*c);

	// build numerators for r1 & r2 and the denominator
	double numerator1 = -b + sqrt(discriminant);
	double numerator2 = -b - sqrt(discriminant);
	double denominator = 2 * a;

	//Build r1 and r2
	double r1 = numerator1 / denominator;
	double r2 = numerator2 / denominator;

	//Use the provided function
	solveQuadraticEquation(a, b, c, discriminant, r1, r2);


	return 0;
}