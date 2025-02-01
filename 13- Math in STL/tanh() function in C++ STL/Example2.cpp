#include <bits/stdc++.h>
using namespace std;

int main() {
    string x = "4.1";  // Example: Numeric string
    double num = stod(x);  // Convert string to double

    double result = tanh(num);
    cout << "tanh(" << num << ") = " << result << endl;

    return 0;
}
