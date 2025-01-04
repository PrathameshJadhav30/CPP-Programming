#include <bits/stdc++.h>  // Include all standard libraries
using namespace std;

int main() {
    // Initialize a 2D array with 3 rows and 2 columns
    int p[3][2] = {{2, -5}, {4, 0}, {9, 1}};

    // Loop through each row
    for (int i = 0; i < 3; ++i) {
        // Loop through each column in the current row
        for (int j = 0; j < 2; ++j) {
            // Output the value of the current element at position [i][j]
            cout << "p[" << i << "][" << j << "] = " << p[i][j] << endl;
        }
    }

    return 0;
}
