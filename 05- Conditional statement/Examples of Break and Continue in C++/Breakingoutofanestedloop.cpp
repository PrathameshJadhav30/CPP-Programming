#include <iostream>
using namespace std;

int main() {
    int x;  // Declare an integer variable to store the user input

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> x;  // Read the user input into the variable 'x'

    // Outer loop to iterate over values of 'i' from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        // Inner loop to iterate over values of 'j' from 1 to 10
        for (int j = 1; j <= 10; ++j) {
            // Check if the product of 'i' and 'j' equals the input number 'x'
            if (i * j == x) {
                cout << "Found it!" << endl;  // Output message if condition is met
                break;  // Exit the inner loop once a match is found
            }
        }
    }

    return 0;  // Exit the program
}
