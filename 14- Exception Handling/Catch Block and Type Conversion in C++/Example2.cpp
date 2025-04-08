#include <iostream>
using namespace std;

class MyException1 {};

class MyException2 {
public:
    // Conversion constructor
    MyException2(const MyException1 &e) {
        cout << "From the Conversion constructor";
    }
};

int main() {
    try {
        MyException1 exp1;
        throw exp1;  // Throws an object of MyException1
    }
    catch (MyException2 e2) {
        cout << "Caught MyException2 " << endl;
    }
    catch (...) {
        cout << "Default catch block " << endl;
    }
}
