#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 4.1;
    double result = sinh(x);
    cout << "sinh(4.1) = " << result << endl;

    // Convert 90 degrees to radians
    double xDegrees = 90;
    x = xDegrees * M_PI / 180.0;  // Use M_PI for better precision
    result = sinh(x);
    cout << "sinh(90 degrees) = " << result << endl;

    return 0;
}
