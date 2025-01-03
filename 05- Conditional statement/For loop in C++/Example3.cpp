#include<iostream>  // Correct header file for input/output
using namespace std;

int main()
{
    // Initialize the string
    string s1 = "PrepInsta";

    // Loop through each character of the string until the null character '\0'
    for (int i = 0; s1[i] != '\0'; i++) {
        cout << s1[i] << " ";  // Print each character followed by a space
    }

    return 0;  // Exit the program
}
