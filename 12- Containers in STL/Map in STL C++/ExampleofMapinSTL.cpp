#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> mpp;

    // Inserting key-value pairs
    mpp[1] = 10;
    mpp[2] = 20;
    mpp[3] = 30;
    mpp.insert({4, 40});
    mpp.insert({5, 50});

    // Updating the value associated with key 3
    mpp[3] = 60;

    // Display key-value pairs in the map
    cout << "The key-value pairs in the map are:" << endl;
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << endl;

    // Print the size of the map
    cout << "The size of map: " << mpp.size() << endl;

    // Search for a specific key in the map
    int val = 2;
    // Using the find() function to check if key exists
    auto it = mpp.find(val);
    if (it != mpp.end()) {
        cout << val << " is present in the map with value " << it->second << endl;
    } else {
        cout << val << " is not present in the map" << endl;
    }

    return 0;
}
