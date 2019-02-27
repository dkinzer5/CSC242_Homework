#include <iostream>

using namespace std;
const int N = 3;

void addMatrix(const double a[][N], const double b[][N], double c[][N])
{
    cout << "The addition of the matrices is: "<<endl;
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        cout << endl;
    }
}

void printMatrix()
{
    for(int i = 0; i<N; i++)
    {
        //For matrix a
        for(int j=0; j<N; j++)
        {
            
        }
        
        //For matrix b
        for(int k = 0; k<N; k++)
        {
            
        }
        
        //For matrix c
        for(int l = 0; l<N; l++)
        {
            
        }
        
        
    }
}

// prompts user and stores matrix entries appropriately

int main()
{
    //Initialize matrix size and 2 containers
    double matrix1[N][N];
    double matrix2[N][N];
    double matrix3[N][N];
    
    // Prompt user for 2 matrices of size 9
    //****************************************************
    cout << "Enter matrix1: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter matrix2: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    //*****************************************************
    
    addMatrix(matrix1, matrix2, matrix3);
    
    
    return 0;
}

