#include<iostream>
using namespace std;

int main()
{
    // Loop through values of 'i' from 0 to 9
    for (int i = 0; i < 10; i++) {
      
      // If 'i' is equal to 5, break the loop
      if (i == 5) {
          break;  // Exit the loop when 'i' is 5
      }

      // Print the current value of 'i'
      cout << i << endl;  // Output the current value of 'i'
    }

    return 0;  // Exit the program
}
