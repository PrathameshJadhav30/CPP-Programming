#include <iostream>  // Include the input/output stream library
using namespace std;

int main()
{
    int i = 1;  // Initialization: start with 1
    
    // While loop continues as long as `i` is less than or equal to 10
    while(i <= 10)
    {
        cout << i << " ";  // Print the current value of `i`
        i++;  // Increment `i` by 1 after each iteration
    }
    
    return 0;  // Exit the program
}
