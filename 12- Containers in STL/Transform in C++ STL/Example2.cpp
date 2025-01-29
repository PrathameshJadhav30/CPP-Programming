#include <iostream>
#include <algorithm>

using namespace std;

// Function to increment each element by 2
int increment(int x) {
    return (x + 2);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Apply increment function to each element of the array using transform
    transform(arr, arr + n, arr, increment);

    // Output the updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
