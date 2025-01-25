#include <iostream>
#include <vector>
#include <algorithm> // For make_heap
using namespace std;

int main() {
    vector<int> vect = {2, 3, 1, 30, 20, 50, 5, 10};
    
    // Converting vect to a heap
    make_heap(vect.begin(), vect.end());

    cout << "The elements in the heap (heap property maintained): ";
    for (auto it : vect) {
        cout << it << " ";
    }
    cout << endl;

    // The maximum element in the heap
    cout << "The maximum element in the heap: " << vect.front() << endl;

    return 0;
}
