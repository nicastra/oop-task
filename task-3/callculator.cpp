#include <iostream>
using namespace std;   


class callculator
{

private: 
    double  lastResult = 0; 
    /* data */
public:
 double add(double inputA ,  double inputB) {
    return lastResult = inputA + inputB;
 }

  double substrack(double inputA, double inputB){
    return lastResult = inputA - inputB;
  }

  double multiplication(double inputA, double inputB){
    return lastResult = inputA * inputB;
  }


  double devision(double inputA, double inputB){
    if(inputB != 0) return lastResult = 0;

    return inputA / inputB;
  }
};

int main(){
  callculator  calc;
  cout << "5 + 3 = " << calc.add(5, 3) << endl;
  cout << "5 * 3 = " << calc.multiplication(5, 3) << endl;
  
  return 0;
}







