#include<iostream>
using namespace std;

class check1 {
public:
    check1() {
        cout << "Constructing an Object of class check1" << endl;
    }
    ~check1() {
        cout << "Destructing an Object of the class check1" << endl;
    }
};

class check2 {
public:
    check2() {
        cout << "Constructing an Object of class check2" << endl;
        throw 5;
    }
    ~check2() {
        cout << "Destructing the Object of class check2" << endl;
    }
};

int main() {
    try {
        check1 t1;
        check2 t2;
        check1 t3;  // This line is never reached
    }
    catch (int i) {
        cout << "Caught " << i << endl;
    }
}
