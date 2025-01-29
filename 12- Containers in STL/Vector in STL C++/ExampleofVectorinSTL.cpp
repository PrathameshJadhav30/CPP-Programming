#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vect = {2, 5, 10, 12};  // Initialize vector with elements

    // Output the size of the vector
    cout << "Size of vector: " << vect.size() << endl;

    // Display elements of the vector
    cout << "The elements of the vector: ";
    for (int num : vect) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
