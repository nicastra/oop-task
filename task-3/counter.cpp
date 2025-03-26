#include <iostream>
using namespace std;   

class Counter{
    private: 
        int count = 0;

    public :
        int increment(){
            return  ++count;
        }
        
        int getCount() const {
            return count;
        }
};

int main(){
    Counter  counter;
    cout << "Count : " <<   counter.getCount() << endl;
    cout << "Incrementing + " << counter.increment() << endl;
    cout << "Count : " <<   counter.getCount() << endl;

}
