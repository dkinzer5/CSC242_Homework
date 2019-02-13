//
//  main.cpp
//  Gratuity
//
//  Created by Dylan Kinzer on 2/7/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Function to Print lines
void printLines()
{
    for (int i = 0; i<15; i++) {
        cout << "-";
    }
    cout << endl;
}

// Main Function
int main() {
    
    // Initialize Variables
    double gratuityRate = 0.0;
    double subtotal = 0.0;
    
    // Get the subtotal & store
    cout << "Enter subtotal: ";
    cin >> subtotal;
    
    // Get the gratuity amount & store
    cout << "Enter the gratuity rate in %: ";
    cin >> gratuityRate;
    
    // Calculate new values
    double gratuity = gratuityRate / 100;
    double tipAmount = subtotal * gratuity;
    double total = subtotal + tipAmount;
    
    //  Print out "receipt"
    cout << endl;
    cout << "Subtotal: $" << subtotal << endl;
    
    cout << "Tip" << "(" << gratuityRate << "%): $" << tipAmount << endl;
    printLines();
    cout << "TOTAL:    $" << total << endl << endl;
    
    return 0;
}
