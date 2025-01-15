#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
  // Negative floating point number as parameter  
  double x = -3.2;
  double y = ceil(x);
  cout << "The smallest integer greater than or equal to " << x << " is " << y << endl;

  // Integer as parameter
  int z = 4;
  int w = ceil(z);
  cout << "The smallest integer greater than or equal to " << z << " is " << w << endl;
  return 0;
}