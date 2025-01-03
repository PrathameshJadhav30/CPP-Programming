#include<iostream>
using namespace std;

int main() {
    int age;  // Declare a variable to store the user's age

    // Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;  // Read the user's input for age

    // Use a switch statement to check the exact age values of 18 and 20
    switch (age) {
        case 18:  // If the age is exactly 18
            cout << "You are not eligible for voting.";  // Output message for age 18
            break;  // Exit the switch statement

        case 20:  // If the age is exactly 20
            cout << "You are eligible for voting.";  // Output message for age 20
            break;  // Exit the switch statement

        default:  // If the age doesn't match 18 or 20
            // Check if the age is less than 18 or greater than or equal to 18
            if (age < 18) {
                cout << "You are not eligible for voting.";  // Output message for underage
            } else {
                cout << "You are eligible for voting.";  // Output message for eligible voter
            }
    }

    return 0;  // Exit the program
}
