#include <iostream> 
using namespace std;
void superhero(string str)		//First definition.
{
  cout << "My favourite movie is " << str << endl;

}

void superhero(string str1, string str2)	//Second definition.
{
  cout << "My favourite movie is " << str1 << " vs " << str2 << endl;

}
int main()
{
  superhero("Ironman");
  //Passing value for first defination.

  superhero("Superman", "Batman");
  //Passing value for second defination.
  return 0;
}