/*
   Problem 2.2
   Write a program to interactively obtain an integer value and display 
   (a) the negative of that number, (b) its absolute value, and its square
*/

#include<iostream>
#include<cmath>

int main() {
    int input;
    std::cout << "Please input an integer value: ";
    std::cin >> input;
    std::cout << "The negative is: " << -input << "\n"
              << "The absoulte vaue is: " << abs(input) << "\n"
              << "The square value is: " << input * input << "\n";
    return 0;
}

