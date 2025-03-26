#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string describePoint(int x, int y) {
    return "x: " + to_string(x) + ", y: " + to_string(y);
}


double distanceFromOrigin(int x, int y) {
    return sqrt(x*x + y*y);
}

int main() {
    int x = 0;
    int y = 0;
    
 
    cout << "Point: " << describePoint(x, y) << endl;
    
    x = 5;
    y = 10;
    cout << "Set X: " << x << " Set Y: " << y << endl;
    
  
    cout << "Point: " << describePoint(x, y) << endl;
    cout << "Distance From Origin: " << distanceFromOrigin(x, y) << endl;
    
    return 0;
}