#include <iostream>
#include <vector>
#include <algorithm> // For heap operations
using namespace std;

int main() {
    vector<int> vect = {2, 3, 1, 30, 20, 50, 5, 10};

    // Convert vect to a heap
    make_heap(vect.begin(), vect.end());
    cout << "The elements in the heap (heap property maintained): ";
    for (auto it : vect) {
        cout << it << " ";
    }

    // Adding a new element to the heap
    vect.push_back(100);          // Add 100 to the end of the vector
    push_heap(vect.begin(), vect.end()); // Restore the heap property
    cout << endl;
    cout << "The maximum element in the heap after push: " << vect.front();

    // Sorting the heap
    cout << endl;
    sort_heap(vect.begin(), vect.end()); // Sort the heap
    cout << "The elements of the heap after sorting: ";
    for (auto it : vect) {
        cout << it << " ";
    }

    return 0;
}
