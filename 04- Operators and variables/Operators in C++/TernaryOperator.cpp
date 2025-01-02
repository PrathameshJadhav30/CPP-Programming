#include<iostream>
using namespace std;

int main() {
    int n;
    
    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;
    
    // Using ternary operator to check if the number is even or odd
    (n % 2 == 0) ? cout << "Even" : cout << "Odd";
    
    return 0;
}
