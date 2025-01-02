#include <stdio.h> // Include the necessary header for standard I/O functions

// Global variable declaration
int d = 20;

int main() {
    int a, b, c; // Declare local variables a, b, and c

    // Initialize the local variables
    a = 10; // Assign 10 to a
    b = 30; // Assign 30 to b

    // Modify the global variable 'd'
    d = d + 10; // Increase d by 10, making it 30

    // Calculate the sum of a, b, and d, and store it in c
    c = a + b + d; // c will be 10 + 30 + 30 = 70

    // Output the value of c
    printf("%d\n", c); // Print the value of c

    return c; // Return the value of c as the exit status of the program
}
