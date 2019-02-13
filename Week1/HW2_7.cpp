//
//  main.cpp
//  Mins-To-Years
//
//  Created by Dylan Kinzer on 2/7/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include<iostream>

using namespace std;

void printLines()
{
    for (int i=0; i<50; i++){
        cout << "-";
    }
    cout << endl;
}

int main() {
    //Initialize user entered minutes
    unsigned int userMinutes = 0.0;
    
    // Get user minutes
    cout << "Enter the number of minutes: ";
    cin >> userMinutes;
    
    // Calculate values
    double hours = userMinutes / 60.0;
    double days = hours / 24.0;
    double years = days / 365.0;
    
    //Print to screen
    printLines();
    cout << userMinutes << " minutes is approximately: " << endl;
    cout << static_cast<int>(years) << " years & " << static_cast<int>(days) % 365 << " days" << endl;
    printLines();
    
    
    
    return 0;
}

