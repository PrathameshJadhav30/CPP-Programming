#include<iostream>
using namespace std;

struct student
{
    int roll_no;
    string name;
    int phone_number;
};

void display(struct student *st)  //structure pointer in function definition
{
    cout << "Roll no : " << st -> roll_no << endl;
    cout << "Name : " << st -> name << endl;
    cout << "Phone no : " << st -> phone_number << endl;
}

int main()
{
    struct student s;

    s.roll_no = 66;
    s.name = "Ron";
    s.phone_number = 12345;

    display(&s);  //passing address of struct variable in function call

    return 0;
}