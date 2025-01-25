#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   multiset<int> mset;
   
   // Inserting elements into the multiset
   mset.insert(1);
   mset.insert(2);
   mset.insert(10);
   mset.insert(15);
   mset.insert(1);  // Duplicate value
   mset.insert(4);

   // Displaying elements in the multiset
   cout << "The elements in the multiset: ";
   for(auto it : mset) {
       cout << it << " ";
   }

   return 0;
}
