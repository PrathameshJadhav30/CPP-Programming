#include <iostream>
using namespace std;

// Declaring union 'demo'
union demo {
    int a;      // 4 bytes
    double b;   // 8 bytes
} d1;          // Union variable

int main() {
    // Display the memory allocated for the union variable
    cout << "Memory allocated: " << sizeof(d1) << " bytes" << endl;
    // Union memory is allocated based on the largest datatype
    // Here, the largest datatype is double, which has a size of 8 bytes
    // Therefore, the size of the union 'demo' is 8 bytes

    return 0;
}
