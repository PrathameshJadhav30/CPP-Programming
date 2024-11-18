#include<iostream>
#include <bits/stdc++.h>
using namespace std;
union demo //declaring union 
{ 
  int a; 
  float b;
}d;
// 4 bytes allocated


int main() 
{ 
 //Whole union memory i.e. 4 bytes allocated to a
 d.a = 12;
 cout << "a: " << d.a << endl; //prints 12
 cout << "b: " << d.b << endl; //will print garbage

 //Union memory deallocated from int a & allocated to float b
 d.b = 14.5;
 cout << "a: " << d.a << endl; //will print garbage
 cout << "b: " << d.b << endl; //prints 14.5
 cout << "\nMemory allocated for this union is "<< sizeof(d) << " bytes" << endl;
 return 0;
}