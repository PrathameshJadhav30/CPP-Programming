#include <iostream>
using namespace std;
void swap(int& a, int& b) {
   int c = a;
   a= b;
   b = c;
}
int main() {
   int m =7, n = 6;
   cout << "Before Swap\n";
   cout << "m = " << m << " n = " << n << "\n";
   swap(m, n);
   cout << "After Swap by pass by reference\n";
   cout << "m = " << m << " n = " << n << "\n";
}