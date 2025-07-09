/*
   Problem 2.3
   Write a program to interactively obtain a floating-point value, x from
   each of the following three cases and display (a) the square root of
   that number, (b) its absolute value, and (c) 4.5^x.
*/

#include <iostream>
#include <cmath>

int main() {
    float input;
    std::cout << "Input a floating point value: ";
    std::cin >> input;
    float raised = pow(4.5, input);
    float sq_rt = sqrt(input);
    float absol = abs(input);
    std::cout << "The square root is: " << sq_rt << "\n"
              << "The absolute value is: " << absol << "\n"
              << "4.5 raised to that value is: " << raised << "\n";
    return 0;
}
