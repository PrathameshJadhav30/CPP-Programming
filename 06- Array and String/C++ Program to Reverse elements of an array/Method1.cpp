#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize an array with some elements
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the elements of the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " "; // Output each element
    }

    return 0;
}
