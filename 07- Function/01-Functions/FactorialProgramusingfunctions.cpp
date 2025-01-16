#include <iostream>
using namespace std;
void fact();//func_declartion
main()//func_calle
{
fact();//function call
fact();//func_call
}
void fact()//func_definition
{
int n;
cout<<"enter n value:"; cin>>n;
long f=1;
while(n==1)
{
f=f*n;
n--;
}
cout<<"factorial:"<<f;
}