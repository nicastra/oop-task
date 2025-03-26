#include <iostream>
#include <string>
using namespace std;


string getStudentInfo(string name, string id, char grade) {
    return "Student: " + name + " (ID: " + id + ", Grade: " + grade + ")";
}

int main() {
    string name = "Nicola";
    string id = "S12345";
    char grade = 'A';
    

    cout << getStudentInfo(name, id, grade) << endl;
    

    grade = 'B';
    cout << getStudentInfo(name, id, grade) << endl;
    
    return 0;
}