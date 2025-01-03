#include<iostream>
using namespace std;

int main() {
    // Outer loop for iterating through numbers 1 to 5
    for (int i = 1; i <= 5; i++) {
        // Print the header for the current multiplication table
        cout << "Table of " << i << " : ";
        
        // Inner loop for calculating and printing the table of 'i'
        for (int j = 1; j <= 10; j++) {
            cout << i * j << " ";  // Multiply 'i' and 'j' and print the result
        }
        
        // Move to the next line after printing one table
        cout << "\n";
    }

    return 0;  // Exit the program
}
