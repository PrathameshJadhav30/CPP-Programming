#include <iostream>
using namespace std;
int main ()
{
  int numbers[5] = { 17, 55, 76, 812, 735 };
  cout << "The numbers are: ";
for (const int &n:numbers)
    {
      cout << n << "  ";
    }
  cout << "\nThe numbers are: ";
  for (int i = 0; i < 5; ++i)
    {
      cout << numbers[i] << "  ";
    }
  return 0;
} 