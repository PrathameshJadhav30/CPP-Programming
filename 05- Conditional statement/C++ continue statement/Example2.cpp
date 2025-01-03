#include<iostream>
using namespace std;

int main()
{
   // Outer loop: Iterates over 'i' from 0 to 2
   for (int i = 0; i < 3; i++) { // first loop
     
     // Inner loop: Iterates over 'j' from 0 to 2
     for (int j = 0; j < 3; j++) { // second loop
       
       // Check if both 'i' and 'j' are equal to 2
       if (i == 2 && j == 2) {
          continue;  // Skip the current iteration if 'i' and 'j' are both 2
       }

       // Print the values of 'i' and 'j'
       cout << i << " " << j << endl;
     }
   }

   return 0;  // Exit the program
}
