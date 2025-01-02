#include <iostream> // Include necessary header for I/O operations
using namespace std;

int main() {
    // Note: int size - 4 bytes, char size - 1 byte

    // Declare and initialize integer array (6 elements)
    int arr1[6] = {1, 2, 3, 4, 5, 6}; // Integer array (6 elements, 4 bytes each)

    // Declare and initialize character array (5 elements)
    char arr2[] = {'H', 'e', 'l', 'l', 'o'}; // Character array (5 elements, 1 byte each)

    // Display the size of the integer array in bytes
    cout << "Size of int array: " << sizeof(arr1) << " bytes";

    // Display the size of the character array in bytes
    cout << "\nSize of char array: " << sizeof(arr2) << " bytes";
    
    // Calculate the number of elements in the integer array
    int items = sizeof(arr1) / sizeof(arr1[0]);
    
    // Display the number of items in the integer array
    cout << "\n\nItems in arr1: " << items;

    return 0; // Exit the program successfully
}
