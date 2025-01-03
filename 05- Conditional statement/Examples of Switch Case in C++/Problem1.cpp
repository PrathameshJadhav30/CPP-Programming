#include<iostream>
using namespace std;

int main() {
    int num1, num2;  // Declare two integer variables for the numbers
    char op;  // Declare a char variable for the operator

    // Prompt the user to enter two numbers and an operator (+, -, *, %)
    cout << "Enter two numbers and an operator (+, -, *, %): ";
    cin >> num1 >> num2 >> op;  // Read the user input

    // Use a switch statement to perform the operation based on the operator entered
    switch (op) {
        case '+':  // If the operator is '+'
            cout << num1 << " + " << num2 << " = " << num1 + num2;  // Perform addition
            break;  // Exit the switch statement

        case '-':  // If the operator is '-'
            cout << num1 << " - " << num2 << " = " << num1 - num2;  // Perform subtraction
            break;  // Exit the switch statement

        case '*':  // If the operator is '*'
            cout << num1 << " * " << num2 << " = " << num1 * num2;  // Perform multiplication
            break;  // Exit the switch statement

        case '%':  // If the operator is '%'
            cout << num1 << " % " << num2 << " = " << num1 % num2;  // Perform modulus operation
            break;  // Exit the switch statement

        default:  // If the operator is not recognized
            cout << "Invalid operator";  // Display an error message
    }

    return 0;  // Exit the program
}
