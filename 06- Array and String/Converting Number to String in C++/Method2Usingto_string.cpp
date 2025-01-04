#include <iostream>
#include <string>   // For string class and to_string function
using namespace std;

int main() {
    // Initialize integer and float variables
    int i_val = 20;
    float f_val = 30.50;

    // Convert the integer and float to strings using to_string function
    string stri = to_string(i_val);  // Convert integer to string
    string strf = to_string(f_val);  // Convert float to string

    // Output the converted strings
    cout << "The integer in string is: " << stri << endl;
    cout << "The float in string is: " << strf << endl;

    return 0;
}
