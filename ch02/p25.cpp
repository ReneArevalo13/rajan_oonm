/*
   Problem 2.5
   Write a program to obtain the length and width of a rectangle,
   and compute and display the perimeter and the area of the rectangle.
*/

#include <iostream>
#include <cmath>

int main() {
    // get user inputted length and width
    int width, height;
    std::cout << "Input a rectangle height: ";
    std::cin >> height;
    std::cout << "Input a rectangle width: ";
    std::cin >> width;
    // calculate area and perimeter
    int area, perimeter;
    area = height * width;
    perimeter = 2*height + 2*width;
    // output
    std::cout << "The area of the rectangle is: " << area << "\n";
    std::cout << "The perimeter of the rectangle is: " << perimeter << "\n";
    return 0; 
}
