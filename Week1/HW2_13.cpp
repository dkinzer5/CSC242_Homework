//
//  main.cpp
//  Monthly-Interest
//
//  Created by Dylan Kinzer on 2/7/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>

using namespace std;
int main() {
    
    // Declare Variables
    int months = 6;
    double monthlySavings = 0.0;
    double sum = 0.0;
    double interestRate = 0.00417;
    double multiplier = 1 + interestRate;
    
    //prompt user for amount
    cout << "Enter the monthly savings amount: ";
    cin >> monthlySavings;
    
   //Loop for 6 months
    for (int i=0; i < months; i++)
    {
        sum += monthlySavings;
        sum *= multiplier;
    }
    cout << "--------------------------------------------------\n";
    cout << "After 6 months, the total amount would be: $" << sum << endl;
   
    return 0;
}
