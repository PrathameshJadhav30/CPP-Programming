#include <iostream> // Include necessary header for I/O operations
using namespace std;

int main() {
    int val = 20; // Initialize the value of val to 20

    // Display the value before and after postfix increment
    cout << "Value before postfix incrementation: " << val++ << endl; // Postfix increment: value is used before increment
    cout << "Value after postfix incrementation: " << val << endl; // Value is incremented after being used

    // Display the value before and after postfix decrement
    cout << "Value before postfix decrementation: " << val-- << endl; // Postfix decrement: value is used before decrement
    cout << "Value after postfix decrementation: " << val << endl; // Value is decremented after being used

    return 0; // Exit the program successfully
}
