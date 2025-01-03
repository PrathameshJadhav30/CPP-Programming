#include <iostream>
using namespace std;

int main() {
    int x;  // Declare an integer variable to store the user input

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> x;  // Read the user input into the variable 'x'

    // Use a switch statement to check the value of 'x' and print corresponding output
    switch (x) {
        case 1:  // If the user enters 1
            cout << "You entered 1." << endl;
            break;  // Exit the switch statement

        case 2:  // If the user enters 2
            cout << "You entered 2." << endl;
            break;  // Exit the switch statement

        case 3:  // If the user enters 3
            cout << "You entered 3." << endl;
            break;  // Exit the switch statement

        default:  // If the user enters any other value
            cout << "You entered something else." << endl;
            break;  // Exit the switch statement
    }

    return 0;  // Exit the program
}
