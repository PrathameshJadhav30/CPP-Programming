#include<iostream>
using namespace std;

int main()
{
    // Outer loop: Iterates through 'i' values from 0 to 2
    for (int i = 0; i < 3; i++) {
      
      // Inner loop: Iterates through 'j' values from 0 to 2
      for (int j = 0; j < 3; j++) {
        
        // Check if any of the conditions are true to break the loop:
        // 1. If i == 2 and j == 2
        // 2. If i == 3 and j == 3 (this condition will never be true as i < 3)
        // 3. If i == 1 and j == 0
        if (i == 2 && j == 2 || i == 3 && j == 3 || i == 1 && j == 0) {
          break;  // Exit the inner loop if any of the conditions are met
        }

        // Output the current values of 'i' and 'j'
        cout << i << " " << j << endl;
      }
    }

    return 0;  // Exit the program
}
