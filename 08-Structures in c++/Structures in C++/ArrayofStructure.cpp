#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Student
{
  char name[10];
  int id;
};
struct Student stu[5];
int i, j;
void ask ()
{
  for (i = 0; i < 3; i++)
    {
      cout << "enter student record: " << i + 1;
      cout << "Student name: "; cin >> stu[i].name;
      cout << endl;
      cout << "enter id: "; cin >> stu[i].id;
    }
  cout << "displaying Student record:" << endl;;
  for (i = 0; i < 3; i++)
    {
      cout << "Student name is " << stu[i].name << endl;
      cout << "id is " << stu[i].id << endl;
    }
}

int main ()
{
  ask ();
  return 0;
}