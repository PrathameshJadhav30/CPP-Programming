#include<iostream>
using namespace std;

int main()
{
    int x = 10;  // Declare and initialize the variable 'x' to 10

    // Use a switch statement to check the value of 'x'
    switch (x) {
        case 1:  // If 'x' is 1
            cout << "x is 1" << endl;  // Output the corresponding message
            break;  // Exit the switch statement

        case 2:  // If 'x' is 2
            cout << "x is 2" << endl;  // Output the corresponding message
            break;  // Exit the switch statement

        default:  // If 'x' is neither 1 nor 2
            cout << "x is not 1 or 2" << endl;  // Output the default message
    }

    return 0;  // Exit the program
}
