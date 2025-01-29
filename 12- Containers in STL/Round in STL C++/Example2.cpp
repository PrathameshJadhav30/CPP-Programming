#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numbers[] = {-13.13, -15.48, -60.7};

    for (double num : numbers) {
        cout << "round(" << num << ") = " << round(num) << endl;
    }

    return 0;
}
