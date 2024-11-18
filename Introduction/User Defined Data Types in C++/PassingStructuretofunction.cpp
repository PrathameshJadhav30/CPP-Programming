#include<iostream>
using namespace std;
struct student 
{
    int roll_no;
    string name; 
    int phone_number;
};

void display(struct student st)  //structure variable in function 
{
    cout << "Roll no : " << st.roll_no << endl; 
    cout << "Name : " << st.name << endl; 
    cout << "Phone no : " << st.phone_number << endl; 
} 

int main()
{ 
    struct student s;  //memory allocated 

    s.roll_no = 66; 
    s.name = "Jim Halpert"; 
    s.phone_number = 756888; 

    display(s);  // function call with structure variable  

    return 0;
}