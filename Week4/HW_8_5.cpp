#include <iostream>

using namespace std;
const int N = 3;

void addMatrix(const double a[][N], const double b[][N], double c[][N])
{

}

// prompts user and stores matrix entries appropriately

int main()
{
	//Initialize matrix size and 2 containers
	
	double matrix1[N][N];
	double matrix2[N][N];

	// Prompt user for 2 matrices of size 9
	cout << "Enter matrix1: ";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> matrix1[i][j];
		}
	}

	cout << "Enter matrix2: ";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> matrix2[i][j];
		}
	}

	/*for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}
*/



	return 0;
}