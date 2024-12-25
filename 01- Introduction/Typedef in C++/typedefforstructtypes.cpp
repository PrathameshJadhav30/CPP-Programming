#include<iostream>
using namespace std;

// typedef struct created here
typedef struct stuAlias
{
    string name;
    int id;
    string klg;
}student;

int main()
{

    student s1,s2;  //2 variables of type student
    
    s1.id = 66;
    s1.name = "trishaank";
    s1.klg = "MECS";
    
    s2.id = 27;
    s2.klg = "KMIT";
    s2.name = "Rishi";
    
    cout << "Trishaank Details:\n";
    cout << s1.name << " "<< s1.id << " "<< s1.klg << endl;

    cout << "\nRishi Details:\n";
    cout << s2.name << " " << s2.id <<" "<< s2.klg;

    return 0;
}