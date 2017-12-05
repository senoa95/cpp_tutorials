#include <iostream>
using namespace std;

double multiply(double num1,double num2); //function declaration with arguments/inputs

double divide(double num1, double num2);   // Function declaration:

int main(int argc, char const *argv[]) {
  double num1;  // Declaration of variable
  double num2;
  double product;

  num1 = 65.4;  // Definition/initialization of the variable;
  num2 = 0;

  product = multiply(num1, num2);

  cout<<product<<endl;


  cout<<" The result of divide is: "<<divide(num1,num2)<<endl;

  return 0;
}

double multiply(double num1,double num2){ //define the function here similar to defining variable in line 11

  double product;
  product = num1 * num2;

  return product;
}


// Define function divide:
double divide(double num1, double num2){

  double quotient;

  if (num2 != 0){
    quotient = num1/num2;
  }
  else{
    cout<<" NaN error"<<endl;
    return 99999;
  }

  return quotient;
}
