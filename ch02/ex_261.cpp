/*
   Example 2.6.1
   Vector Data Types
*/

#include <iostream>

int main() {
    const int MAXINPUT = 3;
    int nVNumbers[MAXINPUT];
    int nSum;;

    // get user input
    std::cout << "Input the first number: ";
    std::cin >> nVNumbers[0];
    std::cout << "Input the second number: ";
    std::cin >> nVNumbers[1];
    std::cout << "Input the third number: ";
    std::cin >> nVNumbers[2];
    // compute the sum
    nSum = nVNumbers[0] + nVNumbers[1] + nVNumbers[2];

    // display the output 
    std::cout << "The sum of " << nVNumbers[0] << ", " << nVNumbers[1]
              << ", " << nVNumbers[2] << "\n" << "is: " << nSum << "\n";

    return 0;
}

