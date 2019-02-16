//
//  alternate.cpp
//  HW_2_35
//
//  Created by Dylan Kinzer on 2/16/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

// Function to get ISBN-10
string getISBN(string& input)
// Passed by ref but not declared const because input will have last number appended
{
    //Declare an array to store each number
    int isbn[9];
    
    //loop through each letter converting to interger and storing in array
    for (int i = 0; i<input.length(); i++)
    {
        isbn[i] = input.at(i) - '0';
    }
    
    //set each variable individually for ease of use
    int d1 = isbn[0];
    int d2 = isbn[1];
    int d3 = isbn[2];
    int d4 = isbn[3];
    int d5 = isbn[4];
    int d6 = isbn[5];
    int d7 = isbn[6];
    int d8 = isbn[7];
    int d9 = isbn[8];
    
    // Calculate checksum
    int checksum = (d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 + d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9) % 11;
    
    //Check if 'X' is needed or not
    if (checksum == 10)
        return input + "X";
    else
    {
        // changing checksum to string and appending to input
        input += to_string(checksum);
        return input;
    }
}
void printLines(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "-";
    }
    cout << endl;
}
int main ()
{
    string userInput;
    cout << "Enter the ISBN-9: ";
    cin >> userInput;
    printLines(30);
    cout << "ISBN-10: " << getISBN(userInput) << endl;
    printLines(30);
    
    return 0;
}

