#include<iostream>
using namespace std;

int main()
{
    // Initialize the variable `i` to 1000
    int i = 1000;

    // Explanation:
    // The condition `i <= 5` will never be true because `i` starts at 1000.
    // However, the `do-while` loop guarantees that the body will execute at least once.

    do {
        // Print the current value of `i` followed by "Hello World"
        cout << i << ". Hello World\n";
        i++;  // Increment `i` after each iteration
    } 
    while (i <= 5);  // Check the condition after executing the loop body

    return 0;  // Exit the program
}
