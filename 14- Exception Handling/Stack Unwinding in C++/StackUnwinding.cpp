#include <iostream>
#include <exception>
using namespace std;

// Custom exception class derived from std::exception
class MyException : public exception {
public:
    MyException() : exception() {}

    // Override the what() method to provide custom error message
    const char* what() const throw() {
        return "My Exception";
    }
};

// A simple class to simulate acquiring and releasing a resource
class MyResource {
public:
    // Constructor
    MyResource() {
        cout << "MyResource acquired" << endl;
    }

    // Destructor
    ~MyResource() {
        cout << "MyResource released" << endl;
    }
};

// Function that creates a resource and throws an exception
void function1() {
    MyResource res;
    throw MyException(); // Throw custom exception
}

// Function that calls function1
void function2() {
    function1();
}

// Function that calls function2
void function3() {
    function2();
}

// Main function
int main() {
    try {
        function3(); // Call the chain of functions
    } catch (const MyException& e) {
        // Catch and handle the custom exception
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
