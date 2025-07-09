/*
   Problem 2.6
   Write a program to carry out the following conversions (a) obtain the
   length in inches and convert it to meters, (b) obtain the temperature
   farenheit and convert it to celcius, and (c) obtain the mass in slugs
   and convert it to kilograms.
*/

#include <iostream>
#include <cmath>

int main() {
    float inches, meters, faren, cels, slugs, kilos;

    // part a
    std::cout << "Input a length in inches: ";
    std::cin >> inches;
    meters = inches * 0.0254;
    std::cout << "The length in meters is: " << meters << "\n";

    // part b
    std::cout << "Input a temperature in degrees farenheit: ";
    std::cin >> faren;
    cels = (faren - 32) / 1.8;
    std::cout << "The temperature in celcius is: " << cels << "\n";

    // part c
    std::cout << "Input a mass in slugs: ";
    std::cin >> slugs;
    kilos = slugs * 14.5939;
    std::cout << "The mass in kilograms is: " << kilos<< "\n";

    return 0;

}
