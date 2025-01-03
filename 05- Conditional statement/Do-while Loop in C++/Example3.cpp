#include<iostream>  // Include the input/output stream library
using namespace std;

int main()
{
    int n = 100;  // Set the upper limit for the numbers to be checked
    int i = 1;    // Initialize the counter variable `i` to 1

    // Do-While loop to check numbers from 1 to `n`
    do {
        // If `i` is divisible by 7 (remainder is 0 when divided by 7), print it
        if (i % 7 == 0) {
            cout << i << " ";  // Print the number
        }
        i++;  // Increment `i` by 1
    } 
    while (i <= n);  // Continue the loop until `i` exceeds `n`

    return 0;  // Exit the program
}
