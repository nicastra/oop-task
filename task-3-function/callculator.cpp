#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    cout << "5 + 3 = " << add(5, 3) << endl;
    cout << "5 - 3 = " << subtract(5, 3) << endl;
    cout << "5 * 3 = " << multiply(5, 3) << endl;
    cout << "5 / 3 = " << divide(5, 3) << endl;
    cout << "5 / 0 = " << divide(5, 0) << endl; 
    
    return 0;
}