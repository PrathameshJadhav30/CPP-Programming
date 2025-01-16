#include <iostream>
using namespace std;
void swap (int, int);
int main ()				//caller function
{
  int a = 2, b = 3;
  swap (a, b);			//fun_call
  cout << "In calle:after swapping a=" << a << " b=" << b;
}

void
swap (int a, int b)
{
  b = (a + b) - (a = b);	//swap logic in a single line 

  cout << "In called:after swapping a=" << a << " b=" << b;
  cout << endl;
}