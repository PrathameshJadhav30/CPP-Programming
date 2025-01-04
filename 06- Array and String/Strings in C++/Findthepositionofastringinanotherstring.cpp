#include <iostream>  // Include the standard I/O library for input/output operations
using namespace std;

int main() {
    string str1("trishaank kumar");  // Declare and initialize the first string
    string str2("kumar");            // Declare and initialize the second string

    // Find the starting index of str2 within str1
    cout << "The index of str2 in str1 is: " << str1.find(str2) << endl;

    return 0;  // Return 0 to indicate successful execution
}
