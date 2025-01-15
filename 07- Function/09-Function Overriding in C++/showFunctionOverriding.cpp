#include <iostream>
using namespace std;

class Parent {
   public:
    void display() {
        cout << "Parent Function" << endl;
    }
};

class Child : public Parent {
   public:
    void display() {
        cout << "Child Function" << endl;
    }
};

int main() {
    Child childObj;
    childObj.display();
    
    return 0;
}