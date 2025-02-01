#include <bits/stdc++.h> 
using namespace std;  

int main() {
    double x = -50.0;  // Use double instead of int

    double result = asinh(x);
    cout << "asinh(-50.0) = " << result << " radians" << endl;
    cout << "asinh(-50.0) = " << result * 180 / M_PI << " degrees" << endl;  // Use M_PI

    return 0;
}
