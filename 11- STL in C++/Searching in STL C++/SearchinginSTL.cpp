#include <iostream>
#include <algorithm> // For sort and binary_search

int main() {
    int arr[] = {2, 4, 3, 43, 4, 35, 67, 99, 85, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = 43;

    // Sort the array
    std::sort(arr, arr + n);

    // Perform binary search
    if (std::binary_search(arr, arr + n, a)) {
        std::cout << "Element " << a << " is present in the array" << std::endl;
    } else {
        std::cout << "Element " << a << " is not found in the array" << std::endl;
    }

    return 0;
}
