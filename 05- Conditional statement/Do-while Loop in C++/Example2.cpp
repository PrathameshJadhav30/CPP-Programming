#include<iostream>  // Include the input/output stream library
using namespace std;

int main()
{
    int n = 25;  // Set the upper limit for the numbers to be printed
    int i = 1;   // Initialize the counter variable `i` to 1

    // Do-While loop to print numbers from 1 to `n`
    do {
        cout << i << " ";  // Print the current value of `i`
        i++;               // Increment `i` by 1
    } 
    while (i <= n);         // Continue the loop as long as `i` is less than or equal to `n`

    return 0;  // Exit the program
}
