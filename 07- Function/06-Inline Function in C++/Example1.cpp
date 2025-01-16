#include<iostream>
using namespace std;
inline int Min(int a, int b) {
return (a < b)? a : b;
}
// Main function
int main() {
cout << "Min (30,15): " << Min(30,15) << endl;
cout << "Min (50,400): " << Min(50,400) << endl;
cout << "Min (500,2000): " << Min(500,2000) << endl;
return 0;
}