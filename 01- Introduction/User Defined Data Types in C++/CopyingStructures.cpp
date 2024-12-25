#include<iostream>
using namespace std;
struct student{ 
  long long int roll_no; 
  string name; 
  int phone_number;
};

int main()
{
  struct student p1 = {160815733066,"trishaank",12345};
  struct student p2;
  p2 = p1;//copying structures

  cout << "roll no : " << p2.roll_no << endl;  //accessing
  cout << "name : " << p2.name << endl;
  cout << "phone number : " << p2.phone_number << endl;
}