#include <iostream>
using namespace std;

int main() {

int num;
cout << "Enter total number of aspirants: ";
cin >> num;
float* ptr;

// memory allocation of num number of floats
ptr = new float[num];

cout << "Enter marks of aspirants." << endl;
for (int i = 0; i < num; ++i) {
cout << "aspirant" << i + 1 << ": ";
cin >> *(ptr + i);
}

cout << "\nDisplaying marks of aspirants." << endl;
for (int i = 0; i < num; ++i) {
cout << "aspirant" << i + 1 << ": " << *(ptr + i) << endl;
}

// ptr memory is released
delete[] ptr;

return 0;
}