#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mpp;
    
    // Inserting key-value pairs into the map
    mpp.insert({1, 10});
    mpp.insert({2, 20});
    mpp.insert({4, 40});
    mpp.insert({8, 80});
    mpp.insert({6, 60});
    mpp.insert({3, 30});
    
    // Displaying key-value pairs in the map
    cout << "The key and value in the map:" << endl;
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
    
    cout << endl;
    
    // Displaying the size of the map
    cout << "The size of map: " << mpp.size() << endl;

    return 0;
}
