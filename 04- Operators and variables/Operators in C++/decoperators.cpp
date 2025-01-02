#include<iostream>
using namespace std;

int main() {
    int a = 5;
    
    // Pre-increment: increments 'a' first, then outputs the new value
    cout << "++a : " << ++a << "\ta: " << a << endl;

    // Pre-decrement: decrements 'a' first, then outputs the new value
    cout << "--a : " << --a << "\ta: " << a << endl;

    // Post-increment: outputs the current value of 'a', then increments 'a'
    cout << "a++: " << a++ << "\ta: " << a << endl;

    // Post-decrement: outputs the current value of 'a', then decrements 'a'
    cout << "a--: " << a-- << "\ta: " << a << endl;
    
    return 0;
}
