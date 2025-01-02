#include <iostream> // Include only the necessary header for I/O operations
using namespace std;

// Global variable
int x = 0;

// Global function to print global variable x
void printX() {
    cout << "Global x = " << x << endl;
}

class MyClass {
public:
    // Static class variable
    static int x;

    // Static class function to print class variable x
    static void printX() {
        cout << "MyClass x = " << x << endl;
    }
};

// Define static variable x for MyClass
int MyClass::x = 10;

int main() {
    // Local variable x
    int x = 5;
    cout << "Local x = " << x << endl;

    // Using :: operator to refer to the global x
    ::x = 7; // Modify global variable x
    ::printX(); // Call global function to print global x

    // Using :: operator to refer to static class variable
    MyClass::x = 12; // Modify static class variable x
    MyClass::printX(); // Call static class function to print MyClass x

    return 0; // Exit the program successfully
}
