#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int res[n];

    // Using transform to add corresponding elements of arr1 and arr2
    transform(arr1, arr1 + n, arr2, res, plus<int>());

    // Output the result
    cout << "Result: ";
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
