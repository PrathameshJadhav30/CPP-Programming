#include <iostream>  // Include the input/output stream library
using namespace std;

int main()
{
    int num = 20, sum = 0;  // `num` is set to 20 and `sum` is initialized to 0
    
    int i = 1;  // Start from the first natural number
    while(i <= num)  // Continue the loop as long as `i` is less than or equal to 20
    {
        sum = sum + i;  // Add the current value of `i` to `sum`
        i++;  // Increment `i` by 1 to move to the next number
    }
    
    cout << "Sum of first " << num << " Natural numbers: " << sum;  // Output the result
    
    return 0;  // Exit the program
}
