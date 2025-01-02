#include <iostream> // Include necessary header for I/O operations
using namespace std;

int main() {
    // Note: int size - 4 bytes, char size - 1 byte

    // Initialize integer array with 6 elements (each 4 bytes)
    int arr1[6] = {1, 2, 3, 4, 5, 6}; 

    // Initialize character array with 5 elements (each 1 byte)
    char arr2[] = {'H', 'e', 'l', 'l', 'o'}; 

    // Display the size of the integer array in bytes
    cout << "Size of int array: " << sizeof(arr1) << " bytes";
    
    // Display the size of the character array in bytes
    cout << "\nSize of char array: " << sizeof(arr2) << " bytes";
    
    // Calculate the number of elements in the integer array
    // Number of elements = Total array size / Size of one element
    int items = sizeof(arr1) / sizeof(arr1[0]);
    
    // Display the number of elements in the integer array
    cout << "\n\nItems in arr1: " << items;

    return 0; // Exit the program successfully
}
