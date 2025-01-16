#include <iostream>
using namespace std;
int main() 
{ 
  int a1=10; //normal variable 
  const int a2=20; //const variable
  //works fine as normal variable
  a1++;
  //this would give error as  
  //we are trying to change value in const variable 
  a2++;
  return 0;
}