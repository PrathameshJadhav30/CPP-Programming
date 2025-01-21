#include <iostream>

using namespace std;

class MyClass {
  public:
    int x;
    MyClass(int val) {
      x = val;
    }
    int getX() {
      return x;
    }
};

int main() {
MyClass obj(5);
cout << obj.getX() << endl;
return 0;
}