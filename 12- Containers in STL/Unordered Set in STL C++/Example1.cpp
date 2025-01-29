#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> ust = {8, 8, 3, 3, 8};  // Initialize set with elements

    // Display elements in the unordered_set
    cout << "The elements in the set: ";
    for (int it : ust) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
