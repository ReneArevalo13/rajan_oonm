/*
   Example 2.5.2
   Math Function and Simple I/O
*/

#include <iostream>
#include <cmath>

int main() {
    // conversion values
    const double PI = 3.1415926, ANGLETORADIANS = PI/180.0;
    double dAngle; 

    // compute the angle
    std::cout << "Input an angle in degrees: ";
    std::cin >> dAngle;
    std::cout << "Sine of " << dAngle << " degrees is: " 
              << sin(dAngle*ANGLETORADIANS) << "\n";

    return 0;
}
