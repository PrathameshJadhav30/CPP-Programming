#include <iostream>
#include <map> // Required for std::map
using namespace std;

int main() {
    map<int, int> mpp;

    // Inserting key-value pairs into the map
    mpp[1] = 10;
    mpp[2] = 20;
    mpp[3] = 30;
    mpp.insert({4, 40});
    mpp.insert({5, 50});

    // Display the contents of the map
    cout << "The key-value pairs in the map are:" << endl;
    for (const auto& it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
