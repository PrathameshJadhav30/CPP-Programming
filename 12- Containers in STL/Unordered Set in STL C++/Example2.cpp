#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> ust = {8, 8, 3, 3, 8, 15};  // Initialize set with elements

    // Display elements in the unordered_set
    cout << "The elements in the set: ";
    for (int it : ust) {
        cout << it << " ";
    }
    cout << endl;

    // Remove element '8' from the set
    ust.erase(8);

    // Display remaining elements
    cout << "The remaining elements in the set: ";
    for (int it : ust) {
        cout << it << " ";
    }
    cout << endl;

    // Display the size of the set
    cout << "The size of the set: " << ust.size() << endl;

    return 0;
}
