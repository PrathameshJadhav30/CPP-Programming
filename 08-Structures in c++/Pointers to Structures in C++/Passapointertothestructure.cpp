#include <iostream>
using namespace std;

struct Employee {
  string name;
  int age;
  double salary;
};

int main() {
  
  // create a Employee structure variable 
  Employee e;
  
  // accessing the members of Employee structure
  e.name = "John";
  e.age = 30;
  e.salary = 50000.0;

  // create a pointer to the Employee structure
  Employee *p_ptr = &e;

  // access the structure's members using the pointer
  cout << "Name: " << p_ptr->name << endl;
  cout << "Age: " << p_ptr->age << endl;
  cout << "Salary: " << p_ptr->salary << endl;
  
  cout<<endl; 
  
  // assign values to the structure's members using the pointer 
  p_ptr->name = "Sahil";
  p_ptr->age = 35;
  p_ptr->salary = 55000.0;

  // access the structure's members using the pointer
  cout << "Name: " << e.name << endl;
  cout << "Age: " << e.age << endl;
  cout << "Salary: " << e.salary << endl;

  return 0;
}