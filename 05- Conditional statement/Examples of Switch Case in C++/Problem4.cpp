#include<iostream>
using namespace std;

int main() {
    int monthNum;  // Declare a variable to store the month number

    // Prompt the user to enter the number of the month (1-12)
    cout << "Enter the number of the month (1-12): ";
    cin >> monthNum;  // Read the user's input for the month number

    // Use a switch statement to display the corresponding month name
    switch (monthNum) {
        case 1:  // If the month number is 1
            cout << "January";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 2:  // If the month number is 2
            cout << "February";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 3:  // If the month number is 3
            cout << "March";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 4:  // If the month number is 4
            cout << "April";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 5:  // If the month number is 5
            cout << "May";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 6:  // If the month number is 6
            cout << "June";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 7:  // If the month number is 7
            cout << "July";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 8:  // If the month number is 8
            cout << "August";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 9:  // If the month number is 9
            cout << "September";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 10:  // If the month number is 10
            cout << "October";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 11:  // If the month number is 11
            cout << "November";  // Output the corresponding month name
            break;  // Exit the switch statement

        case 12:  // If the month number is 12
            cout << "December";  // Output the corresponding month name
            break;  // Exit the switch statement

        default:  // If the month number is invalid (not between 1 and 12)
            cout << "Invalid month number";  // Display an error message
    }

    return 0;  // Exit the program
}
