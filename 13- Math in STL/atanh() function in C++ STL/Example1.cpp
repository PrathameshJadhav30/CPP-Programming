#include <bits/stdc++.h> 
using namespace std;  

int main() {
    int x = 0;
    double result;
    
    // For x = 0
    result = atanh(x);
    cout << "atanh(0) = " << result << " radians\n";
    cout << "atanh(0) = " << result * 180 / M_PI << " degrees\n";

    // For x = -1
    x = -1;
    if (x > -1 && x < 1) {
        result = atanh(x);
        cout << "\natanh(" << x << ") = " << result << " radians\n";
        cout << "atanh(" << x << ") = " << result * 180 / M_PI << " degrees\n";
    } else {
        cout << "\natanh(" << x << ") is undefined for x = " << x << ".\n";
    }

    // For x = 1
    x = 1;
    if (x > -1 && x < 1) {
        result = atanh(x);
        cout << "\natanh(" << x << ") = " << result << " radians\n";
        cout << "atanh(" << x << ") = " << result * 180 / M_PI << " degrees\n";
    } else {
        cout << "\natanh(" << x << ") is undefined for x = " << x << ".\n";
    }

    // For x = -2 (Outside the domain)
    x = -2;
    if (x > -1 && x < 1) {
        result = atanh(x);
        cout << "\natanh(" << x << ") = " << result << " radians\n";
        cout << "atanh(" << x << ") = " << result * 180 / M_PI << " degrees\n";
    } else {
        cout << "\natanh(" << x << ") is undefined for x = " << x << ".\n";
    }

    return 0;
}
