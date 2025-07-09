/*
   Problem 2.4

*/

#include <iostream>
#include <cmath>

int main() {
    float fA = 1.2, fB = -35.6, fC = 1056.78, fD = 22.5, fE = 153.4;
    float fans_a, fans_b, fans_c, fans_d, fans_e;

    // compute values
    fans_a = fA + fB / fC;
    fans_b = sqrt(abs(fA+fB)/(fC-33.3));
    fans_c = fA + (sqrt(fC) + (fB*fB))/pow(fA, 0.4);
    fans_d = sin(fA) + cos(fC/pow((fA+fB),2));
    fans_e = tan(fD)/(tan(fD)-sin(fE));

    // Print out answers
    std::cout << "(a): " << fans_a << "\n";
    std::cout << "(b): " << fans_b << "\n";
    std::cout << "(c): " << fans_d << "\n";
    std::cout << "(d): " << fans_d << "\n";
    std::cout << "(e): " << fans_e << "\n";

    return 0;
}
