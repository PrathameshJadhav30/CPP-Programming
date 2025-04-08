#include <iostream>
using namespace std;

class Base {};
class Derived : public Base {};

int main()
{
  try
  {
    throw Derived();  // Throwing a Derived object
  }
  catch (Derived& d)
  {
    cout << "Caught derived exception" << endl;
  }
  catch (Base& b)
  {
    cout << "Caught base exception" << endl;
  }
  return 0;
}
