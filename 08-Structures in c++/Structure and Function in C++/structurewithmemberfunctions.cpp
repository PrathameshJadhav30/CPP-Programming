#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Employee {
  string name;
  int age;
  float salary;

  // Define a member function that prints the employee's details
  void printDetails() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
  }
};

int main() {
  Employee emp = {"John Smith", 30, 45000.0};

  // Call the member function to print the employee's details
  emp.printDetails();

  return 0;
}