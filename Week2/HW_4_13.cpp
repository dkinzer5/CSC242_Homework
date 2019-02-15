//
//  This program takes in a hex digit and returns its binary value,
//  taking into consideration non-hex digits being entered and handling the error.
//  HW_4_13
//
//  Created by Dylan Kinzer on 2/13/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string convertToHex (char hexValue) {
    switch (toupper(hexValue)) {
        case '0': return "0000";
            break;
        case '1': return "0001";
            break;
        case '2': return "0010";
            break;
        case '3': return "0011";
            break;
        case '4': return "0100";
            break;
        case '5': return "0101";
            break;
        case '6': return "0110";
            break;
        case '7': return "0111";
            break;
        case '8': return "1000";
            break;
        case '9': return "1001";
            break;
        case 'A': return "1010";
            break;
        case 'B': return "1011";
            break;
        case 'C': return "1100";
            break;
        case 'D': return "1101";
            break;
        case 'E': return "1110";
            break;
        case 'F': return "1111";
            break;
        default: return "-1";
            break;
    }
}

int main() {
    char userValue;
    
    cout << "Enter a hex digit: ";
    cin >> userValue;
    
    if (convertToHex(userValue) == "-1"){
        cout << userValue << " is not a hex digit..." << endl;
    } else
        cout << "The binary value is: " << convertToHex(userValue) << endl;
    
    return 0;
}
