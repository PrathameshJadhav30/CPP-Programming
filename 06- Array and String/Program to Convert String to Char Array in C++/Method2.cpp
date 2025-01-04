#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Take user input for a string
    string str;
    cout << "Enter a string: ";
    cin >> str;  // Read the string from user input

    // Declare a character pointer and assign it with the address of the first character of the string
    char* arr = &str[0];  // 'arr' now points to the first character of the string

    // Print the character array (string)
    cout << "The character array is: " << arr << endl;

    return 0;
}
