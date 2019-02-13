//
//  main.cpp
//  Shipping-Cost
//
//  Created by Dylan Kinzer on 2/8/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    // Declare Variables
    const double rateA = 3.5;  //  0 < w <= 1
    const double rateB = 5.5;  //  1 < w <= 3
    const double rateC = 8.5;  //  3 < w <= 10
    const double rateD = 10.5; // 10 < w <= 20
    double weight = 0.0;
    double shippingCost = 0.0;

    
    // Prompt User
    cout << "Please enter the shipping weight in pounds: ";
    cin >> weight;
    
    if (weight > 50)
    {
        cout << "Package cant be shipped" << endl;
        return -1;
    }
    else {
        if ( weight > 10 || weight <= 20)
                {
                    shippingCost = rateD;
                    cout << "Shipping Cost is : $" << shippingCost << endl;
                }
        else if ( weight > 3 && weight <= 10)
            {
                shippingCost = rateC;
                cout << "Shipping Cost is : $" << shippingCost << endl;
            }
        else if ( weight > 1 && weight <= 3)
            {
                shippingCost = rateB;
                cout << "Shipping Cost is : $" << shippingCost << endl;
            }
        else if ( weight > 0 && weight <= 1)
            {
                shippingCost = rateA;
                cout << "Shipping Cost is : $" << shippingCost << endl;
            }
    }
    return 0;
}
