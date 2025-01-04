#include <iostream>  // Include the standard I/O library for input/output operations
using namespace std;

int main() {
    string name;  // Declare a string variable to store the name

    // Prompt the user to enter a name
    cout << "\nEnter a name: ";
    
    // Use getline() to read an entire line, including spaces, and store it in 'name'
    getline(cin, name);  
    
    // Output the entered string
    cout << "\nGiven string is: " << name << endl;

    return 0;  // Return 0 to indicate successful execution
}
