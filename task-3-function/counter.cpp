#include <iostream>
using namespace std;

int increment(int count) {
    return count + 1;
}

int getCount(int count) {
    return count;
}

int main() {
    int count = 0; 
    
    cout << "Count: " << getCount(count) << endl;
    
    count = increment(count);
    cout << "Incrementing + " << count << endl;
    
    cout << "Count: " << getCount(count) << endl;
    
    return 0;
}