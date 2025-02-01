#include <bits/stdc++.h>
using namespace std;

int main() {
    string x = "50.0";  // Example of a numeric string

    try {
        double num = stod(x);  // Convert string to double
        double result = asinh(num);
        cout << "asinh(" << num << ") = " << result << " radians" << endl;
        cout << "asinh(" << num << ") = " << result * 180 / M_PI << " degrees" << endl;  // Use M_PI for precision
    } catch (exception &e) {
        cout << "Invalid input: '" << x << "' is not a number." << endl;
    }

    return 0;
}
