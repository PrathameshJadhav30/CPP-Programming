#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Use standard library functions and objects
    vector< int>v = {1, 2, 3, 4, 5};
    sort(v.begin(), v.end());
    
    for (int x : v) {
         cout << x << " ";
    }
         cout << endl;

    return 0;
}