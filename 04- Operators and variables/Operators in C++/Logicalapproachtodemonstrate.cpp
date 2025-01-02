#include<iostream>
using namespace std;

int main() {
    int a = 20;
    int b = 10;
    bool output;

    // Using AND operator: both conditions are true
    output = (a > 5) && (b > 5);     
    cout << "(a > 5) && (b > 5) is " << output << endl;

    // Using AND operator: both conditions are true
    output = (a > 0) && (b >= 10); 
    cout << "(a > 0) && (b >= 10) is " << output << endl;

    // Using AND operator: one condition is false
    output = (a != 0) && (b == 0); 
    cout << "(a != 0) && (b == 0) is " << output << endl;

    // Using OR operator: one condition is true
    output = (a != b) || (a < b); 
    cout << "(a != b) || (a < b) is " << output << endl;

    // Using OR operator: both conditions are false
    output = (a < b) || (b > 10); 
    cout << "(a < b) || (b > 10) is " << output << endl;

    // Using AND operator: both a and b are non-zero, so the result is true
    output = (a) && (b); 
    cout << "(a) && (b) is " << output << endl;

    // Using NOT operator: a is 20, so !(a == 20) results in false
    output = !(a == 20); 
    cout << "!(a == 20) is " << output << endl;

    // Using NOT operator: a is non-zero, so !(a < 0) results in true
    output = !(a < 0); 
    cout << "!(a < 0) is " << output << endl;

    // Using NOT operator: a is non-zero, so !(a) results in false
    output = !(a); 
    cout << "!(a) is " << output << endl;

    return 0; 
}
