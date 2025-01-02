#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    bool result;

    // Check if a is equal to b
    result = (a == b);  // false
    cout << "10 == 5 is " << result << endl;

    // Check if a is not equal to b
    result = (a != b);  // true
    cout << "10 != 5 is " << result << endl;

    // Check if a is greater than b
    result = (a > b);   // true
    cout << "10 > 5 is " << result << endl;

    // Check if a is less than b
    result = (a < b);   // false
    cout << "10 < 5 is " << result << endl;

    // Check if a is greater than or equal to b
    result = (a >= b);  // true
    cout << "10 >= 5 is " << result << endl;

    // Check if a is less than or equal to b
    result = (a <= b);  // false
    cout << "10 <= 5 is " << result << endl;

    return 0;
}
