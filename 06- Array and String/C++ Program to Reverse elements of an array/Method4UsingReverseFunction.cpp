#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize an array with some elements
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Use the reverse function from the Standard Library to reverse the array
    reverse(arr, arr + n);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
