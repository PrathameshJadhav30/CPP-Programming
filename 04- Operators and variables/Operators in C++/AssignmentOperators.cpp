#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;

    // Add b to a (same as a = a + b)
    a += b; // a becomes 15
    cout << "a += b: " << a << endl;

    // Divide a by b (same as a = a / b)
    a /= b; // a becomes 3
    cout << "a /= b: " << a << endl;

    return 0;
}
