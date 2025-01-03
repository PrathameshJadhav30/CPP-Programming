#include<iostream>
using namespace std;

int main()
{
    // Declare and initialize a character array
    char arr[] = {'P', 'a', 'r', 't', 'y'};

    // Range-based for loop (introduced in C++11) to iterate through each element of the array
    for (char i : arr) {
        cout << i << " ";  // Print the current character followed by a space
    }

    return 0;  // Exit the program
}
