#include <iostream>
using namespace std;   

class Point {
    private :
        int x =  0;
        int y = 0;

    public : 
        int setX(int newX) {
            x = newX;
            return x;
        }

        int setY(int newY){
            y = newY;

            return y;
        }

        string distanceFromOrigin() const  {
         cout << " x : " << x - 0 << " y : "<< y - 0 << endl;

         return "---";
        }
};

int main(){
    Point  point;
    
    cout << "Point : " <<   point.distanceFromOrigin() << endl;
    cout << "Set X :  " << point.setX(5)  << " Set Y :  " << point.setY(10) << endl; 
    cout << "Distance From Origin" << point.distanceFromOrigin() << endl;
};
