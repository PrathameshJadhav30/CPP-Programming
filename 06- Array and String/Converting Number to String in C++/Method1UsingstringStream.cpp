#include <iostream>
#include <sstream>  // For ostringstream
#include <string>   // For string class
using namespace std;

int main() {
    // Initialize an integer
    int num = 20;

    // Create an ostringstream object to convert the integer to string
    ostringstream str1;
    str1 << num;  // Insert the integer into the ostringstream

    // Convert the ostringstream to a string
    string p = str1.str();

    // Output the newly formed string
    cout << "The newly formed string from the number is: " << p << endl;

    return 0;
}
