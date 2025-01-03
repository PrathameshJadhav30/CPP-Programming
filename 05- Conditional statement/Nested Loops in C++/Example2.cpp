#include<iostream>
using namespace std;

int main()
{
    // Declare and initialize a 3x3 matrix
    int mat[3][3] = { 
        { 1, 2, 3 }, 
        { 4, 5, 6 }, 
        { 7, 8, 9 } 
    };

    // Print a header for the matrix
    cout << "Matrix: \n";

    // Use nested loops to iterate over the matrix and print its elements
    for (int i = 0; i < 3; i++) {  // Outer loop for rows
        for (int j = 0; j < 3; j++) {  // Inner loop for columns
            cout << mat[i][j] << " ";  // Print the current element
        }
        cout << "\n";  // Move to the next line after printing a row
    }

    return 0;  // Exit the program
}
