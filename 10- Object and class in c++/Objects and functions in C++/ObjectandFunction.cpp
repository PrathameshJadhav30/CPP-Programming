#include <iostream>

using namespace std;

class MyClass {
  public:
    int x;
    void setX(int val) {
      x = val;
    }
    int getX() {
      return x;
    }
};

int main() {
  MyClass obj;
  obj.setX(5);
  cout << obj.getX() << endl;
  return 0;
}