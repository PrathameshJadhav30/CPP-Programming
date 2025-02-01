#include<bits/stdc++.h> 
using namespace std;

int main() {
    string x = "50.0";  // Example of a numeric string

    try {
        double num = stod(x);  // Convert the string to a double

        if (num > -1 && num < 1) {
            double result = atanh(num);
            cout << "atanh(" << num << ") = " << result << " radians" << endl;
            cout << "atanh(" << num << ") = " << result * 180 / M_PI << " degrees" << endl;
        } else {
            cout << "atanh(" << num << ") is undefined for x = " << num << ".\n";
        }
    } catch (exception &e) {
        cout << "Invalid input: '" << x << "' is not a number." << endl;
    }

    return 0;
}
