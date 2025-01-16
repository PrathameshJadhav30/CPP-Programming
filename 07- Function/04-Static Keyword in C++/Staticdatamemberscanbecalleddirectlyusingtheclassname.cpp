#include <iostream>
using namespace std;

class Test
{
    public:
    static int count; // static data member declaration
};

// not defining(initializing) but making accessible
int Test::count;

int main()
{
    //object not created like test t1, t2

    //static members can be accessed without created object
    //just use name_Of_Class::variable_name
    //if not declared static member's data value will be 0 by default
    cout << "Value of static member = " << Test::count << endl;
    
    return 0;
}