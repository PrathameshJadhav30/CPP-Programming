#include <bits/stdc++.h>  // Include all standard libraries
using namespace std;

int main() {
    // Initialize a 3D array with 2 blocks, each containing 3 rows and 2 columns
    int p[2][3][2] = { 
        { {1, 2}, {3, 4}, {5, 6} },   // First block with 3 rows and 2 columns
        { {7, 8}, {9, 10}, {11, 12} }  // Second block with 3 rows and 2 columns
    };

    // Loop through each block (2 blocks)
    for (int i = 0; i < 2; ++i) {
        // Loop through each row in the current block (3 rows per block)
        for (int j = 0; j < 3; ++j) {
            // Loop through each column in the current row (2 columns per row)
            for (int k = 0; k < 2; ++k) {
                // Output the value at the current position [i][j][k]
                cout << "p[" << i << "][" << j << "][" << k << "] = " << p[i][j][k] << endl;
            }
        }
    }

    return 0;
}
