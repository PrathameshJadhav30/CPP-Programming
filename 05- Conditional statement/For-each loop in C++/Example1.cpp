#include<iostream>
using namespace std;

int main()
{
    // Declare and initialize an array
    int arr[] = {10, 20, 30, 40, 50};

    // Range-based for loop (introduced in C++11) to iterate through each element of the array
    for (int x : arr) {
        cout << x << " ";  // Print the current element followed by a space
    }

    return 0;  // Exit the program
}
