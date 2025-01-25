#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p1;
    pair<string, int> p2("PrepInsta", 1);
    
    p1.first = 2;
    p1.second = 3;
    
    cout << "The elements in pair p1: ";
    cout << p1.first << " " << p1.second << endl;

    cout << "The elements in pair p2: ";
    cout << p2.first << " " << p2.second;

    return 0;
}
