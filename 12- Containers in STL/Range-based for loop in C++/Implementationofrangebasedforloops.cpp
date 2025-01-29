#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Using a vector with range-based for loop
    vector<int> v = {0, 1, 2, 3, 4, 5};
    for (int i : v)
        cout << i << ' ';
    cout << '\n';

    // Iterating over a braced initializer list
    for (int n : {0, 1, 2, 3, 4, 5})
        cout << n << ' ';
    cout << '\n';

    // Iterating over an array
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a)
        cout << n << ' ';
    cout << '\n';

    // Printing "Prime" for each element in the array
    for (int n : a)
        cout << "Prime" << ' ';
    cout << '\n';

    // Iterating over a string
    string str = "Prep";
    for (char c : str)
        cout << c << ' ';
    cout << '\n';

    return 0;
}
