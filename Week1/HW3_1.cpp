
#include <iostream>
#include <cmath>

double computeDiscr(double dga, double dgb, double dgc)
{
    double temp =  dgb*dgb -4 *dga*dgc;
    return temp;
}


using std::cout;
using std::cin;
using std::endl;

int main() {
    
    //declare variables
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    
    // prompt user
    cout << "Enter a: ";
    cin >> a;
    cout << endl;
    
    cout << "Enter b: ";
    cin >> b;
    cout << endl;
    
    cout << "Enter c: ";
    cin >> c;
    cout << endl;
    
    if (a == 0)
    {
        cout << "I'm sorry a is 0 - there is no solution - goodbye" << endl;
        return -1;
    }
    
    //Initialize discriminate
    double temp_discr = 0.0;
    temp_discr = computeDiscr(a,b,c);
    
    if( temp_discr > 0)
    {
        double root1 = (-b + sqrt(temp_discr))/(2.0 * a);
        double root2 = (-b - sqrt(temp_discr))/(2.0 * a);
        cout << "First root is " << root1 << endl;
        cout << "Second root is " << root2 << endl;
        
    }
    else if (temp_discr == 0)
    {
        //display 1 root
        double root = -b / (2.0*a);
        cout << "Zero Discriminant: Root is " << root << endl;
    }
    else // This covers the case if (temp_discr < 0)
    {
        // display message
        cout << "Equation has no real roots" << endl;
        return -1;
    }
    
    
    return 0;
}
