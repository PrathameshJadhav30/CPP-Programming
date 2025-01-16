#include<iostream>
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
    Test t1;
    
    cout << "Value of static member = " << t1.count << endl;
    
    return 0;
}