#include <iostream>
using namespace std;

class SimpleRectangle {
    private:
        double length;
        double width;
        
    public:
        SimpleRectangle(double l, double w) : length(l), width(w) {}
        double area() const { return length * width; }
    };


int main() {
   // Create a rectangle with length 5.0 and width 3.0
        SimpleRectangle rect(5.0, 3.0);
        
        // Calculate and display the area
        cout << "Rectangle area: " << rect.area() << endl;
        
        return 0;
}