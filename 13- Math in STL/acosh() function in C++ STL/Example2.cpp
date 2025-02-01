#include <bits/stdc++.h>
using namespace std;

int main() {
    string x = "50.0";  // Example: Numeric string

    try {
        double num = stod(x);  // Convert string to double

        if (num >= 1) {  // acosh is defined only for x >= 1
            double result = acosh(num);
            cout << "acosh(" << num << ") = " << result << " radians" << endl;
            cout << "acosh(" << num << ") = " << result * 180 / M_PI << " degrees" << endl;  // Use M_PI for precision
        } else {
            cout << "acosh is not defined for x < 1." << endl;
        }
    } catch (exception &e) {
        cout << "Invalid input: '" << x << "' is not a number." << endl;
    }

    return 0;
}
