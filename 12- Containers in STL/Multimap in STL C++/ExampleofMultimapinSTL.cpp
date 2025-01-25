#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, int> mpp;
    
    // Inserting key-value pairs into the multimap
    mpp.insert({1, 10});
    mpp.insert({2, 20});
    mpp.insert({4, 40});
    mpp.insert({8, 80});
    mpp.insert({6, 60});
    mpp.insert({3, 30});
    mpp.insert({1, 20});
    mpp.insert({4, 50});
    mpp.insert({5, 60});
    mpp.insert({6, 70});
    
    // Displaying key-value pairs in the multimap
    cout << "The key and value in the map: " << endl;
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
    
    cout << endl;
    
    // Displaying the size of the multimap
    cout << "The size of map: " << mpp.size() << endl;
    
    // Checking if the multimap is empty
    if (mpp.empty()) {
        cout << "Multimap is empty" << endl;
    } else {
        cout << "Multimap is not empty" << endl;
    }

    return 0;
}
