#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 3000.0;

    if (x > log(numeric_limits<double>::max())) {
        cout << "sinh(x) is too large to compute in double precision." << endl;
    } else {
        double result = sinh(x);
        cout << "sinh(x) = " << result << endl;
    }

    return 0;
}
