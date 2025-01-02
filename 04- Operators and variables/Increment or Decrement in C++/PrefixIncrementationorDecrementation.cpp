#include <iostream> // Include the necessary header for I/O operations
using namespace std;

int main() {
    int val = 20; // Initialize the value of val to 20

    // Display the value before and after prefix increment
    cout << "Value before prefix incrementation: " << ++val << endl; // Prefix increment: value is incremented before being used
    cout << "Value after prefix incrementation: " << val << endl; // Value is incremented, so it's displayed as 21

    // Display the value before and after prefix decrement
    cout << "Value before prefix decrementation: " << --val << endl; // Prefix decrement: value is decremented before being used
    cout << "Value after prefix decrementation: " << val << endl; // Value is decremented, so it's displayed as 20

    return 0; // Exit the program successfully
}
