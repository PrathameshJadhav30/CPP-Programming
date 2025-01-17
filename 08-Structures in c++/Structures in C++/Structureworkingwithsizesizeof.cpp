#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Student
{
int stu_id;
char stu_name[10];
};

int main()
{
struct Student info;

cout<< "size of Student id is: "<< sizeof(info.stu_id) << " bytes" << endl;  //size of stu_id
cout<< "size of Student name: " << sizeof(info.stu_name) << " bytes" << endl; //size of stu_name
cout<< "size of Student structure: "<< sizeof(info) << " bytes" << endl;       //size of Student
return 0;
}