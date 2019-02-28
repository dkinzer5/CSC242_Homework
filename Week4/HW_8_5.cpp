// This program adds matrices of size 3x3 and prints another 3x3 matrix of their sum. The formatting on
// this one is a little off but I'm putting it down for now. I had considered building each output as a string 
// and formatting it to work in all use cases but I need to focus on the FINAL.
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
const int N = 3;

//Function to prompt for a matrix
void promptForMatrix(double matrix[][N], string prompt)
{
	cout << prompt << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

//Function to add 2 matrices
void addMatrix(const double a[][N], const double b[][N], double c[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

//Function to print an addition of 2 matrices
void printResult(const double a[][N], const double b[][N], double c[][N])
{
	cout << "The addition of the matrices is: " << endl;
	string outputString;

	for (int i = 0; i < N; i++)
	{
		if (i == 1)
		{
			//For matrix a
			for (int j = 0; j < N; j++)
			{
				cout << a[i][j] << " ";
			}

			cout << setw(13);
			cout <<  "+";
			cout << setw(13);
			//For matrix b
			for (int k = 0; k < N; k++)
			{
				cout  << b[i][k] << " ";
			}

			cout << setw(13);
			cout <<  "=";
			cout << setw(13);
			//For matrix c
			for (int l = 0; l < N; l++)
			{
				cout << c[i][l] << " ";
			}
			cout << endl;
		}
		else
		{
			//For matrix a
			
			for (int j = 0; j < N; j++)
			{ 
				cout << a[i][j] << " ";
			}
			cout << outputString;
			cout << setw(26);
			//For matrix b
			for (int k = 0; k < N; k++)
			{
				cout << b[i][k] << " ";
			}

			cout << setw(26);
			//For matrix c
			for (int l = 0; l < N; l++)
			{
				cout << c[i][l] << " ";
			}
			cout << endl;
		}
		
	}
}

int main()
{
	//Initialize matrix size and 2 containers
	double matrix1[N][N];
	double matrix2[N][N];
	double matrix3[N][N];
	string prompt1 = "Enter matrix 1: ";
	string prompt2 = "Enter matrix 2: ";

	
	// Prompt User
	promptForMatrix(matrix1, prompt1);
	promptForMatrix(matrix2, prompt2);
	
	// Add matrices together
	addMatrix(matrix1, matrix2, matrix3);

	// Print to screen
	printResult(matrix1, matrix2, matrix3);

	return 0;
}

