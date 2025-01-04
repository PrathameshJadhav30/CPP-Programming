#include <iostream>  // Include the standard I/O library for input/output operations
using namespace std;

int main() {
    // Declare and initialize a 2D array with 5 rows and 2 columns
    int a[5][2] = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8} }; 

    // Iterate over the rows
    for (int i = 0; i < 5; i++) {
        // Iterate over the columns
        for (int j = 0; j < 2; j++) {
            // Access and display each element using its row and column indices
            cout << "a[" << i << "][" << j << "]: " << a[i][j] << endl;
        }
    }

    return 0;  // Return 0 to indicate successful execution
}
