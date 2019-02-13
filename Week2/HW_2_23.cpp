//
//  Program tests if point given is inside a
//  triangle with points (0,0) , (0,200), (100,0) and is a right triangle.
//  HW_2_23
//
//  Created by Dylan Kinzer on 2/12/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Function to see if point is within the triangle
void pointInTriangle(const double& x, const double& y)
{
    if (x > 0 && y > 0 && x + 2*y < 200.0)
    {
        cout << "The point (" << setprecision(4) << x << ", " << setprecision(4) << y << ") is in the triangle!" << endl;
    }
    else
    {
        cout << "The point (" << setprecision(4) << x << ", " << setprecision(4) << y << ") is not within the triangle!" << endl;
    }
}

// Function to Print lines dynamically
void printLines (int n)
{
    for (int i = 0; i<n; i++)
    {
        cout << "-";
    }
    cout << endl;
}

int main() {
    
    // Initialize Variables for x and y coordinates
    double xCord = 0.0;
    double yCord = 0.0;
    
    // Making the prompt a string variable
    // to know the length for the printLines function
    string xPrompt = "Enter X-Coordinate: ";
    string yPrompt = "Enter Y-Coordinate: ";
    
    //Get the length of the prompt + 4 so the printLine function can be exact
    int promptLength = static_cast<int>(xPrompt.size()) + 4;
    
    // Get X coordinate
    cout << xPrompt;
    cin >> xCord;

    // Get Y coordinate
    cout << yPrompt;
    cin >> yCord;
    
    //Run Functions
    printLines(promptLength);
    pointInTriangle(xCord, yCord);
    
    return 0;
}
