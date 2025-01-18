#include <iostream>
using namespace std;

void incrementByPointer(int* x) {
  (*x)++;
}

void incrementByReference(int& x) {
  x++;
}

int main() {
  int a = 5;
  int b = 5;

  incrementByPointer(&a);
  incrementByReference(b);

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  return 0;
}