#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x;
    int y;
};

struct Point createPoint(int x, int y) {
    struct Point p = {x, y};
    return p;
}

int main() {
    
    struct Point p = createPoint(1, 2);
    cout << "\nDisplaying coordinates of a point." << endl;
    cout << "(" << p.x << " , " ;
    cout  << p.y << ")";
   
    return 0;
}