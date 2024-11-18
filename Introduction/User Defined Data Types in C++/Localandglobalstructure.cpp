#include <iostream>
using namespace std;


int main() { 
    struct emp 
    { 
        int id; 
        char ename[20]; 
        int sal; 
    };

    emp e1, e2;
}

//outside main declared in a function
void abc()
{ 
    //error:elements are not accesible outside main
    emp e3,e4;
}