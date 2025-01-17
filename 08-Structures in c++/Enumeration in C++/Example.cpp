#include <bits/stdc++.h> 
using namespace std;

int main()
   {
       enum emp_dept    //declaring enum emp_dept and its variables
           {
                 assembly,
                 manufacturing,
                 accounts,
                 stores
           };
       struct employee   //declaring srtucture
           {
              char name[30];
              int age;
              float bs;
              enum emp_dept department;
           };
         struct employee e;
       strcpy(e.name, "Nitin Kumar");   //intializing employee details
       e.age=22;
       e.bs=12500;
       e.department=stores;
       
       printf("\n Name = %s",e.name);
       printf("\n Age = %d",e.age);
       printf("\n Basic Salary = %f",e.bs);  
       printf("\n Department = %d",e.department);

          if(e.department==accounts)
              printf("\n %s is an accountant",e.name);
          else
              printf("\n %s is not an accountant",e.name);
              
    return 0;
    }