#include <iostream>  // Include the standard I/O library for input/output operations
using namespace std;

int main() {
    string s1, s2;  // Declare two string variables to store user input

    // Prompt the user to enter the first string
    cout << "Enter the first string: ";
    cin >> s1;  // Read the first string

    // Prompt the user to enter the second string
    cout << "Enter the second string: ";
    cin >> s2;  // Read the second string

    // Concatenate the two strings and display the result
    cout << "The concatenated string is: " << s1 + s2 << endl;

    return 0;  // Return 0 to indicate successful execution
}
