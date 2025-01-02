#include <iostream> // Include the necessary header for I/O operations
using namespace std;

int main() {
    // Display sizes of various data types using sizeof()
    cout << "Size of char : " << sizeof(char) << " bytes" << endl;
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;

    // Declare variables
    int a;
    float b;

    // Display sizes of variables using sizeof()
    cout << "\nSize of a: " << sizeof(a) << " bytes";
    cout << "\nSize of b: " << sizeof(b) << " bytes";

    return 0; // Exit the program successfully
}
