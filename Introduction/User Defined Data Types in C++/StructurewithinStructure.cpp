#include <iostream>
struct X
{
  int a;
};

struct Y
{
  int b;

  struct X x; //structure variable x as a member of struct Y
};
int main()
{
  struct Y y;

  x.y.b = 10; y.x.a = 20 ;//indirect initilaisation by through 
}