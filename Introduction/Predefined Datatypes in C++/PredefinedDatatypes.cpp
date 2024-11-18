#include<iostream>
using namespace std;

int main()
{
    int a = 567; //valid  
    int b = 2147483800; //invalid : will result in loss of precison max int value 2147483647
    long long int c = 2147483800; // valid because of enough size max long int value 9,223,372,036,854,775,807
    char d ='_'; //underscorecharecter
    double e = 66.91;
    bool f= false;
    bool g= true;
  
    cout << "a:" << a << endl;
    cout << "b:" << b << endl; // incorrect value will be printed due to overflow
    cout << "c:" << c << endl;
    cout << "d:" << d << endl; 
    cout << "e:" << e << endl;
    cout << "f:" << f << endl;
    cout << "g:" << g << endl;
    
    return 0;
}