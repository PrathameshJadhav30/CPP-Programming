#include<iostream>
using namespace std;

int main()
{
    // Define the range limit
    int n = 20;

    // Loop to print even numbers from 0 to n
    for (int i = 0; i <= n; i = i + 2) {
        cout << i << " ";  // Print the current even number followed by a space
    }

    return 0;  // Exit the program
}
