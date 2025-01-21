#include <iostream>
using namespace std;
class Demo
{
  public:
    int i;
    Demo(int val)
    {
       i=val;
    }
};
int main()
{
    //setting parameterised values
    Demo demo(6000);
    Demo demo2(12000);
    cout << demo.i<<endl;;
    cout << demo2.i;

return 0;
}