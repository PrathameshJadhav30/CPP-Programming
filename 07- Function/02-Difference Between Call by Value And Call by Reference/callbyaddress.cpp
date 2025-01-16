#include <iostream> 
using namespace std;
void swap (int *x, int *y)
{
  int swap;
  swap = *x;
  *x = *y;
  *y = swap;
}

int main ()
{
  int x = 2, y = 3;
  cout << "Value of x before swap is: " << x << endl;
  cout << "Value of y before swap is: " << y << endl;
  swap (&x, &y);
  cout << "Value of x is: " << x << endl;
  cout << "Value of y is: " << y << endl;
  return 0;
}