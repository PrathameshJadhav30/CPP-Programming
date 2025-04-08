#include <iostream>
using namespace std;

class check {
public:
    check() {
        cout << "Constructing an object of class check" << endl;
    }

    ~check() {
        cout << "Destructing the object of class check" << endl;
    }
};

int main() {
    try {
        check t1;
        throw 5;  // Throwing an integer
    }
    catch (int i) {
        cout << "Caught " << i << endl;
    }
}
