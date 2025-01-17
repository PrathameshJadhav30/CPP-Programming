#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x;
    int y;
};

void printPoint(struct Point p) {
    
    cout << "\nDisplaying coordinates of a point." << endl;
    cout << "(" << p.x << " , " ;
    cout  << p.y << ")";
   
}

int main() {

    struct Point p = {1, 2};
    printPoint(p);
    return 0;
}