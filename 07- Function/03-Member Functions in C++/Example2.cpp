// member function definition inside the class
#include <iostream>
using namespace std;

class Student//class definition
{
    // member variables
    int id;
    string name;
    
    public:
    // member function declared and defined
    // inside class
    void displayStudent()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
    
    void setDetails(int studID, string studName){
        id = studID;
        name = studName;
    }
};
int main()
{
    Student s1;
    
    s1.setDetails(1, "Naman");
    s1.displayStudent();
}