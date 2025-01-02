#include <iostream>
using namespace std;

int main() {
    // Output the size of size_t data type, which typically has a size of 8 bytes on most systems
    cout << sizeof(size_t) << endl;

    int num1, num2;

    // Output the result of sizeof(num1 * sizeof(num2))
    // num1 * sizeof(num2) results in a value of type 'size_t' (the size of an integer multiplied by the size of size_t)
    cout << sizeof(num1 * sizeof(num2)) << endl; // Result is typically size_t, which is 8 bytes

    return 0;
}
