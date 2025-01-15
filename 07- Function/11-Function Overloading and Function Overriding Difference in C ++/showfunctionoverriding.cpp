#include <iostream> 
using namespace std;
class Marvel
{				//Base Class. 
public:
  void fav(string s)		//Function declaration.
  {
    cout << "My favorite is " << s << endl;
  }
};
class Dc:public Marvel
{				//Derived class   
public:
  void fav(string s)		//Overridden function.   
  {
    cout << "My favorite is " << s << endl;
  }
};
int main()
{
  Marvel m;
  Dc d;
  m.fav("Marvel");
  //Base class function will be called.
  d.fav("Dc");
  //Derived class function will be called.
  return 0;
}