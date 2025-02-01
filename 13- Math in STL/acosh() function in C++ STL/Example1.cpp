#include <bits/stdc++.h> 
using namespace std;  

int main() {
    double x = 50.0;  // x must be >= 1 for acosh(x)

    if (x >= 1) {
        double result = acosh(x);
        cout << "acosh(" << x << ") = " << result << " radians" << endl;
        cout << "acosh(" << x << ") = " << result * 180 / M_PI << " degrees" << endl;  // Use M_PI for better precision
    } else {
        cout << "acosh is not defined for x < 1." << endl;
    }

    return 0;
}
