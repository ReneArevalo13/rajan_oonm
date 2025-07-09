/*
   Example 2.5.1
   Data Types with formatted outputs
*/

#include <iostream>
#include <iomanip>    // header file for io manipulation

int main() {

    // illustrate integer arithmetic
    int nA, nB, nC;
    nA = 100000; nB = 200000;
    nC = nA + nB;
    std::cout << "int: " << nA << " + " << nB << " = " << nC << std::endl;

    long lA, lB, lC;
    lA = -64000L; lB = -12800L;
    lC = lA * lB;
    std::cout << "long: " << lA << " * " << lB << " = " << lC << std::endl;

    // illustrate floating point arithmetic
    std::cout << std::setprecision(15);  // 12 decimal places
    float fX, fY, fZ;
    fX = 1.0f/3.0f; fY = 1.0f/16.0f;
    fZ = fX/fY;
    std::cout << "float: "  << std::setw(20) << fX << " / "
                            << std::setw(10) << fY << " = "
                            << std::setw(20) << fZ << std::endl;

    std::cout << std::setprecision(15);  // 15 decimal places
    double dX, dY, dZ;
    dX = 1.0/3.0; dY = 1.0/16.0;
    dZ = dX/dY;
    std::cout << "double: " << std::setw(20) << dX << " / "
                             << std::setw(10) << dY << " = "
                             << std::setw(20) << dZ << std::endl;

    return 0;
}
