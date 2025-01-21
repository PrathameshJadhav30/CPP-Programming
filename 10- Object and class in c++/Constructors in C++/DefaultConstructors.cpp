#include <iostream>
using namespace std;
class Demo
{
   public:
        int i;
        Demo(){
            i=8000;
          }
};

int main()
{
  Demo  demo;
  cout << demo.i;

return 0;
}