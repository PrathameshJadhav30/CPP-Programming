#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize an array with some elements
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Use two-pointer approach to reverse the array in-place
    int start = 0;         // Start pointer (beginning of the array)
    int end = n - 1;       // End pointer (end of the array)

    // Swap elements while start is less than end
    while (start < end) {
        // Swap the elements at 'start' and 'end'
        swap(arr[start], arr[end]);
        
        // Move the pointers closer to the center
        start++;
        end--;
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
