#include<iostream> 
using namespace std;

int main ()
{
  // Declare variables for operator and numbers
  char oper = '+';  // The operator for the calculation
  float num1 = 8, num2 = 3;  // Two numbers to perform arithmetic operations

  // Output the values of num1, num2, and the operator
  cout << "Number 1 = " << num1 << endl;
  cout << "Number 2 = " << num2 << endl;
  cout << "operator = " << oper << endl;

  // Output the result of the operation
  cout << "result: ";

  // Switch statement to determine the operation based on the operator
  switch (oper)
  {
    case '+':  // Addition
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;  // Exit the switch case after performing the operation

    case '-':  // Subtraction
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':  // Multiplication
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':  // Division
      if (num2 != 0)  // Ensure that division by zero does not occur
      {
        cout << num1 << " / " << num2 << " = " << num1 / num2;
      }
      else
      {
        cout << "Error! Division by zero is not allowed.";
      }
      break;

    default:  // If the operator is not recognized
      cout << "Error! The operator is not correct";
      break;
  }

  return 0;  // Exit the program
}
