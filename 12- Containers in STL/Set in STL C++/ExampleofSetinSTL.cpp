#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> st = {5, 5, 1, 1, 5, 10}; // Duplicates are automatically removed

    // Display elements in the set
    cout << "The elements in the set: ";
    for (int it : st) {
        cout << it << " ";
    }
    cout << endl;

    // Remove element '5' from the set
    st.erase(5);

    // Display remaining elements
    cout << "The remaining elements in the set: ";
    for (int it : st) {
        cout << it << " ";
    }
    cout << endl;

    // Display the size of the set
    cout << "The size of the set: " << st.size() << endl;

    return 0;
}
