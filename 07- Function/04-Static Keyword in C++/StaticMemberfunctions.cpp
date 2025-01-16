/*Program to demonstrate static member functions*/

#include <iostream>
using namespace std;

class sampleClass
{
  public:
    // static data members
    static int a,b;

    // non static data member
    int c;

    // static function definition
    // will only work with static data members
    static void add()
    {
        // static function can only access static data members
        cout << "Enter a, b values: ";
        cin >> a >> b;
        cout << "a + b = " << a + b;

        // following will give error -
        // error:cannot access non static data 'c' in static function
        // cin >> c;
    }
};

// both values will become 0 by default
int sampleClass::a;
int sampleClass::b;

int main()
{
  // calling static function with out object
  sampleClass::add();
  
  return 0;
}