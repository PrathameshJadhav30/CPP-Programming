#include <iostream>  // Include the standard I/O library for input/output operations
using namespace std;

int main() {
    string name;  // Declare a string variable to store the name

    // Prompt the user to enter a name
    cout << "Enter a name: ";
    cin >> name;  // Read the user input and store it in the variable 'name'

    // Print the given string (name) to the console
    cout << endl;  // Add an extra newline for clarity
    cout << "Given string is: " << name << endl;

    return 0;  // Return 0 to indicate successful execution
}
