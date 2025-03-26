#include <iostream>
using namespace std;   

class Student{
private: 
    string name;
    string id;
    char grade;

public  : 
    void setName(string inputName){
        name =  inputName;
    }

    void setId(string inputId){
        id = inputId;
    }

    void setGrade(char inputGrade){
        grade = inputGrade;
    }


    string getName() const { return name;}
    string getId() const { return id;}
    char getGrade() const { return grade;}


   void displayInfo() const{
    cout << "Student: " << name << "( ID: " << id << ", Grade: " << grade << ")" << endl;
   } 

};

int main(){
    Student student;
    student.setName("Nicola");
    student.setId("S12345");
    student.setGrade('A');
    student.displayInfo();
}