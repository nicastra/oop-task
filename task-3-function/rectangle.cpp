#include <iostream>
using namespace std;

// Function to calculate rectangle area
double rectangleArea(double length, double width) {
    return length * width;
}

int main() {
    // Rectangle dimensions
    double length = 5.0;
    double width = 3.0;
    
    // Calculate and display area
    cout << "Rectangle area: " << rectangleArea(length, width) << endl;
    
    return 0;
}