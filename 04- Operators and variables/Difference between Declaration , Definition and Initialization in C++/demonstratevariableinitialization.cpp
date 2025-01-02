#include <iostream> // Include the necessary header for I/O operations
using namespace std;

int main() {
    int var; // Declare an integer variable 'var'

    // Output the value of 'var' (this will be a garbage value since it’s uninitialized)
    cout << "Value: " << var << endl;

    // Output the memory address of 'var' using the address-of operator '&'
    cout << "Address of var: " << &var << endl;

    // Output the size of 'var' using the sizeof operator (in bytes)
    cout << "Size of var: " << sizeof(var) << " bytes" << endl;

    return 0; // Exit the program successfully
}
