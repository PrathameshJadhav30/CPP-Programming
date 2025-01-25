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
   for (auto it : mset) {
       cout << it << " ";
   }
   cout << endl;

   // Counting occurrences of the element '1'
   cout << "Element 1 is present " << mset.count(1) << " no. of times in the multiset" << endl;

   // Displaying the size of the multiset
   cout << "Number of elements present in the multiset: " << mset.size() << endl;

   return 0;
}
