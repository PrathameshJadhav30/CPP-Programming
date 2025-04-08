#include <iostream>
using namespace std;

class Base {};
class Derived : public Base {};

int main()
{
  try
  {
    throw Derived();  // Throws an object of type Derived
  }
  catch (Base& b)
  {
    cout << "Caught base exception" << endl;
  }
  catch (Derived& d)
  {
    cout << "Caught derived exception" << endl;
  }

  return 0;
}
