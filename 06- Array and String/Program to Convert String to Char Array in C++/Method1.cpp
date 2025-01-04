#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Take user input for a string
    string str;
    cout << "Enter a string: ";
    cin >> str;  // Read the string from user input
    
    // Calculate the length of the string
    int n = str.length();

    // Dynamically allocate memory for the character array
    char* arr = new char[n + 1];  // +1 for the null terminator

    // Copy the characters from the string to the character array
    for (int i = 0; i < n; i++) {
        arr[i] = str[i];
    }
    
    // Add the null terminator at the end of the array
    arr[n] = '\0';

    // Print the character array
    cout << "The character array is: " << arr << endl;

    // Deallocate the memory used by the character array
    delete[] arr;

    return 0;
}
