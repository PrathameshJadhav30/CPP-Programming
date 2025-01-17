#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 10, c = 15, d = 5, e;

    // Calculate and print the result of (a + b) * c / d
    e = (a + b) * c / d;  // (30 * 15) / 5 = 90
    cout << "Value of (a + b) * c / d is: " << e << endl;

    // Calculate and print the result of ((a + b) * c) / d
    e = ((a + b) * c) / d;  // (30 * 15) / 5 = 90
    cout << "Value of ((a + b) * c) / d is: " << e << endl;

    // Calculate and print the result of (a + b) * (c / d)
    e = (a + b) * (c / d);  // 30 * (15 / 5) = 30 * 3 = 90
    cout << "Value of (a + b) * (c / d) is: " << e << endl;

    // Calculate and print the result of a + (b * c) / d
    e = a + (b * c) / d;  // 20 + (150 / 5) = 20 + 30 = 50
    cout << "Value of a + (b * c) / d is: " << e << endl;

    return 0;
}
