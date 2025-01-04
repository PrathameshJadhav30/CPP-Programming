#include <iostream>  // Include the standard I/O library for input/output operations
using namespace std;

int main() {
    int a[5] = {6, 9, 1, 5, 3};  // Declare and initialize an array with 5 elements

    cout << "Elements are:\n";  // Output a message indicating the start of the array elements

    // Iterate through all the elements of the array
    for (int i = 0; i < 5; i++) {
        // Access and display each element using its index
        cout << "a[" << i << "] = " << a[i] << "\n";  
    }

    return 0;  // Return 0 to indicate successful execution
}
