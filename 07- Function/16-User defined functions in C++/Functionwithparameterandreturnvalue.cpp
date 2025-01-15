#include <iostream>
using namespace std;

int multiply(int x, int y) {
   return x * y;
}

int main() {
   int a = 2, b = 3;
   int result = multiply(a, b);
   cout << "Result: " << result << endl;
   return 0;
}