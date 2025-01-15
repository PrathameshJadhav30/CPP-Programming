#include <iostream>
using namespace std;

int &max(int &x, int &y) {
  if (x > y) {
    return x;
  }
  return y;
}

int main() {
  int a = 10;
  int b = 20;
  int &c = max(a, b);  // c is a reference to the larger of a and b

  cout << "c: " << c << endl;  

  c = 30;  // This sets the larger of a and b to 30
  cout << "a: " << a << endl;  
  cout << "b: " << b << endl;  

  return 0;
}