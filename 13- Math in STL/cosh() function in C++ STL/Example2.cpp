#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 3000.0, result;

    // Check for overflow before computing cosh(x)
    if (x > log(numeric_limits<double>::max())) {
        cout << "cosh(3000.0) is too large to compute in double precision." << endl;
    } else {
        result = cosh(x);
        cout << "cosh(3000.0) = " << result << endl;
    }

    return 0;
}
