#include <iostream> 
using namespace std;

int main()
{
   // Loop through values of 'i' from 0 to 9
   for (int i = 0; i < 10; i++) {
     
     // If 'i' is an even number (i % 2 == 0), skip this iteration
     if (i % 2 == 0) {
         continue;  // Skip the current iteration and continue to the next value of 'i'
     }

     // Print the value of 'i' if it's odd
     cout << i << endl;  // Output the current value of 'i'
   }

   return 0;  // Exit the program
}
