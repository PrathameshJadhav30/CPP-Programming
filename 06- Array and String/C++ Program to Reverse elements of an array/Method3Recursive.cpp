#include <bits/stdc++.h>
using namespace std;

// Recursive function to reverse the array
void reverseArray(int arr[], int start, int end) {
    // Base condition: If the start pointer is greater or equal to the end pointer, return
    if (start >= end) {
        return;
    }
    
    // Swap the elements at 'start' and 'end'
    swap(arr[start], arr[end]);

    // Recursively call the function for the next pair
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    // Initialize an array with some elements
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the recursive function to reverse the array
    reverseArray(arr, 0, n - 1);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
