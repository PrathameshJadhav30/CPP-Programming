#include <iostream>
using namespace std;

int &getElement(int *arr, int index) {
  return arr[index];
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  getElement(arr, 3) = 10;
  cout << arr[3] << endl;  
  return 0;
}