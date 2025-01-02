#include <iostream>
using namespace std;

int main() {
    int a = 5;

    // Output the sum of 'a', size of 'a' (int), and size of float
    cout << a + sizeof(a) + sizeof(float) << endl; // 5 + 4 + 4 = 13

    return 0;
}
