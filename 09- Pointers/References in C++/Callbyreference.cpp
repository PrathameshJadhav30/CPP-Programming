#include <iostream>
using namespace std;
void swap(int& x, int& y)		//aliasing a and b 
{
  int temp = x;
  
  x = y;
  y = temp;
  
  cout << "x:" << x << " y:" << y << endl;
} 
int main() 
{
  int a = 2, b = 3;
  
  swap (a, b);		//func_call
  cout << "a:" << a << " b:" << b << endl;
  
return 0;

}