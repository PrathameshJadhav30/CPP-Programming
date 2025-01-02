#include <iostream> // Include the necessary header for I/O operations
using namespace std;

class MyClass {
private:
    int x; // Private member variable to hold the value of x

public:
    // Constructor to initialize x with a given value
    MyClass(int x) : x(x) {}

    // Setter function to modify the value of x
    void setX(int x) {
        this->x = x; // 'this' pointer is used to differentiate the class variable from the parameter
    }

    // Function to print the value of x and the address of the object
    void print() {
        cout << "Value of x : " << x << endl; // Print the current value of x
        cout << "Address of the object : " << this << endl; // Print the address of the object
    }
};

int main() {
    // Create an object of MyClass and initialize x to 5
    MyClass obj(5);

    // Call the print function to display the value of x and the object's address
    obj.print();

    // Change the value of x to 10 using the setter function
    obj.setX(10);

    // Call the print function again to display the updated value of x
    obj.print();

    return 0; // Exit the program successfully
}
