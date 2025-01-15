#include <iostream>
using namespace std;

void print_string(string input) {
   cout << "Input: " << input << endl;
}

int main() {
   string message = "Prathamesh";
   print_string(message); // Calling the function
   return 0;
}