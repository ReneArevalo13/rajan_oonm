/*
   Problem 2.7
   Write a program to obtain the (x, y, z) coordinates of two points. Now
   compute and display the the distance between the two points, and (b) a
   unit vector from point 1 to point 2 (display the vector ai + bj + ck).
*/

#include <iostream>
#include <cmath>

int main() {

    float vP1[3] = {0};
    float vP2[3] = {0};
    float vUnit[3] = {0};
    float distance;
    std::cout << "Enter the x coordinates of point 1: ";
    std::cin >> vP1[0];
    std::cout << "Enter the y coordinates of point 1: ";
    std::cin >> vP1[1];
    std::cout << "Enter the z coordinates of point 1: ";
    std::cin >> vP1[2];
    std::cout << "Enter the x coordinates of point 2: ";
    std::cin >> vP2[0];
    std::cout << "Enter the y coordinates of point 2: ";
    std::cin >> vP2[1];
    std::cout << "Enter the z coordinates of point 2: ";
    std::cin >> vP2[2];
    // calculate
    float x_diff = vP2[0] - vP1[0];
    float y_diff = vP2[1] - vP1[1];
    float z_diff = vP2[2] - vP1[2];
    std::cout << vP2[2] << " - " << vP1[2] << "\n";
    std::cout << x_diff << "\n";
    std::cout << y_diff << "\n";
    std::cout << z_diff << "\n";
    
    distance = sqrt((x_diff*x_diff)+(y_diff*y_diff)+(z_diff*z_diff));
    vUnit[0] = x_diff/distance;
    vUnit[1] = y_diff/distance;
    vUnit[2] = z_diff/distance;
    // output
    std::cout << "The distance between the two points is: " << distance 
              << "\n";
    std::cout << "The unit normal vector is: a" << vUnit[0] << " + b" 
              << vUnit[1] << " + c" << vUnit[2] << "\n";
    
    return 0;
}
