//
//  main.cpp
//  HW_5_27
//
//  Created by Dylan Kinzer on 2/23/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void printHeader()
{
    cout << setw(15)<< left << "i value" << "PI value" << endl;
}
int main()
{
    double sum = 0.0;
    int increment = 10000;
    
    printHeader();
    while(increment <= 100000)
    {
        for (int i = 1; i<increment; i++)
        {
            int exponent = i + 1;
            double numerator = pow(-1, exponent);
            double denominator = 2*i - 1;
            double myNumber = numerator / denominator;
            sum += myNumber;
        }
        
        double PI = 4*sum;
        increment += 10000;
        sum = 0;
    }
   
    
    
    return 0;
}
