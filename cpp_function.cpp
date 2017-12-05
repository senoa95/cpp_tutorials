#include <iostream>
using namespace std;

double multiply(double num1,double num2); //function declaration with arguments/inputs

int main(int argc, char const *argv[]) {
  double num1;  // Declaration of variable
  double num2;
  double product;

  num1 = 65.4;  // Definition/initialization of the variable;
  num2 = 84.2;

  product = multiply(num1, num2);

  cout<<product<<endl;

  return 0;
}

double multiply(double num1,double num2){ //define the function here similar to defining
  // variable in line 11. Note that for functions we only typically call it define and not initialize

  double product;
  product = num1 * num2;

  return product;
}
