#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> st = {5, 5, 1, 1, 5}; // Duplicates are automatically removed in a set

    cout << "The elements in the set: ";
    for (int it : st) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
