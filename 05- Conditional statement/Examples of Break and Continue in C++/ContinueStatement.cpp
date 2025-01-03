#include <iostream>
using namespace std;

int main()
{
    int i;  // Declare an integer variable for the loop index

    // Loop through values of 'i' from 1 to 10
    for(i = 1; i <= 10; i++) {
        // Skip printing when 'i' is 4 or 7
        if(i == 4 || i == 7) {
            continue;  // Skip the current iteration and continue with the next 'i'
        }
        else {
            // Print the value of 'i' when it's neither 4 nor 7
            printf("%d\n", i);
        }
    }

    return 0;  // Exit the program
}
