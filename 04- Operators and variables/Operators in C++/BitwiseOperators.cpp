#include<iostream>
using namespace std;

int main() {
    int a = 11; // 0000 1011 (binary representation)
    int b = 7;  // 0000 0111 (binary representation)

    // Bitwise AND: sets bits to 1 if both corresponding bits are 1
    cout << "(a & b)  : " << (a & b) << endl;

    // Bitwise OR: sets bits to 1 if at least one of the corresponding bits is 1
    cout << "(a | b)  : " << (a | b) << endl;

    // Bitwise XOR: sets bits to 1 if corresponding bits are different
    cout << "(a ^ b)  : " << (a ^ b) << endl;

    // Bitwise NOT: inverts all the bits
    cout << "(~a)     : " << ~a << endl;

    // Bitwise left shift: shifts the bits of 'a' to the left by 2 positions
    cout << "(a << 2) : " << (a << 2) << endl;

    // Bitwise right shift: shifts the bits of 'a' to the right by 2 positions
    cout << "(a >> 2) : " << (a >> 2) << endl;

    return 0;
}
