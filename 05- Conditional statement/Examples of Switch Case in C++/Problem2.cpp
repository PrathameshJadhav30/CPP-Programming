#include<iostream> 
using namespace std;

int main() {
    double cgpa;  // Declare a variable to store the CGPA input

    // Prompt the user to enter their CGPA
    cout << "Enter your CGPA: ";
    cin >> cgpa;  // Read the CGPA value

    // Use a switch statement, casting CGPA to an integer for case matching
    switch ((int)cgpa) {
        case 8:  // If the CGPA is 8
            cout << "You got 8 CGPA.";  // Print the corresponding message
            break;  // Exit the switch statement

        case 7:  // If the CGPA is 7
            cout << "You got 7 CGPA.";  // Print the corresponding message
            break;  // Exit the switch statement

        case 10:  // If the CGPA is 10
            cout << "You got 10 CGPA.";  // Print the corresponding message
            break;  // Exit the switch statement

        default:  // If the CGPA does not match any case
            cout << "Invalid CGPA";  // Display an error message
    }

    return 0;  // Exit the program
}
