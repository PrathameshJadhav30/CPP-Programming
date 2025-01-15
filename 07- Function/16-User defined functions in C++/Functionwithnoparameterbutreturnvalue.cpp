#include <iostream>
#include <cstdlib>
using namespace std;

int get_random_number() {
   return rand() % 10 + 1;
}

int main() {
   cout << "Random number: " << get_random_number() << endl;
   return 0;
}