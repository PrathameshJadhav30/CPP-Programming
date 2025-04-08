#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'p';  // Throwing a char
    }
    catch(int p)
    {
        cout << "Integer value is caught :" << p;
    }
    catch(...)
    {
        cout << "Default catch block";
    }
}
