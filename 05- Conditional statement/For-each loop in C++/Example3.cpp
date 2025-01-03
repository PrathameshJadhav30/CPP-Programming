#include<iostream>
using namespace std;

int main()
{
    // Number of elements in the array
    int n = 5;

    // Initialize the array
    int items[n] = { 2, 4, 6, 8, 10 };

    // Display the elements of the array
    cout << "Elements are:";
    for (int i = 0; i < n; i++) {
        cout << " " << items[i];
    }
    cout << endl;

    // Element to search for
    int key = 6;
    cout << "Element to be searched: " << key << endl;

    // Search for the element using a range-based for loop
    for (int i : items) {
        if (i == key) {  // If the element matches the key
            cout << "Element found" << endl;
            return 0;  // Exit the program as the element is found
        }
    }

    // If the element is not found
    cout << "Element not found" << endl;

    return 0;  // Exit the program
}
