#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Student
{
  char stu_name[10];
  int stu_age;
  char stu_branch;
  int stu_id;
};
int main ()
{
  struct Student s1;		// s1 is a variable of Student type and
  s1.stu_age = 17;		//age is a member of student

  // using string function to add name
  strcpy (s1.stu_name, "Soumya");

  cout << "Name of student 1:" << s1.stu_name << endl;
  cout << "Age of student 1:" << s1.stu_age << endl;

  return 0;
}