#include<iostream>
using namespace std;

int main()
{
    typedef int trish;
    typedef trish rish;
    typedef rish vicky;

    trish a = 1;
    rish b = 2;
    vicky c = 3;

    //trish, rish, vicky treated as int internally
    cout << "a:" << a << "\t" << "b:" << b << "\t" << "c:" << c;

    return 0;
}