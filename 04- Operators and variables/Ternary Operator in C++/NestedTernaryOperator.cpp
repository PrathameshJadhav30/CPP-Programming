#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30, res;

    // Using nested ternary operator to find the maximum of a, b, and c
    res = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Output the maximum number
    cout << "Maximum number is: " << res << endl;

    return 0;
}
