#include <boost/lexical_cast.hpp>  // For lexical_cast function from Boost
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize float and integer values
    float f_val = 10.5;
    int i_val = 17;

    // Use boost::lexical_cast to convert float and integer to strings
    string strf = boost::lexical_cast<string>(f_val);  // Convert float to string
    string stri = boost::lexical_cast<string>(i_val);  // Convert integer to string

    // Output the converted strings
    cout << "The float value in string is: " << strf << endl;
    cout << "The int value in string is: " << stri << endl;

    return 0;
}
