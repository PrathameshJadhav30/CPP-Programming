#include<iostream>
using namespace std;
inline int pro(int x,int y)
{
   return x*y;
}
main()
{
   int a=5,b=7,res;
   res=pro(a,b);
   cout<<"product of "<<a<< " and " <<b<<" is "<<res;
}