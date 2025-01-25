#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p1;
    pair<int, int> p2(100, 1);
    p1 = make_pair(2, 3);  // function to insert value in pair
    
    cout << "The elements in pair p1 before swapping: ";
    cout << p1.first << " " << p1.second << endl;

    cout << "The elements in pair p2: ";
    cout << p2.first << " " << p2.second << endl;

    p1.swap(p2);   // swap function in pair

    cout << "The elements in pair p1 after swapping: ";
    cout << p1.first << " " << p1.second << endl;

    return 0;
}
