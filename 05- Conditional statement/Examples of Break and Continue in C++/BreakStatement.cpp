#include <iostream>
using namespace std;

int main() {
    char c;  // Declare a variable to store the character input

    // Prompt the user to enter a character, indicating 'q' to quit
    cout << "Enter a character ('q' to quit): ";
    cin >> c;  // Read the user input into the variable 'c'

    // Continue the loop as long as the user does not enter 'q'
    while (c != 'q') {
        // Display the entered character
        cout << "You entered: " << c << endl;

        // Prompt the user again to enter a character
        cout << "Enter a character ('q' to quit): ";
        cin >> c;  // Read the next input into the variable 'c'
    }

    // Notify the user that the program is quitting
    cout << "Quitting program." << endl;

    return 0;  // Exit the program
}
