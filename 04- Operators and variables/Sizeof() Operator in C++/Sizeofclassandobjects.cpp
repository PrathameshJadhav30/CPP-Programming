#include <iostream>
using namespace std;

class test {
public:
    int a = 2;      // 4 bytes
    float b = 3.0;  // 4 bytes
    double c = 5.1; // 8 bytes
};

int main() {
    // Printing the size of the class 'test' directly
    cout << "\nSize of test class: " << sizeof(test) << " bytes";

    test t; // Object of class 'test'

    // Printing the size of the object 't'
    cout << "\nSize of object 't': " << sizeof(t) << " bytes"; // Same as the size of the class

    return 0;
}
