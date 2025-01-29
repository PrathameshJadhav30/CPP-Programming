#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {45, 80, 35, 69, 3};  // Initialize vector with elements

    // Display elements before sorting
    cout << "The elements of the array before sorting: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the array
    sort(arr.begin(), arr.end());

    // Display elements after sorting
    cout << "The elements of the array after sorting: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
