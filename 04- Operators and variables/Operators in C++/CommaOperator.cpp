#include<iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c;
    
    // Using the comma operator to evaluate multiple expressions
    c = (a = a + 2, b = a + 3, b = a + b);
    // Explanation of the comma operator:
    // The expressions are evaluated from left to right:
    // 1. a = a + 2 -> a becomes 3
    // 2. b = a + 3 -> b becomes 6
    // 3. b = a + b -> b becomes 9 (final result of the comma expression)
    // The final value of b (which is 9) is assigned to c
    
    cout << c; // Output: 9
    
    return 0;
}
