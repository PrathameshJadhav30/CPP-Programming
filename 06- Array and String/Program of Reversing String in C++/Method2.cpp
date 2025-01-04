#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Take user input for the string
    string str;
    cout << "Enter a string: ";
    cin >> str;  // Read the string from user input
    
    // Reverse the string using the reverse function from the algorithm library
    reverse(str.begin(), str.end());

    // Print the reversed string
    cout << "The reversed string is: " << str << endl;

    return 0;
}
