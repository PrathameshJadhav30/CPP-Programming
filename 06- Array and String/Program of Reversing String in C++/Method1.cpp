#include <iostream>
using namespace std;

int main() {
    // Take user input for the string
    string str;
    cout << "Enter a string: ";
    cin >> str;  // Read the string from user input

    // Calculate the length of the string
    int len = str.length();

    // Print the reverse of the string
    cout << "The reversed string is: ";
    
    // Loop through the string in reverse order
    for (int i = 0; i < len; i++) {
        cout << str[len - i - 1];  // Print characters from the end to the start
    }
    
    cout << endl;  // Print a newline after the output
    return 0;
}
